#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 132
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_text_node = 1,
  sym_tag_name = 2,
  anon_sym_LT = 3,
  anon_sym_GT = 4,
  anon_sym_LT_SLASH = 5,
  anon_sym_SLASH_GT = 6,
  sym_attribute_name = 7,
  anon_sym_EQ = 8,
  anon_sym_SQUOTE = 9,
  anon_sym_DQUOTE = 10,
  sym__mustache_safe_single_quote_string_literal_content = 11,
  sym__mustache_safe_double_quote_string_literal_content = 12,
  anon_sym_as = 13,
  anon_sym_PIPE = 14,
  sym__mustache_statement_start = 15,
  sym__mustache_statement_end = 16,
  sym_identifier = 17,
  anon_sym_DOT = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_POUND = 21,
  anon_sym_SLASH = 22,
  aux_sym__single_quote_string_literal_token1 = 23,
  aux_sym__double_quote_string_literal_token1 = 24,
  sym_number_literal = 25,
  anon_sym_true = 26,
  anon_sym_false = 27,
  sym_comment = 28,
  sym_template = 29,
  sym__declaration = 30,
  sym_element_node_start = 31,
  sym_element_node_end = 32,
  sym_element_node_void = 33,
  sym_element_node = 34,
  sym_attribute_node = 35,
  sym_concat_statement = 36,
  sym__single_quote_concat_statement = 37,
  sym__double_quote_concat_statement = 38,
  sym_block_params = 39,
  sym_path_expression = 40,
  sym__value = 41,
  sym_mustache_statement = 42,
  sym_helper_invocation = 43,
  sym_sub_expression = 44,
  sym_block_statement_start = 45,
  sym_block_statement_end = 46,
  sym_block_statement = 47,
  sym_string_literal = 48,
  sym__single_quote_string_literal = 49,
  sym__double_quote_string_literal = 50,
  sym_boolean_literal = 51,
  aux_sym_template_repeat1 = 52,
  aux_sym_element_node_start_repeat1 = 53,
  aux_sym__single_quote_concat_statement_repeat1 = 54,
  aux_sym__double_quote_concat_statement_repeat1 = 55,
  aux_sym_block_params_repeat1 = 56,
  aux_sym_path_expression_repeat1 = 57,
  aux_sym_helper_invocation_repeat1 = 58,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text_node] = "text_node",
  [sym_tag_name] = "tag_name",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_EQ] = "=",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym__mustache_safe_single_quote_string_literal_content] = "_mustache_safe_single_quote_string_literal_content",
  [sym__mustache_safe_double_quote_string_literal_content] = "_mustache_safe_double_quote_string_literal_content",
  [anon_sym_as] = "as",
  [anon_sym_PIPE] = "|",
  [sym__mustache_statement_start] = "_mustache_statement_start",
  [sym__mustache_statement_end] = "_mustache_statement_end",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_POUND] = "#",
  [anon_sym_SLASH] = "/",
  [aux_sym__single_quote_string_literal_token1] = "_single_quote_string_literal_token1",
  [aux_sym__double_quote_string_literal_token1] = "_double_quote_string_literal_token1",
  [sym_number_literal] = "number_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_comment] = "comment_statement",
  [sym_template] = "template",
  [sym__declaration] = "_declaration",
  [sym_element_node_start] = "element_node_start",
  [sym_element_node_end] = "element_node_end",
  [sym_element_node_void] = "element_node_void",
  [sym_element_node] = "element_node",
  [sym_attribute_node] = "attribute_node",
  [sym_concat_statement] = "concat_statement",
  [sym__single_quote_concat_statement] = "_single_quote_concat_statement",
  [sym__double_quote_concat_statement] = "_double_quote_concat_statement",
  [sym_block_params] = "block_params",
  [sym_path_expression] = "path_expression",
  [sym__value] = "_value",
  [sym_mustache_statement] = "mustache_statement",
  [sym_helper_invocation] = "helper_invocation",
  [sym_sub_expression] = "sub_expression",
  [sym_block_statement_start] = "block_statement_start",
  [sym_block_statement_end] = "block_statement_end",
  [sym_block_statement] = "block_statement",
  [sym_string_literal] = "string_literal",
  [sym__single_quote_string_literal] = "_single_quote_string_literal",
  [sym__double_quote_string_literal] = "_double_quote_string_literal",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_element_node_start_repeat1] = "element_node_start_repeat1",
  [aux_sym__single_quote_concat_statement_repeat1] = "_single_quote_concat_statement_repeat1",
  [aux_sym__double_quote_concat_statement_repeat1] = "_double_quote_concat_statement_repeat1",
  [aux_sym_block_params_repeat1] = "block_params_repeat1",
  [aux_sym_path_expression_repeat1] = "path_expression_repeat1",
  [aux_sym_helper_invocation_repeat1] = "helper_invocation_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text_node] = sym_text_node,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__mustache_safe_single_quote_string_literal_content] = sym__mustache_safe_single_quote_string_literal_content,
  [sym__mustache_safe_double_quote_string_literal_content] = sym__mustache_safe_double_quote_string_literal_content,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym__mustache_statement_start] = sym__mustache_statement_start,
  [sym__mustache_statement_end] = sym__mustache_statement_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym__single_quote_string_literal_token1] = aux_sym__single_quote_string_literal_token1,
  [aux_sym__double_quote_string_literal_token1] = aux_sym__double_quote_string_literal_token1,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_comment] = sym_comment,
  [sym_template] = sym_template,
  [sym__declaration] = sym__declaration,
  [sym_element_node_start] = sym_element_node_start,
  [sym_element_node_end] = sym_element_node_end,
  [sym_element_node_void] = sym_element_node_void,
  [sym_element_node] = sym_element_node,
  [sym_attribute_node] = sym_attribute_node,
  [sym_concat_statement] = sym_concat_statement,
  [sym__single_quote_concat_statement] = sym__single_quote_concat_statement,
  [sym__double_quote_concat_statement] = sym__double_quote_concat_statement,
  [sym_block_params] = sym_block_params,
  [sym_path_expression] = sym_path_expression,
  [sym__value] = sym__value,
  [sym_mustache_statement] = sym_mustache_statement,
  [sym_helper_invocation] = sym_helper_invocation,
  [sym_sub_expression] = sym_sub_expression,
  [sym_block_statement_start] = sym_block_statement_start,
  [sym_block_statement_end] = sym_block_statement_end,
  [sym_block_statement] = sym_block_statement,
  [sym_string_literal] = sym_string_literal,
  [sym__single_quote_string_literal] = sym__single_quote_string_literal,
  [sym__double_quote_string_literal] = sym__double_quote_string_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_element_node_start_repeat1] = aux_sym_element_node_start_repeat1,
  [aux_sym__single_quote_concat_statement_repeat1] = aux_sym__single_quote_concat_statement_repeat1,
  [aux_sym__double_quote_concat_statement_repeat1] = aux_sym__double_quote_concat_statement_repeat1,
  [aux_sym_block_params_repeat1] = aux_sym_block_params_repeat1,
  [aux_sym_path_expression_repeat1] = aux_sym_path_expression_repeat1,
  [aux_sym_helper_invocation_repeat1] = aux_sym_helper_invocation_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_text_node] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__mustache_safe_single_quote_string_literal_content] = {
    .visible = false,
    .named = true,
  },
  [sym__mustache_safe_double_quote_string_literal_content] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym__mustache_statement_start] = {
    .visible = false,
    .named = true,
  },
  [sym__mustache_statement_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__single_quote_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quote_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_element_node_start] = {
    .visible = true,
    .named = true,
  },
  [sym_element_node_end] = {
    .visible = true,
    .named = true,
  },
  [sym_element_node_void] = {
    .visible = true,
    .named = true,
  },
  [sym_element_node] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_node] = {
    .visible = true,
    .named = true,
  },
  [sym_concat_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__single_quote_concat_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__double_quote_concat_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_block_params] = {
    .visible = true,
    .named = true,
  },
  [sym_path_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_mustache_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_helper_invocation] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_block_statement_start] = {
    .visible = true,
    .named = true,
  },
  [sym_block_statement_end] = {
    .visible = true,
    .named = true,
  },
  [sym_block_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__single_quote_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__double_quote_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_node_start_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__single_quote_concat_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quote_concat_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_helper_invocation_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_helper = 2,
  field_path = 3,
  field_program = 4,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_helper] = "helper",
  [field_path] = "path",
  [field_program] = "program",
};

