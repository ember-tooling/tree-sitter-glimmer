module.exports = grammar({
  name: "glimmer",

  rules: {
    // Entire file
    template: ($) => repeat(choice($.mustache_statement, $.element_node)),

    //
    // HTML Elements
    //

    // Match any sequence of letters, including hyphens (for web components)
    tag_name: () => /([a-zA-Z]|-)+/,

    // "Normal" elements with separate opening and closing tags
    element_node_start: ($) => seq("<", $.tag_name, ">"),
    element_node_end: ($) => seq("</", $.tag_name, ">"),

    // "Void" elements are self-closing
    element_node_void: ($) => seq("<", $.tag_name, "/>"),

    // An "Element" is either a "normal" or "void" element
    element_node: ($) =>
      choice(
        seq($.element_node_start, $.element_node_end),
        $.element_node_void
      ),

    // Entering/existing Handlebars expressions
    mustache_statement_start: () => "{{",
    mustache_statement_end: () => "}}",

    // Glimmer parses all of these as "path expressions"
    // - Variables (foo)
    // - Nested variable access (foo.bar_)
    // - Helpers (foo-bar)
    path_expression: () => /([a-zA-Z]|-|\.)+/,

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
        $.path_expression
      ),

    mustache_statement: ($) =>
      seq(
        $.mustache_statement_start,
        repeat($._value),
        $.mustache_statement_end
      ),

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
