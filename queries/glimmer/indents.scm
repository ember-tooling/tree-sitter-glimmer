[
  (element_node
    (element_node_start))
  (element_node_void)
  (block_statement
    (block_statement_start))
  (mustache_statement)
] @indent.begin

(element_node
  (element_node_end
    ">" @indent.end))

(element_node_void
  "/>" @indent.end)

[
  ">"
  "/>"
  "</"
  "{{/"
  "}}"
] @indent.branch

(block_statement_inverse) @indent.branch

(comment_statement) @indent.ignore
