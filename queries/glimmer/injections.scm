; <style> tags
(
  (element_node
    (element_node_start (tag_name) @_tag_name)
    ((text_node) @injection.content
      (#set! injection.language "css"))

  )
  (#eq? @_tag_name "style")
)

; script tags
(
  (element_node
    (element_node_start (tag_name) @_tag_name)
    ((text_node) @injection.content
      (#set! injection.language "javascript"))

  )
  (#eq? @_tag_name "script")
)
