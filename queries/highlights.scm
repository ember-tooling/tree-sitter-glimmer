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

; An identifier in a mustache expression is a variable
((mustache_statement (path_expression (identifier) @variable))
  (#not-match? @variable "yield"))
; As are arguments in a block statement
(block_statement_start (path_expression (identifier) @variable))
; As is an identifier in a block param
(block_params (identifier) @variable)
; As are helper arguments
(helper_invocation argument: (path_expression (identifier) @variable))

; If the identifier is just "yield", it's a key-word
((mustache_statement (path_expression (identifier) @keyword))
  (#match? @keyword "yield"))

; Helpers are functions
((helper_invocation helper: (path_expression (identifier) @function))
  (#not-match? @function "if|yield"))
((helper_invocation helper: (path_expression (identifier) @conditional))
  (#match? @conditional "if"))
((helper_invocation helper: (path_expression (identifier) @keyword))
  (#match? @keyword "yield"))

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
