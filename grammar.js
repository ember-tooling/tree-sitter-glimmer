export default grammar({
  name: "glimmer",

  externals: ($) => [$.comment, $.raw_text],

  rules: {
    // Entire file
    template: ($) => repeat($._declaration),

    // Each individual "thing" in the file
    _declaration: ($) =>
      choice(
        alias($.comment, $.comment_statement),
        $.mustache_statement,
        $.block_statement,
        prec(2, $.style_element),
        $.element_node,
        prec(-1, $.text_node),
      ),

    //
    // Text
    //

    // Match anything that doesn't start with
    // - An open/close HTML delimiter (<, >)
    // - An open/close Mustache delimiter ({, })
    text_node: () => token(/[^<>{}]+/),

    //
    // Primitives
    //

    string_literal: ($) =>
      choice($._single_quote_string_literal, $._double_quote_string_literal),
    // https://github.com/tree-sitter/tree-sitter-javascript/blob/37af80d372ae9e2f5adc2c6321d5a34294dc348b/grammar.js#L826
    _single_quote_string_literal: () => seq("'", /[^'\\]*/, "'"),
    // https://github.com/tree-sitter/tree-sitter-javascript/blob/37af80d372ae9e2f5adc2c6321d5a34294dc348b/grammar.js#L818
    _double_quote_string_literal: () => seq('"', /[^"\\]*/, '"'),

    number_literal: () => /[0-9]+/,

    boolean_literal: () => choice("true", "false"),

    //
    // HTML Elements
    //

    // Match a sequence of letters, plus
    // - @ (for arguments, so they can only appear first)
    // - Hyphens (for web components)
    // - Period (for contextual Glimmer components)
    // - Colon (for component namespacing and named blocks)
    tag_name: () => /(@?[a-zA-Z0-9]|-|:|\.)+/,

    // "Normal" elements with separate opening and closing tags
    element_node_start: ($) =>
      seq(
        "<",
        $.tag_name,
        repeat(
          choice(
            $.attribute_node,
            $.mustache_statement,
            alias($.comment, $.comment_statement),
          ),
        ),
        optional($.block_params),
        ">",
      ),
    element_node_end: ($) => seq("</", $.tag_name, ">"),

    // "Void" elements are self-closing
    element_node_void: ($) =>
      seq(
        "<",
        $.tag_name,
        repeat(
          choice(
            $.attribute_node,
            $.mustache_statement,
            alias($.comment, $.comment_statement),
          ),
        ),
        "/>",
      ),

    // An "Element" is either a "normal" or "void" element
    element_node: ($) =>
      choice(
        seq($.element_node_start, repeat($._declaration), $.element_node_end),
        $.element_node_void,
      ),

    // Mirror tree-sitter-html's special handling of <style> elements:
    // treat the contents as a single RAW_TEXT token up to the closing tag.
    //
    // NOTE: We only special-case <style> here (not <script>) because that is
    // what the new corpus test asserts.
    style_element: ($) =>
      prec.right(
        2,
        seq(
          optional($._style_element_whitespace),
          alias($.style_start_tag, $.start_tag),
          optional($.raw_text),
          alias($.style_end_tag, $.end_tag),
          optional($._style_element_whitespace),
        ),
      ),

    _style_element_whitespace: () => token(/\s+/),


    // These are only used as alias targets so the parse tree matches the
    // upstream HTML grammar's node names.
    start_tag: ($) =>
      seq(
        "<",
        $.tag_name,
        repeat(
          choice(
            $.attribute_node,
            $.mustache_statement,
            alias($.comment, $.comment_statement),
          ),
        ),
        optional($.block_params),
        ">",
      ),

    end_tag: ($) => seq("</", $.tag_name, ">"),

    style_start_tag: ($) =>
      seq(
        "<",
        alias("style", $.tag_name),
        repeat(
          choice(
            $.attribute_node,
            $.mustache_statement,
            alias($.comment, $.comment_statement),
          ),
        ),
        optional($.block_params),
        ">",
      ),

  style_end_tag: ($) => seq("</", alias("style", $.tag_name), ">"),

    attribute_name: () => /[^<>"'/={}()\s\.,!?|]+/,

    _splattributes: () => "...attributes",

    attribute_node: ($) =>
      choice(
        seq(
          $.attribute_name,
          optional(
            seq(
              "=",
              choice(
                $.concat_statement,
                $.number_literal,
                $.mustache_statement,
              ),
            ),
          ),
        ),
        alias($._splattributes, $.attribute_name),
      ),

    // Special attribute-value strings that can embed a mustache statement
    concat_statement: ($) =>
      choice(
        $._single_quote_concat_statement,
        $._double_quote_concat_statement,
      ),

    _single_quote_concat_statement: ($) =>
      seq(
        "'",
        repeat(
          choice(
            $._mustache_safe_single_quote_string_literal_content,
            $.mustache_statement,
          ),
        ),
        "'",
      ),
    _double_quote_concat_statement: ($) =>
      seq(
        '"',
        repeat(
          choice(
            $._mustache_safe_double_quote_string_literal_content,
            $.mustache_statement,
          ),
        ),
        '"',
      ),

    _mustache_safe_string_literal: ($) =>
      choice(
        $._mustache_safe_single_quote_string_literal,
        $._mustache_safe_double_quote_string_literal,
      ),
    _mustache_safe_single_quote_string_literal_content: () => /[^'\\{]+/,
    _mustache_safe_single_quote_string_literal: ($) =>
      seq("'", $._mustache_safe_single_quote_string_literal_content, "'"),
    _mustache_safe_double_quote_string_literal_content: () => /[^"\\{]+/,
    _mustache_safe_double_quote_string_literal: ($) =>
      seq('"', $._mustache_safe_double_quote_string_literal_content, '"'),

    block_params: ($) => seq("as", "|", repeat($.identifier), "|"),

    identifier: () => /[^<>"'/={}()\s\.,!|]+/,
    path_expression: ($) => seq($.identifier, repeat1(seq(".", $.identifier))),

    // Represents anything that can be a "value"; things like
    // - Strings
    // - Numbers
    // - Variables
    // - Handlebars sub-expressions
    _expression: ($) =>
      choice(
        prec(1, $.number_literal),
        $.string_literal,
        $.boolean_literal,
        $.sub_expression,
        $.path_expression,
        $.identifier,
      ),

    hash_pair: ($) =>
      seq(field("key", $.identifier), "=", field("value", $._expression)),

    mustache_statement: ($) =>
      seq(
        choice("{{", "{{~"),
        choice($._expression, $.helper_invocation),
        choice("}}", "~}}"),
      ),

    sub_expression: ($) =>
      seq("(", choice($._expression, $.helper_invocation), ")"),

    // There *must* be either:
    // - 1 or more positional argument and 0 or more hash pairs
    // - 0 or more positional arguments and 1 or more hash pairs
    _arguments: ($) =>
      choice(
        seq(repeat1(field("argument", $._expression)), repeat($.hash_pair)),
        seq(repeat(field("argument", $._expression)), repeat1($.hash_pair)),
      ),

    helper_invocation: ($) =>
      seq(
        field("helper", choice($.identifier, $.path_expression)),
        $._arguments,
      ),

    //
    // Block Expression
    //

    block_statement_start: ($) =>
      seq(
        choice("{{#", "{{~#"),
        field("path", $.identifier),
        $._arguments,
        optional($.block_params),
        choice("}}", "~}}"),
      ),

    block_statement_end: ($) =>
      seq(
        choice("{{/", "{{~/"),
        field("path", $.identifier),
        choice("}}", "~}}"),
      ),

    block_statement: ($) =>
      seq(
        $.block_statement_start,
        field("program", repeat($._declaration)),
        $.block_statement_end,
      ),
  },
});
