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
((script_element
  (start_tag
    (tag_name) @_tag_name
    (#eq? @_tag_name "script"))
  (raw_text) @injection.content)
  (#set! injection.language "glimmer_javascript"))
