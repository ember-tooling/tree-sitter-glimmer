; comments
((comment_statement) @injection.content
  (#set! injection.language "comment"))

; <style> tags
((style_element
  (start_tag
    (tag_name) @_tag_name
    (#eq? @_tag_name "style"))
  (raw_text) @injection.content)
  (#set! injection.language "css"))

; <script> tags
((element_node
  (element_node_start
    (tag_name) @_tag_name
    (#eq? @_tag_name "script"))) @injection.content
  (#offset! @injection.content 0 8 0 -9)
  (#set! injection.language "glimmer_javascript")
  (#set! injection.include-children))