static const TSFieldMapSlice ts_field_map_slices[5] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 1},
    {field_helper, 0},
  [2] =
    {field_program, 1},
  [3] =
    {field_path, 2},
  [4] =
    {field_argument, 3},
    {field_path, 2},
};

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_attribute_name_character_set_1(int32_t lookahead) {
  return
    lookahead == 0 ||
    lookahead == '\t' ||
    lookahead == '\n' ||
    lookahead == '\r' ||
    lookahead == ' ' ||
    lookahead == '"' ||
    lookahead == '\'' ||
    lookahead == '/' ||
    ('<' <= lookahead && lookahead <= '>') ||
    lookahead == '{' ||
    lookahead == '}';
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 12:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text_node);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text_node);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(33);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__mustache_safe_single_quote_string_literal_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__mustache_safe_single_quote_string_literal_content);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__mustache_safe_double_quote_string_literal_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__mustache_safe_double_quote_string_literal_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_as);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__mustache_statement_start);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__mustache_statement_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 's') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '>') ADVANCE(22);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 14, .external_lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 14, .external_lex_state = 1},
  [19] = {.lex_state = 14, .external_lex_state = 1},
  [20] = {.lex_state = 14, .external_lex_state = 1},
  [21] = {.lex_state = 14, .external_lex_state = 1},
  [22] = {.lex_state = 14, .external_lex_state = 1},
  [23] = {.lex_state = 14, .external_lex_state = 1},
  [24] = {.lex_state = 14, .external_lex_state = 1},
  [25] = {.lex_state = 14, .external_lex_state = 1},
  [26] = {.lex_state = 14, .external_lex_state = 1},
  [27] = {.lex_state = 14, .external_lex_state = 1},
  [28] = {.lex_state = 14, .external_lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 5, .external_lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 5, .external_lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 5, .external_lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 5, .external_lex_state = 1},
  [52] = {.lex_state = 5, .external_lex_state = 1},
  [53] = {.lex_state = 14, .external_lex_state = 1},
  [54] = {.lex_state = 5, .external_lex_state = 1},
  [55] = {.lex_state = 14, .external_lex_state = 1},
  [56] = {.lex_state = 14, .external_lex_state = 1},
  [57] = {.lex_state = 14, .external_lex_state = 1},
  [58] = {.lex_state = 14, .external_lex_state = 1},
  [59] = {.lex_state = 14, .external_lex_state = 1},
  [60] = {.lex_state = 14, .external_lex_state = 1},
  [61] = {.lex_state = 14, .external_lex_state = 1},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 5, .external_lex_state = 1},
  [65] = {.lex_state = 5, .external_lex_state = 1},
  [66] = {.lex_state = 14, .external_lex_state = 1},
  [67] = {.lex_state = 14, .external_lex_state = 1},
  [68] = {.lex_state = 14, .external_lex_state = 1},
  [69] = {.lex_state = 14, .external_lex_state = 1},
  [70] = {.lex_state = 14, .external_lex_state = 1},
  [71] = {.lex_state = 14, .external_lex_state = 1},
  [72] = {.lex_state = 14, .external_lex_state = 1},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 5, .external_lex_state = 1},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 14, .external_lex_state = 1},
  [77] = {.lex_state = 5, .external_lex_state = 1},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 5, .external_lex_state = 1},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 14, .external_lex_state = 1},
  [82] = {.lex_state = 5, .external_lex_state = 1},
  [83] = {.lex_state = 14, .external_lex_state = 1},
  [84] = {.lex_state = 14, .external_lex_state = 1},
  [85] = {.lex_state = 14, .external_lex_state = 1},
  [86] = {.lex_state = 14, .external_lex_state = 1},
  [87] = {.lex_state = 14, .external_lex_state = 1},
  [88] = {.lex_state = 14, .external_lex_state = 1},
  [89] = {.lex_state = 14, .external_lex_state = 1},
  [90] = {.lex_state = 14, .external_lex_state = 1},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 0},
};

