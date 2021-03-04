; === Tag Names ===

; Tags that start with a lower case letter are HTML tags
((tag_name) @tag
  (#match? @tag "^[a-z]"))
; Tags that start with a capital letter are Glimmer components
((tag_name) @constructor
  (#match? @constructor "^[A-Z]"))

(attribute_name) @property

(string_literal) @string
(number_literal) @number
(boolean_literal) @boolean

(concat_statement) @string

; === Block Statements ===

; Highlight the brackets
(block_statement_start) @tag.delimiter
(block_statement_end) @tag.delimiter

; Highlight `if`/`each`/`let`
((block_statement_start path: (identifier) @conditional)
  (#match? @conditional "^(if|each|let)$"))
((block_statement_end path: (identifier) @conditional)
  (#match? @conditional "^(if|each|let)$"))

; == Mustache Statements ===

; Hightlight the whole statement, to color brackets and separators
(mustache_statement) @tag.delimiter

; Generic identifiers are variables
(path_expression (identifier) @variable)
; Helpers are functions
(helper_identifier) @function

(comment_statement) @comment

(attribute_node "=" @operator)

(block_params "as" @keyword)
(block_params "|" @operator)

[
  "<"
  ">"
  "</"
  "/>"
] @tag.delimiter
