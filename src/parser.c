#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 130
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
  anon_sym_DOT = 17,
  sym_identifier = 18,
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
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
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

static const TSFieldMapSlice ts_field_map_slices[4] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 1},
    {field_helper, 0},
  [2] =
    {field_program, 1},
  [3] =
    {field_path, 2},
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(41);
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
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(41);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
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
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 's') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 14, .external_lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 14, .external_lex_state = 1},
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
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 5, .external_lex_state = 1},
  [37] = {.lex_state = 5, .external_lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 5, .external_lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 5, .external_lex_state = 1},
  [51] = {.lex_state = 5, .external_lex_state = 1},
  [52] = {.lex_state = 5, .external_lex_state = 1},
  [53] = {.lex_state = 14, .external_lex_state = 1},
  [54] = {.lex_state = 14, .external_lex_state = 1},
  [55] = {.lex_state = 14, .external_lex_state = 1},
  [56] = {.lex_state = 14, .external_lex_state = 1},
  [57] = {.lex_state = 14, .external_lex_state = 1},
  [58] = {.lex_state = 14, .external_lex_state = 1},
  [59] = {.lex_state = 14, .external_lex_state = 1},
  [60] = {.lex_state = 14, .external_lex_state = 1},
  [61] = {.lex_state = 5, .external_lex_state = 1},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 5, .external_lex_state = 1},
  [65] = {.lex_state = 14, .external_lex_state = 1},
  [66] = {.lex_state = 14, .external_lex_state = 1},
  [67] = {.lex_state = 14, .external_lex_state = 1},
  [68] = {.lex_state = 14, .external_lex_state = 1},
  [69] = {.lex_state = 14, .external_lex_state = 1},
  [70] = {.lex_state = 14, .external_lex_state = 1},
  [71] = {.lex_state = 5, .external_lex_state = 1},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 5, .external_lex_state = 1},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 14, .external_lex_state = 1},
  [76] = {.lex_state = 14, .external_lex_state = 1},
  [77] = {.lex_state = 14, .external_lex_state = 1},
  [78] = {.lex_state = 5, .external_lex_state = 1},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 5, .external_lex_state = 1},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 14, .external_lex_state = 1},
  [83] = {.lex_state = 14, .external_lex_state = 1},
  [84] = {.lex_state = 14, .external_lex_state = 1},
  [85] = {.lex_state = 14, .external_lex_state = 1},
  [86] = {.lex_state = 14, .external_lex_state = 1},
  [87] = {.lex_state = 14, .external_lex_state = 1},
  [88] = {.lex_state = 14, .external_lex_state = 1},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 0},
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
    [anon_sym_DOT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [sym_template] = STATE(129),
    [sym__declaration] = STATE(23),
    [sym_element_node_start] = STATE(20),
    [sym_element_node_void] = STATE(55),
    [sym_element_node] = STATE(23),
    [sym_mustache_statement] = STATE(23),
    [sym_block_statement_start] = STATE(22),
    [sym_block_statement] = STATE(23),
    [aux_sym_template_repeat1] = STATE(23),
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
    ACTIONS(15), 1,
      anon_sym_as,
    ACTIONS(17), 1,
      sym__mustache_statement_end,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_number_literal,
    STATE(99), 1,
      sym_block_params,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(6), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_helper_invocation_repeat1,
  [41] = 11,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_as,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__mustache_statement_end,
    ACTIONS(29), 1,
      sym_number_literal,
    STATE(106), 1,
      sym_block_params,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_helper_invocation_repeat1,
  [82] = 9,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(35), 2,
      sym__mustache_statement_end,
      anon_sym_RPAREN,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(9), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_helper_invocation_repeat1,
  [118] = 11,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(49), 1,
      sym_number_literal,
    STATE(8), 1,
      sym_path_expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(96), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [158] = 10,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_as,
    ACTIONS(59), 1,
      sym__mustache_statement_end,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      sym_number_literal,
    ACTIONS(70), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(6), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_helper_invocation_repeat1,
  [196] = 11,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      sym_number_literal,
    ACTIONS(73), 1,
      anon_sym_SLASH,
    STATE(8), 1,
      sym_path_expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(96), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [236] = 9,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      sym_number_literal,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 2,
      sym__mustache_statement_end,
      anon_sym_RPAREN,
    STATE(43), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(4), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_helper_invocation_repeat1,
  [272] = 9,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_number_literal,
    ACTIONS(59), 2,
      sym__mustache_statement_end,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(9), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_helper_invocation_repeat1,
  [308] = 10,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      sym_number_literal,
    STATE(8), 1,
      sym_path_expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(110), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [345] = 10,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      sym_number_literal,
    STATE(8), 1,
      sym_path_expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(96), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [382] = 9,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_number_literal,
    STATE(8), 1,
      sym_path_expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(117), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [416] = 9,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_number_literal,
    STATE(8), 1,
      sym_path_expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(113), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [450] = 9,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      sym_number_literal,
    STATE(8), 1,
      sym_path_expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(119), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [484] = 9,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym_number_literal,
    STATE(8), 1,
      sym_path_expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(114), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [518] = 9,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      sym_number_literal,
    STATE(8), 1,
      sym_path_expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(118), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [552] = 9,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(113), 1,
      anon_sym_LT_SLASH,
    ACTIONS(115), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(24), 1,
      sym_block_statement_start,
    STATE(82), 1,
      sym_element_node_void,
    STATE(84), 1,
      sym_element_node_end,
    ACTIONS(109), 2,
      sym_comment,
      sym_text_node,
    STATE(27), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [585] = 9,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(115), 1,
      sym__mustache_statement_start,
    ACTIONS(117), 1,
      anon_sym_LT_SLASH,
    STATE(19), 1,
      sym_element_node_start,
    STATE(24), 1,
      sym_block_statement_start,
    STATE(53), 1,
      sym_element_node_end,
    STATE(82), 1,
      sym_element_node_void,
    ACTIONS(109), 2,
      sym_comment,
      sym_text_node,
    STATE(27), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [618] = 9,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(115), 1,
      sym__mustache_statement_start,
    ACTIONS(117), 1,
      anon_sym_LT_SLASH,
    STATE(19), 1,
      sym_element_node_start,
    STATE(24), 1,
      sym_block_statement_start,
    STATE(82), 1,
      sym_element_node_void,
    STATE(85), 1,
      sym_element_node_end,
    ACTIONS(119), 2,
      sym_comment,
      sym_text_node,
    STATE(18), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [651] = 9,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(113), 1,
      anon_sym_LT_SLASH,
    ACTIONS(115), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(24), 1,
      sym_block_statement_start,
    STATE(57), 1,
      sym_element_node_end,
    STATE(82), 1,
      sym_element_node_void,
    ACTIONS(121), 2,
      sym_comment,
      sym_text_node,
    STATE(17), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [684] = 8,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(123), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(24), 1,
      sym_block_statement_start,
    STATE(69), 1,
      sym_block_statement_end,
    STATE(82), 1,
      sym_element_node_void,
    ACTIONS(109), 2,
      sym_comment,
      sym_text_node,
    STATE(27), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [714] = 8,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(24), 1,
      sym_block_statement_start,
    STATE(58), 1,
      sym_block_statement_end,
    STATE(82), 1,
      sym_element_node_void,
    ACTIONS(125), 2,
      sym_comment,
      sym_text_node,
    STATE(25), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [744] = 8,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_element_node_start,
    STATE(22), 1,
      sym_block_statement_start,
    STATE(55), 1,
      sym_element_node_void,
    ACTIONS(131), 2,
      sym_comment,
      sym_text_node,
    STATE(26), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [774] = 8,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(123), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(24), 1,
      sym_block_statement_start,
    STATE(82), 1,
      sym_element_node_void,
    STATE(83), 1,
      sym_block_statement_end,
    ACTIONS(133), 2,
      sym_comment,
      sym_text_node,
    STATE(21), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [804] = 8,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(24), 1,
      sym_block_statement_start,
    STATE(54), 1,
      sym_block_statement_end,
    STATE(82), 1,
      sym_element_node_void,
    ACTIONS(109), 2,
      sym_comment,
      sym_text_node,
    STATE(27), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [834] = 8,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      anon_sym_LT,
    ACTIONS(143), 1,
      sym__mustache_statement_start,
    STATE(20), 1,
      sym_element_node_start,
    STATE(22), 1,
      sym_block_statement_start,
    STATE(55), 1,
      sym_element_node_void,
    ACTIONS(137), 2,
      sym_comment,
      sym_text_node,
    STATE(26), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [864] = 8,
    ACTIONS(149), 1,
      anon_sym_LT,
    ACTIONS(152), 1,
      anon_sym_LT_SLASH,
    ACTIONS(154), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(24), 1,
      sym_block_statement_start,
    STATE(82), 1,
      sym_element_node_void,
    ACTIONS(146), 2,
      sym_comment,
      sym_text_node,
    STATE(27), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [894] = 4,
    ACTIONS(159), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(161), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(157), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [914] = 4,
    ACTIONS(167), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(163), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(165), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [934] = 4,
    ACTIONS(159), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(172), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(170), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [954] = 4,
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(165), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(163), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [974] = 4,
    ACTIONS(177), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(157), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(161), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [994] = 4,
    ACTIONS(177), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(170), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(172), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [1014] = 2,
    ACTIONS(165), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(163), 6,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1029] = 2,
    ACTIONS(163), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(165), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [1044] = 8,
    ACTIONS(15), 1,
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
    STATE(103), 1,
      sym_block_params,
    STATE(42), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [1071] = 8,
    ACTIONS(15), 1,
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
    STATE(103), 1,
      sym_block_params,
    STATE(42), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [1098] = 2,
    ACTIONS(191), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(193), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [1112] = 2,
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
  [1126] = 2,
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
  [1140] = 2,
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
  [1154] = 7,
    ACTIONS(15), 1,
      anon_sym_as,
    ACTIONS(183), 1,
      sym_attribute_name,
    ACTIONS(185), 1,
      sym__mustache_statement_start,
    ACTIONS(203), 1,
      anon_sym_GT,
    ACTIONS(205), 1,
      sym_comment,
    STATE(107), 1,
      sym_block_params,
    STATE(50), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [1178] = 2,
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
  [1192] = 2,
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
  [1206] = 2,
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
  [1220] = 2,
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
  [1234] = 2,
    ACTIONS(193), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(191), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1248] = 2,
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
  [1262] = 6,
    ACTIONS(185), 1,
      sym__mustache_statement_start,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      sym_number_literal,
    STATE(52), 2,
      sym__single_quote_concat_statement,
      sym__double_quote_concat_statement,
    STATE(64), 2,
      sym_concat_statement,
      sym_mustache_statement,
  [1283] = 6,
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
    STATE(50), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [1304] = 3,
    ACTIONS(238), 1,
      anon_sym_EQ,
    ACTIONS(236), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(234), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1317] = 2,
    ACTIONS(242), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(240), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1327] = 2,
    ACTIONS(244), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(246), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1337] = 2,
    ACTIONS(250), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(248), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1347] = 2,
    ACTIONS(254), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(252), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1357] = 2,
    ACTIONS(256), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(258), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1367] = 2,
    ACTIONS(262), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(260), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1377] = 2,
    ACTIONS(266), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(264), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1387] = 2,
    ACTIONS(268), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(270), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1397] = 2,
    ACTIONS(274), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(272), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1407] = 2,
    ACTIONS(278), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(276), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1417] = 4,
    ACTIONS(280), 1,
      anon_sym_SQUOTE,
    ACTIONS(282), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(284), 1,
      sym__mustache_statement_start,
    STATE(72), 2,
      sym_mustache_statement,
      aux_sym__single_quote_concat_statement_repeat1,
  [1431] = 4,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(290), 1,
      sym__mustache_statement_start,
    STATE(74), 2,
      sym_mustache_statement,
      aux_sym__double_quote_concat_statement_repeat1,
  [1445] = 2,
    ACTIONS(294), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(292), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1455] = 2,
    ACTIONS(296), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(298), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1465] = 2,
    ACTIONS(272), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(274), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1475] = 2,
    ACTIONS(300), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(302), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1485] = 2,
    ACTIONS(306), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(304), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1495] = 2,
    ACTIONS(248), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(250), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1505] = 2,
    ACTIONS(298), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(296), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1515] = 2,
    ACTIONS(310), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(308), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1525] = 4,
    ACTIONS(284), 1,
      sym__mustache_statement_start,
    ACTIONS(312), 1,
      anon_sym_SQUOTE,
    ACTIONS(314), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    STATE(79), 2,
      sym_mustache_statement,
      aux_sym__single_quote_concat_statement_repeat1,
  [1539] = 2,
    ACTIONS(318), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(316), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1549] = 4,
    ACTIONS(290), 1,
      sym__mustache_statement_start,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(322), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    STATE(81), 2,
      sym_mustache_statement,
      aux_sym__double_quote_concat_statement_repeat1,
  [1563] = 2,
    ACTIONS(276), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(278), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1573] = 2,
    ACTIONS(304), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(306), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1583] = 2,
    ACTIONS(278), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(276), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1593] = 2,
    ACTIONS(326), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(324), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1603] = 4,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(333), 1,
      sym__mustache_statement_start,
    STATE(79), 2,
      sym_mustache_statement,
      aux_sym__single_quote_concat_statement_repeat1,
  [1617] = 2,
    ACTIONS(338), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(336), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1627] = 4,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    ACTIONS(342), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(345), 1,
      sym__mustache_statement_start,
    STATE(81), 2,
      sym_mustache_statement,
      aux_sym__double_quote_concat_statement_repeat1,
  [1641] = 2,
    ACTIONS(252), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(254), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1651] = 2,
    ACTIONS(264), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(266), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1661] = 2,
    ACTIONS(246), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(244), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1671] = 2,
    ACTIONS(260), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(262), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1681] = 2,
    ACTIONS(348), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(350), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
  [1690] = 2,
    ACTIONS(352), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(354), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
  [1699] = 2,
    ACTIONS(356), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(358), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
  [1708] = 3,
    ACTIONS(360), 1,
      anon_sym_PIPE,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(93), 1,
      aux_sym_block_params_repeat1,
  [1718] = 3,
    ACTIONS(364), 1,
      anon_sym_PIPE,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(90), 1,
      aux_sym_block_params_repeat1,
  [1728] = 2,
    ACTIONS(276), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(278), 2,
      anon_sym_SQUOTE,
      sym__mustache_statement_start,
  [1736] = 2,
    ACTIONS(276), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(278), 2,
      anon_sym_DQUOTE,
      sym__mustache_statement_start,
  [1744] = 3,
    ACTIONS(369), 1,
      anon_sym_PIPE,
    ACTIONS(371), 1,
      sym_identifier,
    STATE(90), 1,
      aux_sym_block_params_repeat1,
  [1754] = 1,
    ACTIONS(373), 2,
      anon_sym_GT,
      sym__mustache_statement_end,
  [1759] = 1,
    ACTIONS(375), 2,
      anon_sym_GT,
      sym__mustache_statement_end,
  [1764] = 1,
    ACTIONS(377), 1,
      sym__mustache_statement_end,
  [1768] = 1,
    ACTIONS(379), 1,
      sym_identifier,
  [1772] = 1,
    ACTIONS(381), 1,
      sym_identifier,
  [1776] = 1,
    ACTIONS(383), 1,
      sym__mustache_statement_end,
  [1780] = 1,
    ACTIONS(385), 1,
      sym_identifier,
  [1784] = 1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
  [1788] = 1,
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
  [1792] = 1,
    ACTIONS(203), 1,
      anon_sym_GT,
  [1796] = 1,
    ACTIONS(391), 1,
      anon_sym_PIPE,
  [1800] = 1,
    ACTIONS(393), 1,
      sym__mustache_statement_end,
  [1804] = 1,
    ACTIONS(17), 1,
      sym__mustache_statement_end,
  [1808] = 1,
    ACTIONS(395), 1,
      anon_sym_GT,
  [1812] = 1,
    ACTIONS(397), 1,
      anon_sym_GT,
  [1816] = 1,
    ACTIONS(399), 1,
      sym_tag_name,
  [1820] = 1,
    ACTIONS(401), 1,
      sym__mustache_statement_end,
  [1824] = 1,
    ACTIONS(403), 1,
      anon_sym_SQUOTE,
  [1828] = 1,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
  [1832] = 1,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
  [1836] = 1,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
  [1840] = 1,
    ACTIONS(411), 1,
      anon_sym_GT,
  [1844] = 1,
    ACTIONS(413), 1,
      sym__mustache_statement_end,
  [1848] = 1,
    ACTIONS(415), 1,
      sym__mustache_statement_end,
  [1852] = 1,
    ACTIONS(417), 1,
      sym__mustache_statement_end,
  [1856] = 1,
    ACTIONS(419), 1,
      sym__mustache_statement_end,
  [1860] = 1,
    ACTIONS(421), 1,
      sym_tag_name,
  [1864] = 1,
    ACTIONS(423), 1,
      sym_identifier,
  [1868] = 1,
    ACTIONS(425), 1,
      aux_sym__single_quote_string_literal_token1,
  [1872] = 1,
    ACTIONS(427), 1,
      aux_sym__double_quote_string_literal_token1,
  [1876] = 1,
    ACTIONS(429), 1,
      aux_sym__double_quote_string_literal_token1,
  [1880] = 1,
    ACTIONS(431), 1,
      sym_tag_name,
  [1884] = 1,
    ACTIONS(433), 1,
      aux_sym__single_quote_string_literal_token1,
  [1888] = 1,
    ACTIONS(435), 1,
      sym_identifier,
  [1892] = 1,
    ACTIONS(437), 1,
      sym_tag_name,
  [1896] = 1,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 118,
  [SMALL_STATE(6)] = 158,
  [SMALL_STATE(7)] = 196,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 272,
  [SMALL_STATE(10)] = 308,
  [SMALL_STATE(11)] = 345,
  [SMALL_STATE(12)] = 382,
  [SMALL_STATE(13)] = 416,
  [SMALL_STATE(14)] = 450,
  [SMALL_STATE(15)] = 484,
  [SMALL_STATE(16)] = 518,
  [SMALL_STATE(17)] = 552,
  [SMALL_STATE(18)] = 585,
  [SMALL_STATE(19)] = 618,
  [SMALL_STATE(20)] = 651,
  [SMALL_STATE(21)] = 684,
  [SMALL_STATE(22)] = 714,
  [SMALL_STATE(23)] = 744,
  [SMALL_STATE(24)] = 774,
  [SMALL_STATE(25)] = 804,
  [SMALL_STATE(26)] = 834,
  [SMALL_STATE(27)] = 864,
  [SMALL_STATE(28)] = 894,
  [SMALL_STATE(29)] = 914,
  [SMALL_STATE(30)] = 934,
  [SMALL_STATE(31)] = 954,
  [SMALL_STATE(32)] = 974,
  [SMALL_STATE(33)] = 994,
  [SMALL_STATE(34)] = 1014,
  [SMALL_STATE(35)] = 1029,
  [SMALL_STATE(36)] = 1044,
  [SMALL_STATE(37)] = 1071,
  [SMALL_STATE(38)] = 1098,
  [SMALL_STATE(39)] = 1112,
  [SMALL_STATE(40)] = 1126,
  [SMALL_STATE(41)] = 1140,
  [SMALL_STATE(42)] = 1154,
  [SMALL_STATE(43)] = 1178,
  [SMALL_STATE(44)] = 1192,
  [SMALL_STATE(45)] = 1206,
  [SMALL_STATE(46)] = 1220,
  [SMALL_STATE(47)] = 1234,
  [SMALL_STATE(48)] = 1248,
  [SMALL_STATE(49)] = 1262,
  [SMALL_STATE(50)] = 1283,
  [SMALL_STATE(51)] = 1304,
  [SMALL_STATE(52)] = 1317,
  [SMALL_STATE(53)] = 1327,
  [SMALL_STATE(54)] = 1337,
  [SMALL_STATE(55)] = 1347,
  [SMALL_STATE(56)] = 1357,
  [SMALL_STATE(57)] = 1367,
  [SMALL_STATE(58)] = 1377,
  [SMALL_STATE(59)] = 1387,
  [SMALL_STATE(60)] = 1397,
  [SMALL_STATE(61)] = 1407,
  [SMALL_STATE(62)] = 1417,
  [SMALL_STATE(63)] = 1431,
  [SMALL_STATE(64)] = 1445,
  [SMALL_STATE(65)] = 1455,
  [SMALL_STATE(66)] = 1465,
  [SMALL_STATE(67)] = 1475,
  [SMALL_STATE(68)] = 1485,
  [SMALL_STATE(69)] = 1495,
  [SMALL_STATE(70)] = 1505,
  [SMALL_STATE(71)] = 1515,
  [SMALL_STATE(72)] = 1525,
  [SMALL_STATE(73)] = 1539,
  [SMALL_STATE(74)] = 1549,
  [SMALL_STATE(75)] = 1563,
  [SMALL_STATE(76)] = 1573,
  [SMALL_STATE(77)] = 1583,
  [SMALL_STATE(78)] = 1593,
  [SMALL_STATE(79)] = 1603,
  [SMALL_STATE(80)] = 1617,
  [SMALL_STATE(81)] = 1627,
  [SMALL_STATE(82)] = 1641,
  [SMALL_STATE(83)] = 1651,
  [SMALL_STATE(84)] = 1661,
  [SMALL_STATE(85)] = 1671,
  [SMALL_STATE(86)] = 1681,
  [SMALL_STATE(87)] = 1690,
  [SMALL_STATE(88)] = 1699,
  [SMALL_STATE(89)] = 1708,
  [SMALL_STATE(90)] = 1718,
  [SMALL_STATE(91)] = 1728,
  [SMALL_STATE(92)] = 1736,
  [SMALL_STATE(93)] = 1744,
  [SMALL_STATE(94)] = 1754,
  [SMALL_STATE(95)] = 1759,
  [SMALL_STATE(96)] = 1764,
  [SMALL_STATE(97)] = 1768,
  [SMALL_STATE(98)] = 1772,
  [SMALL_STATE(99)] = 1776,
  [SMALL_STATE(100)] = 1780,
  [SMALL_STATE(101)] = 1784,
  [SMALL_STATE(102)] = 1788,
  [SMALL_STATE(103)] = 1792,
  [SMALL_STATE(104)] = 1796,
  [SMALL_STATE(105)] = 1800,
  [SMALL_STATE(106)] = 1804,
  [SMALL_STATE(107)] = 1808,
  [SMALL_STATE(108)] = 1812,
  [SMALL_STATE(109)] = 1816,
  [SMALL_STATE(110)] = 1820,
  [SMALL_STATE(111)] = 1824,
  [SMALL_STATE(112)] = 1828,
  [SMALL_STATE(113)] = 1832,
  [SMALL_STATE(114)] = 1836,
  [SMALL_STATE(115)] = 1840,
  [SMALL_STATE(116)] = 1844,
  [SMALL_STATE(117)] = 1848,
  [SMALL_STATE(118)] = 1852,
  [SMALL_STATE(119)] = 1856,
  [SMALL_STATE(120)] = 1860,
  [SMALL_STATE(121)] = 1864,
  [SMALL_STATE(122)] = 1868,
  [SMALL_STATE(123)] = 1872,
  [SMALL_STATE(124)] = 1876,
  [SMALL_STATE(125)] = 1880,
  [SMALL_STATE(126)] = 1884,
  [SMALL_STATE(127)] = 1888,
  [SMALL_STATE(128)] = 1892,
  [SMALL_STATE(129)] = 1896,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_helper_invocation, 2, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(122),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(123),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(33),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(15),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(6),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(41),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(126),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(124),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(30),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(13),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(9),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(39),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(26),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(128),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(10),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(27),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(120),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(11),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_expression_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2), SHIFT_REPEAT(97),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 1),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2), SHIFT_REPEAT(100),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string_literal, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string_literal, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string_literal, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string_literal, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(51),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(12),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(50),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat_statement, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concat_statement, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3, .production_id = 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 3, .production_id = 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 4),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_end, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_end, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement_end, 4, .production_id = 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement_end, 4, .production_id = 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 5),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_void, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_void, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_concat_statement, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_concat_statement, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_concat_statement, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_concat_statement, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_concat_statement, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_concat_statement, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__single_quote_concat_statement_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(79),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__single_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(16),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_concat_statement, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_concat_statement, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_concat_statement_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(81),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(14),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement_start, 4, .production_id = 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement_start, 4, .production_id = 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement_start, 6, .production_id = 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement_start, 6, .production_id = 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement_start, 5, .production_id = 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement_start, 5, .production_id = 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2), SHIFT_REPEAT(90),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [439] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
