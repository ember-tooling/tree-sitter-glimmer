(tag_name) @tag

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
