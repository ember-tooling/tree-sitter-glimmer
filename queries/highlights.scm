; === Tag Names ===

; Tags that start with a lower case letter are HTML tags
((tag_name) @tag
  (#match? @tag "^[a-z]"))
; Tags that start with a capital letter are Glimmer components
((tag_name) @constructor
  (#match? @constructor "^[A-Z]"))

(attribute_name) @attribute

(string_literal) @string
(number_literal) @number

(mustache_statement) @tag.delimiter
(mustache_statement (path_expression) @variable)
(mustache_statement (sub_expression (path_expression) @variable))

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