enum {
  ts_external_token_comment = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_comment] = sym_comment,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_comment] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__mustache_statement_start] = ACTIONS(1),
    [sym__mustache_statement_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(131),
    [sym__declaration] = STATE(27),
    [sym_element_node_start] = STATE(20),
    [sym_element_node_void] = STATE(55),
    [sym_element_node] = STATE(27),
    [sym_mustache_statement] = STATE(27),
    [sym_block_statement_start] = STATE(28),
    [sym_block_statement] = STATE(27),
    [aux_sym_template_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text_node] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [sym__mustache_statement_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_number_literal,
    STATE(34), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(15), 2,
      sym__mustache_statement_end,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(9), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_helper_invocation_repeat1,
  [42] = 11,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(33), 1,
      sym__mustache_statement_end,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym_number_literal,
    STATE(115), 1,
      sym_block_params,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(4), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_helper_invocation_repeat1,
  [83] = 11,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym__mustache_statement_end,
    ACTIONS(45), 1,
      sym_number_literal,
    STATE(105), 1,
      sym_block_params,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(8), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_helper_invocation_repeat1,
  [124] = 9,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_number_literal,
    ACTIONS(15), 2,
      sym__mustache_statement_end,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(9), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_helper_invocation_repeat1,
  [160] = 11,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    ACTIONS(53), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_path_expression,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(110), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [200] = 9,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(58), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym_number_literal,
    ACTIONS(61), 2,
      sym__mustache_statement_end,
      anon_sym_RPAREN,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(7), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_helper_invocation_repeat1,
  [236] = 10,
    ACTIONS(61), 1,
      sym__mustache_statement_end,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_as,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      sym_number_literal,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(8), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_helper_invocation_repeat1,
  [274] = 9,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_number_literal,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(95), 2,
      sym__mustache_statement_end,
      anon_sym_RPAREN,
    STATE(49), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(7), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_helper_invocation_repeat1,
  [310] = 11,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      sym_number_literal,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    STATE(5), 1,
      sym_path_expression,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(110), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [350] = 10,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_path_expression,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(110), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [387] = 10,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_path_expression,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(123), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [424] = 9,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_path_expression,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(120), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [458] = 9,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_path_expression,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(116), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [492] = 9,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(107), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_path_expression,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(103), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [526] = 9,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_path_expression,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(119), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [560] = 9,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(111), 1,
      sym_number_literal,
    STATE(5), 1,
      sym_path_expression,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(121), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [594] = 9,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(117), 1,
      anon_sym_LT_SLASH,
    ACTIONS(119), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(26), 1,
      sym_block_statement_start,
    STATE(53), 1,
      sym_element_node_end,
    STATE(81), 1,
      sym_element_node_void,
    ACTIONS(113), 2,
      sym_comment,
      sym_text_node,
    STATE(23), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [627] = 9,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(119), 1,
      sym__mustache_statement_start,
    ACTIONS(123), 1,
      anon_sym_LT_SLASH,
    STATE(19), 1,
      sym_element_node_start,
    STATE(26), 1,
      sym_block_statement_start,
    STATE(81), 1,
      sym_element_node_void,
    STATE(84), 1,
      sym_element_node_end,
    ACTIONS(121), 2,
      sym_comment,
      sym_text_node,
    STATE(21), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [660] = 9,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(117), 1,
      anon_sym_LT_SLASH,
    ACTIONS(119), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(26), 1,
      sym_block_statement_start,
    STATE(69), 1,
      sym_element_node_end,
    STATE(81), 1,
      sym_element_node_void,
    ACTIONS(125), 2,
      sym_comment,
      sym_text_node,
    STATE(18), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [693] = 9,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(119), 1,
      sym__mustache_statement_start,
    ACTIONS(123), 1,
      anon_sym_LT_SLASH,
    STATE(19), 1,
      sym_element_node_start,
    STATE(26), 1,
      sym_block_statement_start,
    STATE(58), 1,
      sym_element_node_end,
    STATE(81), 1,
      sym_element_node_void,
    ACTIONS(113), 2,
      sym_comment,
      sym_text_node,
    STATE(23), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [726] = 8,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(26), 1,
      sym_block_statement_start,
    STATE(66), 1,
      sym_block_statement_end,
    STATE(81), 1,
      sym_element_node_void,
    ACTIONS(113), 2,
      sym_comment,
      sym_text_node,
    STATE(23), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [756] = 8,
    ACTIONS(132), 1,
      anon_sym_LT,
    ACTIONS(135), 1,
      anon_sym_LT_SLASH,
    ACTIONS(137), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(26), 1,
      sym_block_statement_start,
    STATE(81), 1,
      sym_element_node_void,
    ACTIONS(129), 2,
      sym_comment,
      sym_text_node,
    STATE(23), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [786] = 8,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(140), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(26), 1,
      sym_block_statement_start,
    STATE(56), 1,
      sym_block_statement_end,
    STATE(81), 1,
      sym_element_node_void,
    ACTIONS(113), 2,
      sym_comment,
      sym_text_node,
    STATE(23), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [816] = 8,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(150), 1,
      sym__mustache_statement_start,
    STATE(20), 1,
      sym_element_node_start,
    STATE(28), 1,
      sym_block_statement_start,
    STATE(55), 1,
      sym_element_node_void,
    ACTIONS(144), 2,
      sym_comment,
      sym_text_node,
    STATE(25), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [846] = 8,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(26), 1,
      sym_block_statement_start,
    STATE(81), 1,
      sym_element_node_void,
    STATE(85), 1,
      sym_block_statement_end,
    ACTIONS(153), 2,
      sym_comment,
      sym_text_node,
    STATE(22), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [876] = 8,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_element_node_start,
    STATE(28), 1,
      sym_block_statement_start,
    STATE(55), 1,
      sym_element_node_void,
    ACTIONS(157), 2,
      sym_comment,
      sym_text_node,
    STATE(25), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [906] = 8,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(140), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(26), 1,
      sym_block_statement_start,
    STATE(70), 1,
      sym_block_statement_end,
    STATE(81), 1,
      sym_element_node_void,
    ACTIONS(159), 2,
      sym_comment,
      sym_text_node,
    STATE(24), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [936] = 4,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(161), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(163), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [956] = 4,
    ACTIONS(168), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(163), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(161), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [976] = 4,
    ACTIONS(173), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(15), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(171), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [996] = 4,
    ACTIONS(173), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(175), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(177), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [1016] = 4,
    ACTIONS(19), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(171), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1036] = 4,
    ACTIONS(19), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(177), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(175), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1056] = 8,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(179), 1,
      anon_sym_GT,
    ACTIONS(181), 1,
      anon_sym_SLASH_GT,
    ACTIONS(183), 1,
      sym_attribute_name,
    ACTIONS(185), 1,
      sym__mustache_statement_start,
    ACTIONS(187), 1,
      sym_comment,
    STATE(109), 1,
      sym_block_params,
    STATE(39), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [1083] = 2,
    ACTIONS(161), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(163), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [1098] = 8,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(179), 1,
      anon_sym_GT,
    ACTIONS(183), 1,
      sym_attribute_name,
    ACTIONS(185), 1,
      sym__mustache_statement_start,
    ACTIONS(187), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SLASH_GT,
    STATE(109), 1,
      sym_block_params,
    STATE(39), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [1125] = 2,
    ACTIONS(163), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(161), 6,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1140] = 7,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(183), 1,
      sym_attribute_name,
    ACTIONS(185), 1,
      sym__mustache_statement_start,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      sym_comment,
    STATE(100), 1,
      sym_block_params,
    STATE(51), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [1164] = 2,
    ACTIONS(195), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(197), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [1178] = 2,
    ACTIONS(199), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(201), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [1192] = 2,
    ACTIONS(203), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(205), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [1206] = 2,
    ACTIONS(205), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1220] = 2,
    ACTIONS(209), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1234] = 2,
    ACTIONS(207), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(209), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [1248] = 2,
    ACTIONS(211), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(213), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [1262] = 2,
    ACTIONS(197), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1276] = 2,
    ACTIONS(201), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1290] = 2,
    ACTIONS(213), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(211), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1304] = 6,
    ACTIONS(185), 1,
      sym__mustache_statement_start,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      sym_number_literal,
    STATE(64), 2,
      sym_concat_statement,
      sym_mustache_statement,
    STATE(65), 2,
      sym__single_quote_concat_statement,
      sym__double_quote_concat_statement,
  [1325] = 6,
    ACTIONS(221), 1,
      anon_sym_GT,
    ACTIONS(223), 1,
      sym_attribute_name,
    ACTIONS(226), 1,
      anon_sym_as,
    ACTIONS(228), 1,
      sym__mustache_statement_start,
    ACTIONS(231), 1,
      sym_comment,
    STATE(51), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [1346] = 3,
    ACTIONS(238), 1,
      anon_sym_EQ,
    ACTIONS(236), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(234), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1359] = 2,
    ACTIONS(242), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(240), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1369] = 2,
    ACTIONS(246), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(244), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1379] = 2,
    ACTIONS(250), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(248), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1389] = 2,
    ACTIONS(254), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(252), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1399] = 2,
    ACTIONS(256), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(258), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1409] = 2,
    ACTIONS(240), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(242), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1419] = 2,
    ACTIONS(258), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(256), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1429] = 2,
    ACTIONS(262), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(260), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1439] = 2,
    ACTIONS(260), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(262), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1449] = 4,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(268), 1,
      sym__mustache_statement_start,
    STATE(73), 2,
      sym_mustache_statement,
      aux_sym__single_quote_concat_statement_repeat1,
  [1463] = 4,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(274), 1,
      sym__mustache_statement_start,
    STATE(75), 2,
      sym_mustache_statement,
      aux_sym__double_quote_concat_statement_repeat1,
  [1477] = 2,
    ACTIONS(278), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(276), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1487] = 2,
    ACTIONS(282), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(280), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1497] = 2,
    ACTIONS(252), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(254), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1507] = 2,
    ACTIONS(284), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(286), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1517] = 2,
    ACTIONS(288), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(290), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1527] = 2,
    ACTIONS(294), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(292), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1537] = 2,
    ACTIONS(298), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(296), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1547] = 2,
    ACTIONS(286), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(284), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1557] = 2,
    ACTIONS(300), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(302), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1567] = 4,
    ACTIONS(268), 1,
      sym__mustache_statement_start,
    ACTIONS(304), 1,
      anon_sym_SQUOTE,
    ACTIONS(306), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    STATE(78), 2,
      sym_mustache_statement,
      aux_sym__single_quote_concat_statement_repeat1,
  [1581] = 2,
    ACTIONS(310), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(308), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1591] = 4,
    ACTIONS(274), 1,
      sym__mustache_statement_start,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    STATE(80), 2,
      sym_mustache_statement,
      aux_sym__double_quote_concat_statement_repeat1,
  [1605] = 2,
    ACTIONS(316), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(318), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1615] = 2,
    ACTIONS(322), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(320), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1625] = 4,
    ACTIONS(324), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(329), 1,
      sym__mustache_statement_start,
    STATE(78), 2,
      sym_mustache_statement,
      aux_sym__single_quote_concat_statement_repeat1,
  [1639] = 2,
    ACTIONS(334), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(332), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1649] = 4,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(341), 1,
      sym__mustache_statement_start,
    STATE(80), 2,
      sym_mustache_statement,
      aux_sym__double_quote_concat_statement_repeat1,
  [1663] = 2,
    ACTIONS(248), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(250), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1673] = 2,
    ACTIONS(258), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(256), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1683] = 2,
    ACTIONS(318), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(316), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1693] = 2,
    ACTIONS(292), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(294), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1703] = 2,
    ACTIONS(296), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(298), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1713] = 2,
    ACTIONS(344), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(346), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1723] = 2,
    ACTIONS(348), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(350), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
  [1732] = 2,
    ACTIONS(352), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(354), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
  [1741] = 2,
    ACTIONS(356), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(358), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
  [1750] = 2,
    ACTIONS(360), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(362), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
  [1759] = 3,
    ACTIONS(364), 1,
      anon_sym_PIPE,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(93), 1,
      aux_sym_block_params_repeat1,
  [1769] = 3,
    ACTIONS(368), 1,
      anon_sym_PIPE,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(91), 1,
      aux_sym_block_params_repeat1,
  [1779] = 3,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(93), 1,
      aux_sym_block_params_repeat1,
  [1789] = 2,
    ACTIONS(256), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(258), 2,
      anon_sym_DQUOTE,
      sym__mustache_statement_start,
  [1797] = 2,
    ACTIONS(256), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(258), 2,
      anon_sym_SQUOTE,
      sym__mustache_statement_start,
  [1805] = 1,
    ACTIONS(377), 2,
      anon_sym_GT,
      sym__mustache_statement_end,
  [1810] = 1,
    ACTIONS(379), 2,
      anon_sym_GT,
      sym__mustache_statement_end,
  [1815] = 1,
    ACTIONS(381), 1,
      sym_tag_name,
  [1819] = 1,
    ACTIONS(383), 1,
      sym_identifier,
  [1823] = 1,
    ACTIONS(385), 1,
      anon_sym_GT,
  [1827] = 1,
    ACTIONS(387), 1,
      sym_identifier,
  [1831] = 1,
    ACTIONS(389), 1,
      anon_sym_GT,
  [1835] = 1,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
  [1839] = 1,
    ACTIONS(393), 1,
      sym_identifier,
  [1843] = 1,
    ACTIONS(395), 1,
      sym__mustache_statement_end,
  [1847] = 1,
    ACTIONS(397), 1,
      sym__mustache_statement_end,
  [1851] = 1,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
  [1855] = 1,
    ACTIONS(401), 1,
      anon_sym_SQUOTE,
  [1859] = 1,
    ACTIONS(191), 1,
      anon_sym_GT,
  [1863] = 1,
    ACTIONS(403), 1,
      sym__mustache_statement_end,
  [1867] = 1,
    ACTIONS(405), 1,
      anon_sym_PIPE,
  [1871] = 1,
    ACTIONS(407), 1,
      sym_tag_name,
  [1875] = 1,
    ACTIONS(409), 1,
      anon_sym_SQUOTE,
  [1879] = 1,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
  [1883] = 1,
    ACTIONS(413), 1,
      sym__mustache_statement_end,
  [1887] = 1,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
  [1891] = 1,
    ACTIONS(417), 1,
      anon_sym_GT,
  [1895] = 1,
    ACTIONS(419), 1,
      sym__mustache_statement_end,
  [1899] = 1,
    ACTIONS(421), 1,
      sym__mustache_statement_end,
  [1903] = 1,
    ACTIONS(423), 1,
      sym__mustache_statement_end,
  [1907] = 1,
    ACTIONS(425), 1,
      sym__mustache_statement_end,
  [1911] = 1,
    ACTIONS(427), 1,
      sym_tag_name,
  [1915] = 1,
    ACTIONS(429), 1,
      sym__mustache_statement_end,
  [1919] = 1,
    ACTIONS(431), 1,
      aux_sym__single_quote_string_literal_token1,
  [1923] = 1,
    ACTIONS(433), 1,
      aux_sym__double_quote_string_literal_token1,
  [1927] = 1,
    ACTIONS(435), 1,
      sym_identifier,
  [1931] = 1,
    ACTIONS(437), 1,
      sym_tag_name,
  [1935] = 1,
    ACTIONS(439), 1,
      aux_sym__double_quote_string_literal_token1,
  [1939] = 1,
    ACTIONS(441), 1,
      sym_identifier,
  [1943] = 1,
    ACTIONS(443), 1,
      aux_sym__single_quote_string_literal_token1,
  [1947] = 1,
    ACTIONS(445), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 83,
  [SMALL_STATE(5)] = 124,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 200,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 274,
  [SMALL_STATE(10)] = 310,
  [SMALL_STATE(11)] = 350,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 424,
  [SMALL_STATE(14)] = 458,
  [SMALL_STATE(15)] = 492,
  [SMALL_STATE(16)] = 526,
  [SMALL_STATE(17)] = 560,
  [SMALL_STATE(18)] = 594,
  [SMALL_STATE(19)] = 627,
  [SMALL_STATE(20)] = 660,
  [SMALL_STATE(21)] = 693,
  [SMALL_STATE(22)] = 726,
  [SMALL_STATE(23)] = 756,
  [SMALL_STATE(24)] = 786,
  [SMALL_STATE(25)] = 816,
  [SMALL_STATE(26)] = 846,
  [SMALL_STATE(27)] = 876,
  [SMALL_STATE(28)] = 906,
  [SMALL_STATE(29)] = 936,
  [SMALL_STATE(30)] = 956,
  [SMALL_STATE(31)] = 976,
  [SMALL_STATE(32)] = 996,
  [SMALL_STATE(33)] = 1016,
  [SMALL_STATE(34)] = 1036,
  [SMALL_STATE(35)] = 1056,
  [SMALL_STATE(36)] = 1083,
  [SMALL_STATE(37)] = 1098,
  [SMALL_STATE(38)] = 1125,
  [SMALL_STATE(39)] = 1140,
  [SMALL_STATE(40)] = 1164,
  [SMALL_STATE(41)] = 1178,
  [SMALL_STATE(42)] = 1192,
  [SMALL_STATE(43)] = 1206,
  [SMALL_STATE(44)] = 1220,
  [SMALL_STATE(45)] = 1234,
  [SMALL_STATE(46)] = 1248,
  [SMALL_STATE(47)] = 1262,
  [SMALL_STATE(48)] = 1276,
  [SMALL_STATE(49)] = 1290,
  [SMALL_STATE(50)] = 1304,
  [SMALL_STATE(51)] = 1325,
  [SMALL_STATE(52)] = 1346,
  [SMALL_STATE(53)] = 1359,
  [SMALL_STATE(54)] = 1369,
  [SMALL_STATE(55)] = 1379,
  [SMALL_STATE(56)] = 1389,
  [SMALL_STATE(57)] = 1399,
  [SMALL_STATE(58)] = 1409,
  [SMALL_STATE(59)] = 1419,
  [SMALL_STATE(60)] = 1429,
  [SMALL_STATE(61)] = 1439,
  [SMALL_STATE(62)] = 1449,
  [SMALL_STATE(63)] = 1463,
  [SMALL_STATE(64)] = 1477,
  [SMALL_STATE(65)] = 1487,
  [SMALL_STATE(66)] = 1497,
  [SMALL_STATE(67)] = 1507,
  [SMALL_STATE(68)] = 1517,
  [SMALL_STATE(69)] = 1527,
  [SMALL_STATE(70)] = 1537,
  [SMALL_STATE(71)] = 1547,
  [SMALL_STATE(72)] = 1557,
  [SMALL_STATE(73)] = 1567,
  [SMALL_STATE(74)] = 1581,
  [SMALL_STATE(75)] = 1591,
  [SMALL_STATE(76)] = 1605,
  [SMALL_STATE(77)] = 1615,
  [SMALL_STATE(78)] = 1625,
  [SMALL_STATE(79)] = 1639,
  [SMALL_STATE(80)] = 1649,
  [SMALL_STATE(81)] = 1663,
  [SMALL_STATE(82)] = 1673,
  [SMALL_STATE(83)] = 1683,
  [SMALL_STATE(84)] = 1693,
  [SMALL_STATE(85)] = 1703,
  [SMALL_STATE(86)] = 1713,
  [SMALL_STATE(87)] = 1723,
  [SMALL_STATE(88)] = 1732,
  [SMALL_STATE(89)] = 1741,
  [SMALL_STATE(90)] = 1750,
  [SMALL_STATE(91)] = 1759,
  [SMALL_STATE(92)] = 1769,
  [SMALL_STATE(93)] = 1779,
  [SMALL_STATE(94)] = 1789,
  [SMALL_STATE(95)] = 1797,
  [SMALL_STATE(96)] = 1805,
  [SMALL_STATE(97)] = 1810,
  [SMALL_STATE(98)] = 1815,
  [SMALL_STATE(99)] = 1819,
  [SMALL_STATE(100)] = 1823,
  [SMALL_STATE(101)] = 1827,
  [SMALL_STATE(102)] = 1831,
  [SMALL_STATE(103)] = 1835,
  [SMALL_STATE(104)] = 1839,
  [SMALL_STATE(105)] = 1843,
  [SMALL_STATE(106)] = 1847,
  [SMALL_STATE(107)] = 1851,
  [SMALL_STATE(108)] = 1855,
  [SMALL_STATE(109)] = 1859,
  [SMALL_STATE(110)] = 1863,
  [SMALL_STATE(111)] = 1867,
  [SMALL_STATE(112)] = 1871,
  [SMALL_STATE(113)] = 1875,
  [SMALL_STATE(114)] = 1879,
  [SMALL_STATE(115)] = 1883,
  [SMALL_STATE(116)] = 1887,
  [SMALL_STATE(117)] = 1891,
  [SMALL_STATE(118)] = 1895,
  [SMALL_STATE(119)] = 1899,
  [SMALL_STATE(120)] = 1903,
  [SMALL_STATE(121)] = 1907,
  [SMALL_STATE(122)] = 1911,
  [SMALL_STATE(123)] = 1915,
  [SMALL_STATE(124)] = 1919,
  [SMALL_STATE(125)] = 1923,
  [SMALL_STATE(126)] = 1927,
  [SMALL_STATE(127)] = 1931,
  [SMALL_STATE(128)] = 1935,
  [SMALL_STATE(129)] = 1939,
  [SMALL_STATE(130)] = 1943,
  [SMALL_STATE(131)] = 1947,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(130),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(128),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(33),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(15),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(7),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(44),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(124),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(125),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(31),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(14),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(8),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(45),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_helper_invocation, 2, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(23),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(122),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(11),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(25),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(112),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(12),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_expression_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2), SHIFT_REPEAT(99),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2), SHIFT_REPEAT(104),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string_literal, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string_literal, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string_literal, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string_literal, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(52),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(16),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(51),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_concat_statement, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_concat_statement, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3, .production_id = 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 3, .production_id = 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_end, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_end, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat_statement, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concat_statement, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement_end, 4, .production_id = 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement_end, 4, .production_id = 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 5),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 4),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 4),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_concat_statement, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_concat_statement, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_void, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_void, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_concat_statement, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_concat_statement, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__single_quote_concat_statement_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(78),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__single_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(13),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_concat_statement, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_concat_statement, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_concat_statement_repeat1, 2),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(80),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(17),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement_start, 6, .production_id = 4),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement_start, 6, .production_id = 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement_start, 5, .production_id = 4),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement_start, 5, .production_id = 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement_start, 5, .production_id = 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement_start, 5, .production_id = 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement_start, 4, .production_id = 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement_start, 4, .production_id = 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2), SHIFT_REPEAT(93),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [445] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_glimmer_external_scanner_create(void);
void tree_sitter_glimmer_external_scanner_destroy(void *);
bool tree_sitter_glimmer_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_glimmer_external_scanner_serialize(void *, char *);
void tree_sitter_glimmer_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_glimmer(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_glimmer_external_scanner_create,
      tree_sitter_glimmer_external_scanner_destroy,
      tree_sitter_glimmer_external_scanner_scan,
      tree_sitter_glimmer_external_scanner_serialize,
      tree_sitter_glimmer_external_scanner_deserialize,
    },
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
