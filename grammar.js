module.exports = grammar({
  name: "glimmer",

  externals: ($) => [$.comment],

  rules: {
    // Entire file
    template: ($) =>
      repeat(
        choice(
          alias($.comment, $.comment_statement),
          $.mustache_statement,
          $.element_node,
          $.text_node
        )
      ),

    //
    // Text
    //

    // Match anything that doesn't start with
    // - Whitespace
    // - An open/close HTML delimiter (<, >)
    // - An open/close Mustache delimiter ({, })
    text_node: () => /[^<>{}\s]+/,

    //
    // HTML Elements
    //

    // Match a sequence of letters, plus
    // - Hyphens (for web components)
    // - Period (for contextual Glimmer components)
    tag_name: () => /([a-zA-Z]|-|\.)+/,

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
        seq(
          $.element_node_start,
          repeat(
            choice(
              $.text_node,
              $.element_node,
              alias($.comment, $.comment_statement),
              $.mustache_statement
            )
          ),
          $.element_node_end
        ),
        $.element_node_void
      ),

    attribute_name: () => /[^<>"'/={}\s]+/,

    attribute_node: ($) =>
      seq(
        $.attribute_name,
        optional(
          seq(
            "=",
            choice(
              alias($._mustache_safe_string_literal, $.string_literal),
              $.concat_statement,
              $.number_literal,
              $.mustache_statement
            )
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
      prec(1, seq("'", $.mustache_statement, "'")),
    _double_quote_concat_statement: ($) =>
      prec(1, seq('"', $.mustache_statement, '"')),

    _mustache_safe_string_literal: ($) =>
      choice(
        $._mustache_safe_single_quote_string_literal,
        $._mustache_safe_double_quote_string_literal
      ),
    _mustache_safe_single_quote_string_literal: () => seq("'", /[^'\\{]+/, "'"),
    _mustache_safe_double_quote_string_literal: () => seq('"', /[^"\\{]+/, '"'),

    block_params: ($) => seq("as", "|", repeat($.path_expression), "|"),

    // Entering/existing Handlebars expressions
    _mustache_statement_start: () => "{{",
    _mustache_statement_end: () => "}}",

    path_expression: ($) =>
      seq($._identifier, optional(seq(".", $._identifier))),

    identifier: () => /([a-zA-Z])+/,
    helper_identifier: () => /([a-zA-Z]|-)+/,
    _identifier: ($) => choice($.helper_identifier, $.identifier),

    // Represents anything that can be a "value"; things like
    // - Strings
    // - Numbers
    // - Variables
    // - Handlebars sub-expressions
    _value: ($) =>
      choice(
        $.string_literal,
        $.number_literal,
        $.boolean_literal,
        $.path_expression,
        $.sub_expression
      ),

    mustache_statement: ($) =>
      seq(
        $._mustache_statement_start,
        repeat($._value),
        $._mustache_statement_end
      ),

    sub_expression: ($) => seq("(", repeat($._value), ")"),

    //
    // Primitives
    //

    string_literal: ($) =>
      choice($._single_quote_string_literal, $._double_quote_string_literal),
    // https://github.com/tree-sitter/tree-sitter-javascript/blob/37af80d372ae9e2f5adc2c6321d5a34294dc348b/grammar.js#L826
    _single_quote_string_literal: () => seq("'", /[^'\\]+/, "'"),
    // https://github.com/tree-sitter/tree-sitter-javascript/blob/37af80d372ae9e2f5adc2c6321d5a34294dc348b/grammar.js#L818
    _double_quote_string_literal: () => seq('"', /[^"\\]+/, '"'),

    number_literal: () => /[\da-fA-F](_?[\da-fA-F])*/,

    boolean_literal: () => choice("true", "false"),
  },
});
