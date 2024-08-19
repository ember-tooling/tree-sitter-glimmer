; <style> tags
((element_node
  (element_node_start
    (tag_name) @_tag_name
    (#eq? @_tag_name "style")
  )
  )
  @injection.content
  (#set! injection.language "css")
  (#set! injection.include-children)
  (#set! injection.self)
  ; (#set! injection.parent)
  (#offset! @injection.content 0 6 0 -7)
)
; ((element_node) @injection.content
;  (#set! injection.language "css")
;  (#set! injection.include-children)
;  (#set! injection.self)
;  (#set! injection.parent)
; )


; <script> tags
(
  (element_node
    (element_node_start (tag_name) @_tag_name)
    ((text_node) @injection.content)
  )
  (#eq? @_tag_name "script")
  (#set! injection.language "javascript")
  (#set! injection.include-children)
)


