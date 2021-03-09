module.exports = grammar({
  name: "glimmer",

  externals: ($) => [$.comment],

  rules: {
    // Entire file
    template: ($) => repeat($._declaration),

    // Each individual "thing" in the file
    _declaration: ($) =>
      choice(
        alias($.comment, $.comment_statement),
        $.mustache_statement,
        $.block_statement,
        $.element_node,
        $.text_node
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
    _single_quote_string_literal: () => seq("'", /[^'\\]+/, "'"),
    // https://github.com/tree-sitter/tree-sitter-javascript/blob/37af80d372ae9e2f5adc2c6321d5a34294dc348b/grammar.js#L818
    _double_quote_string_literal: () => seq('"', /[^"\\]+/, '"'),

    number_literal: () => /[0-9]+/,

    boolean_literal: () => choice("true", "false"),

    //
    // HTML Elements
    //

    // Match a sequence of letters, plus
    // - Hyphens (for web components)
    // - Period (for contextual Glimmer components)
    tag_name: () => /([a-zA-Z0-9]|-|\.)+/,

    // "Normal" elements with separate opening and closing tags
    element_node_start: ($) =>
      seq(
        "<",
        $.tag_name,
        repeat(
          choice(
            $.attribute_node,
            $.mustache_statement,
            alias($.comment, $.comment_statement)
          )
        ),
        optional($.block_params),
        ">"
      ),
    element_node_end: ($) => seq("</", $.tag_name, ">"),

    // "Void" elements are self-closing
    element_node_void: ($) => seq("<", $.tag_name, "/>"),

    // An "Element" is either a "normal" or "void" element
    element_node: ($) =>
      choice(
        seq($.element_node_start, repeat($._declaration), $.element_node_end),
        $.element_node_void
      ),

    attribute_name: () => /[^<>"'/={}()\s\.,!?|]+/,

    attribute_node: ($) =>
      seq(
        $.attribute_name,
        optional(
          seq(
            "=",
            choice($.concat_statement, $.number_literal, $.mustache_statement)
          )
        )
      ),

    // Special attribute-value strings that can embed a mustache statement
    concat_statement: ($) =>
      choice(
        $._single_quote_concat_statement,
        $._double_quote_concat_statement
      ),

    _single_quote_concat_statement: ($) =>
      seq(
        "'",
        repeat(
          choice(
            $._mustache_safe_single_quote_string_literal_content,
            $.mustache_statement
          )
        ),
        "'"
      ),
    _double_quote_concat_statement: ($) =>
      seq(
        '"',
        repeat(
          choice(
            $._mustache_safe_double_quote_string_literal_content,
            $.mustache_statement
          )
        ),
        '"'
      ),

    _mustache_safe_string_literal: ($) =>
      choice(
        $._mustache_safe_single_quote_string_literal,
        $._mustache_safe_double_quote_string_literal
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
        $.identifier
      ),

    hash_pair: ($) =>
      seq(field("key", $.identifier), "=", field("value", $._expression)),

    mustache_statement: ($) =>
      seq("{{", choice($._expression, $.helper_invocation), "}}"),

    sub_expression: ($) =>
      seq("(", choice($._expression, $.helper_invocation), ")"),

    // There *must* be either:
    // - 1 or more positional argument and 0 or more hash pairs
    // - 0 or more positional arguments and 1 or more hash pairs
    _arguments: ($) =>
      choice(
        seq(repeat1(field("argument", $._expression)), repeat($.hash_pair)),
        seq(repeat(field("argument", $._expression)), repeat1($.hash_pair))
      ),

    helper_invocation: ($) =>
      seq(
        field("helper", choice($.identifier, $.path_expression)),
        $._arguments
      ),

    //
    // Block Expression
    //

    block_statement_start: ($) =>
      seq(
        "{{#",
        field("path", $.identifier),
        $._arguments,
        optional($.block_params),
        "}}"
      ),

    block_statement_end: ($) => seq("{{/", field("path", $.identifier), "}}"),

    block_statement: ($) =>
      seq(
        $.block_statement_start,
        field("program", repeat($._declaration)),
        $.block_statement_end
      ),
  },
});
