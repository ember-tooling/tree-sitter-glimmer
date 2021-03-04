#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
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
  aux_sym_helper_invocation_repeat1 = 57,
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
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 5, .external_lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 5, .external_lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 5, .external_lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 5, .external_lex_state = 1},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 5, .external_lex_state = 1},
  [48] = {.lex_state = 14, .external_lex_state = 1},
  [49] = {.lex_state = 14, .external_lex_state = 1},
  [50] = {.lex_state = 14, .external_lex_state = 1},
  [51] = {.lex_state = 14, .external_lex_state = 1},
  [52] = {.lex_state = 5, .external_lex_state = 1},
  [53] = {.lex_state = 14, .external_lex_state = 1},
  [54] = {.lex_state = 14, .external_lex_state = 1},
  [55] = {.lex_state = 14, .external_lex_state = 1},
  [56] = {.lex_state = 14, .external_lex_state = 1},
  [57] = {.lex_state = 14, .external_lex_state = 1},
  [58] = {.lex_state = 14, .external_lex_state = 1},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 5, .external_lex_state = 1},
  [62] = {.lex_state = 5, .external_lex_state = 1},
  [63] = {.lex_state = 14, .external_lex_state = 1},
  [64] = {.lex_state = 14, .external_lex_state = 1},
  [65] = {.lex_state = 14, .external_lex_state = 1},
  [66] = {.lex_state = 14, .external_lex_state = 1},
  [67] = {.lex_state = 14, .external_lex_state = 1},
  [68] = {.lex_state = 14, .external_lex_state = 1},
  [69] = {.lex_state = 5, .external_lex_state = 1},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 5, .external_lex_state = 1},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 14, .external_lex_state = 1},
  [74] = {.lex_state = 14, .external_lex_state = 1},
  [75] = {.lex_state = 14, .external_lex_state = 1},
  [76] = {.lex_state = 5, .external_lex_state = 1},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 5, .external_lex_state = 1},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 14, .external_lex_state = 1},
  [81] = {.lex_state = 14, .external_lex_state = 1},
  [82] = {.lex_state = 14, .external_lex_state = 1},
  [83] = {.lex_state = 14, .external_lex_state = 1},
  [84] = {.lex_state = 14, .external_lex_state = 1},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 0},
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
    [sym_template] = STATE(125),
    [sym__declaration] = STATE(21),
    [sym_element_node_start] = STATE(17),
    [sym_element_node_void] = STATE(50),
    [sym_element_node] = STATE(21),
    [sym_mustache_statement] = STATE(21),
    [sym_block_statement_start] = STATE(22),
    [sym_block_statement] = STATE(21),
    [aux_sym_template_repeat1] = STATE(21),
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
    STATE(95), 1,
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
  [82] = 11,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      sym_number_literal,
    STATE(9), 1,
      sym_path_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(92), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [122] = 11,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_number_literal,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    STATE(9), 1,
      sym_path_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(92), 5,
      sym__value,
      sym_helper_invocation,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
  [162] = 10,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_as,
    ACTIONS(57), 1,
      sym__mustache_statement_end,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(68), 2,
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
  [200] = 9,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_number_literal,
    ACTIONS(57), 2,
      sym__mustache_statement_end,
      anon_sym_RPAREN,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(7), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_helper_invocation_repeat1,
  [236] = 9,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_number_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 2,
      sym__mustache_statement_end,
      anon_sym_RPAREN,
    STATE(35), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(7), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_helper_invocation_repeat1,
  [272] = 9,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      sym_number_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(93), 2,
      sym__mustache_statement_end,
      anon_sym_RPAREN,
    STATE(35), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(8), 6,
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
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      sym_number_literal,
    STATE(9), 1,
      sym_path_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(105), 5,
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
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_number_literal,
    STATE(9), 1,
      sym_path_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(92), 5,
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
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_number_literal,
    STATE(9), 1,
      sym_path_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(115), 5,
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
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_number_literal,
    STATE(9), 1,
      sym_path_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(114), 5,
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
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      sym_number_literal,
    STATE(9), 1,
      sym_path_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(113), 5,
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
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym_number_literal,
    STATE(9), 1,
      sym_path_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(110), 5,
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
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      sym_number_literal,
    STATE(9), 1,
      sym_path_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(96), 5,
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
    STATE(23), 1,
      sym_block_statement_start,
    STATE(48), 1,
      sym_element_node_end,
    STATE(80), 1,
      sym_element_node_void,
    ACTIONS(109), 2,
      sym_comment,
      sym_text_node,
    STATE(20), 5,
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
    ACTIONS(119), 1,
      anon_sym_LT_SLASH,
    STATE(19), 1,
      sym_element_node_start,
    STATE(23), 1,
      sym_block_statement_start,
    STATE(66), 1,
      sym_element_node_end,
    STATE(80), 1,
      sym_element_node_void,
    ACTIONS(117), 2,
      sym_comment,
      sym_text_node,
    STATE(26), 5,
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
    ACTIONS(119), 1,
      anon_sym_LT_SLASH,
    STATE(19), 1,
      sym_element_node_start,
    STATE(23), 1,
      sym_block_statement_start,
    STATE(80), 1,
      sym_element_node_void,
    STATE(81), 1,
      sym_element_node_end,
    ACTIONS(121), 2,
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
    STATE(23), 1,
      sym_block_statement_start,
    STATE(73), 1,
      sym_element_node_end,
    STATE(80), 1,
      sym_element_node_void,
    ACTIONS(117), 2,
      sym_comment,
      sym_text_node,
    STATE(26), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [684] = 8,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_element_node_start,
    STATE(22), 1,
      sym_block_statement_start,
    STATE(50), 1,
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
  [714] = 8,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(23), 1,
      sym_block_statement_start,
    STATE(56), 1,
      sym_block_statement_end,
    STATE(80), 1,
      sym_element_node_void,
    ACTIONS(127), 2,
      sym_comment,
      sym_text_node,
    STATE(24), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [744] = 8,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(133), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(23), 1,
      sym_block_statement_start,
    STATE(75), 1,
      sym_block_statement_end,
    STATE(80), 1,
      sym_element_node_void,
    ACTIONS(131), 2,
      sym_comment,
      sym_text_node,
    STATE(27), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [774] = 8,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(23), 1,
      sym_block_statement_start,
    STATE(51), 1,
      sym_block_statement_end,
    STATE(80), 1,
      sym_element_node_void,
    ACTIONS(117), 2,
      sym_comment,
      sym_text_node,
    STATE(26), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [804] = 8,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      anon_sym_LT,
    ACTIONS(143), 1,
      sym__mustache_statement_start,
    STATE(17), 1,
      sym_element_node_start,
    STATE(22), 1,
      sym_block_statement_start,
    STATE(50), 1,
      sym_element_node_void,
    ACTIONS(137), 2,
      sym_comment,
      sym_text_node,
    STATE(25), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [834] = 8,
    ACTIONS(149), 1,
      anon_sym_LT,
    ACTIONS(152), 1,
      anon_sym_LT_SLASH,
    ACTIONS(154), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(23), 1,
      sym_block_statement_start,
    STATE(80), 1,
      sym_element_node_void,
    ACTIONS(146), 2,
      sym_comment,
      sym_text_node,
    STATE(26), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [864] = 8,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(133), 1,
      sym__mustache_statement_start,
    STATE(19), 1,
      sym_element_node_start,
    STATE(23), 1,
      sym_block_statement_start,
    STATE(64), 1,
      sym_block_statement_end,
    STATE(80), 1,
      sym_element_node_void,
    ACTIONS(117), 2,
      sym_comment,
      sym_text_node,
    STATE(26), 5,
      sym__declaration,
      sym_element_node,
      sym_mustache_statement,
      sym_block_statement,
      aux_sym_template_repeat1,
  [894] = 3,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(157), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(159), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [911] = 8,
    ACTIONS(15), 1,
      anon_sym_as,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_SLASH_GT,
    ACTIONS(167), 1,
      sym_attribute_name,
    ACTIONS(169), 1,
      sym__mustache_statement_start,
    ACTIONS(171), 1,
      sym_comment,
    STATE(106), 1,
      sym_block_params,
    STATE(36), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [938] = 3,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(159), 4,
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
  [955] = 8,
    ACTIONS(15), 1,
      anon_sym_as,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(167), 1,
      sym_attribute_name,
    ACTIONS(169), 1,
      sym__mustache_statement_start,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_SLASH_GT,
    STATE(106), 1,
      sym_block_params,
    STATE(36), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [982] = 2,
    ACTIONS(177), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(179), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [996] = 2,
    ACTIONS(179), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(177), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1010] = 2,
    ACTIONS(183), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(181), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1024] = 2,
    ACTIONS(187), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1038] = 7,
    ACTIONS(15), 1,
      anon_sym_as,
    ACTIONS(167), 1,
      sym_attribute_name,
    ACTIONS(169), 1,
      sym__mustache_statement_start,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(191), 1,
      sym_comment,
    STATE(97), 1,
      sym_block_params,
    STATE(45), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [1062] = 2,
    ACTIONS(193), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(195), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [1076] = 2,
    ACTIONS(197), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(199), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [1090] = 2,
    ACTIONS(201), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(203), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [1104] = 2,
    ACTIONS(185), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(187), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [1118] = 2,
    ACTIONS(181), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
    ACTIONS(183), 5,
      anon_sym_as,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [1132] = 2,
    ACTIONS(195), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1146] = 2,
    ACTIONS(203), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1160] = 2,
    ACTIONS(199), 4,
      sym_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(197), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1174] = 6,
    ACTIONS(205), 1,
      anon_sym_GT,
    ACTIONS(207), 1,
      sym_attribute_name,
    ACTIONS(210), 1,
      anon_sym_as,
    ACTIONS(212), 1,
      sym__mustache_statement_start,
    ACTIONS(215), 1,
      sym_comment,
    STATE(45), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [1195] = 6,
    ACTIONS(169), 1,
      sym__mustache_statement_start,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      sym_number_literal,
    STATE(61), 2,
      sym_concat_statement,
      sym_mustache_statement,
    STATE(62), 2,
      sym__single_quote_concat_statement,
      sym__double_quote_concat_statement,
  [1216] = 3,
    ACTIONS(228), 1,
      anon_sym_EQ,
    ACTIONS(226), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(224), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1229] = 2,
    ACTIONS(232), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(230), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1239] = 2,
    ACTIONS(234), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(236), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1249] = 2,
    ACTIONS(240), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(238), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1259] = 2,
    ACTIONS(244), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(242), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1269] = 2,
    ACTIONS(248), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(246), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1279] = 2,
    ACTIONS(250), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(252), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1289] = 2,
    ACTIONS(254), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(256), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1299] = 2,
    ACTIONS(258), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(260), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1309] = 2,
    ACTIONS(264), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(262), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1319] = 2,
    ACTIONS(260), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(258), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1329] = 2,
    ACTIONS(266), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(268), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1339] = 4,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(272), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(274), 1,
      sym__mustache_statement_start,
    STATE(70), 2,
      sym_mustache_statement,
      aux_sym__single_quote_concat_statement_repeat1,
  [1353] = 4,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(280), 1,
      sym__mustache_statement_start,
    STATE(72), 2,
      sym_mustache_statement,
      aux_sym__double_quote_concat_statement_repeat1,
  [1367] = 2,
    ACTIONS(284), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(282), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1377] = 2,
    ACTIONS(288), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(286), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1387] = 2,
    ACTIONS(248), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(246), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1397] = 2,
    ACTIONS(242), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(244), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1407] = 2,
    ACTIONS(290), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(292), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1417] = 2,
    ACTIONS(294), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(296), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1427] = 2,
    ACTIONS(246), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(248), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1437] = 2,
    ACTIONS(256), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(254), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1447] = 2,
    ACTIONS(300), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(298), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1457] = 4,
    ACTIONS(274), 1,
      sym__mustache_statement_start,
    ACTIONS(302), 1,
      anon_sym_SQUOTE,
    ACTIONS(304), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    STATE(77), 2,
      sym_mustache_statement,
      aux_sym__single_quote_concat_statement_repeat1,
  [1471] = 2,
    ACTIONS(308), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(306), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1481] = 4,
    ACTIONS(280), 1,
      sym__mustache_statement_start,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    STATE(79), 2,
      sym_mustache_statement,
      aux_sym__double_quote_concat_statement_repeat1,
  [1495] = 2,
    ACTIONS(296), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(294), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1505] = 2,
    ACTIONS(236), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(234), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1515] = 2,
    ACTIONS(262), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(264), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1525] = 2,
    ACTIONS(316), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(314), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1535] = 4,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(323), 1,
      sym__mustache_statement_start,
    STATE(77), 2,
      sym_mustache_statement,
      aux_sym__single_quote_concat_statement_repeat1,
  [1549] = 2,
    ACTIONS(328), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(326), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1559] = 4,
    ACTIONS(330), 1,
      anon_sym_DQUOTE,
    ACTIONS(332), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(335), 1,
      sym__mustache_statement_start,
    STATE(79), 2,
      sym_mustache_statement,
      aux_sym__double_quote_concat_statement_repeat1,
  [1573] = 2,
    ACTIONS(238), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(240), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1583] = 2,
    ACTIONS(230), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(232), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1593] = 2,
    ACTIONS(338), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(340), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
  [1602] = 2,
    ACTIONS(342), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(344), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
  [1611] = 2,
    ACTIONS(346), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(348), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
  [1620] = 2,
    ACTIONS(246), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(248), 2,
      anon_sym_DQUOTE,
      sym__mustache_statement_start,
  [1628] = 2,
    ACTIONS(246), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(248), 2,
      anon_sym_SQUOTE,
      sym__mustache_statement_start,
  [1636] = 3,
    ACTIONS(350), 1,
      anon_sym_PIPE,
    ACTIONS(352), 1,
      sym_identifier,
    STATE(87), 1,
      aux_sym_block_params_repeat1,
  [1646] = 3,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      sym_identifier,
    STATE(89), 1,
      aux_sym_block_params_repeat1,
  [1656] = 3,
    ACTIONS(359), 1,
      anon_sym_PIPE,
    ACTIONS(361), 1,
      sym_identifier,
    STATE(87), 1,
      aux_sym_block_params_repeat1,
  [1666] = 1,
    ACTIONS(363), 2,
      anon_sym_GT,
      sym__mustache_statement_end,
  [1671] = 1,
    ACTIONS(365), 2,
      anon_sym_GT,
      sym__mustache_statement_end,
  [1676] = 1,
    ACTIONS(367), 1,
      sym__mustache_statement_end,
  [1680] = 1,
    ACTIONS(369), 1,
      sym_identifier,
  [1684] = 1,
    ACTIONS(371), 1,
      sym_identifier,
  [1688] = 1,
    ACTIONS(17), 1,
      sym__mustache_statement_end,
  [1692] = 1,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
  [1696] = 1,
    ACTIONS(375), 1,
      anon_sym_GT,
  [1700] = 1,
    ACTIONS(377), 1,
      anon_sym_GT,
  [1704] = 1,
    ACTIONS(379), 1,
      sym__mustache_statement_end,
  [1708] = 1,
    ACTIONS(381), 1,
      sym_tag_name,
  [1712] = 1,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
  [1716] = 1,
    ACTIONS(385), 1,
      sym_tag_name,
  [1720] = 1,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
  [1724] = 1,
    ACTIONS(389), 1,
      anon_sym_PIPE,
  [1728] = 1,
    ACTIONS(391), 1,
      sym__mustache_statement_end,
  [1732] = 1,
    ACTIONS(189), 1,
      anon_sym_GT,
  [1736] = 1,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
  [1740] = 1,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
  [1744] = 1,
    ACTIONS(397), 1,
      sym__mustache_statement_end,
  [1748] = 1,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
  [1752] = 1,
    ACTIONS(401), 1,
      anon_sym_GT,
  [1756] = 1,
    ACTIONS(403), 1,
      sym__mustache_statement_end,
  [1760] = 1,
    ACTIONS(405), 1,
      sym__mustache_statement_end,
  [1764] = 1,
    ACTIONS(407), 1,
      sym__mustache_statement_end,
  [1768] = 1,
    ACTIONS(409), 1,
      sym__mustache_statement_end,
  [1772] = 1,
    ACTIONS(411), 1,
      sym_tag_name,
  [1776] = 1,
    ACTIONS(413), 1,
      sym_identifier,
  [1780] = 1,
    ACTIONS(415), 1,
      aux_sym__single_quote_string_literal_token1,
  [1784] = 1,
    ACTIONS(417), 1,
      aux_sym__double_quote_string_literal_token1,
  [1788] = 1,
    ACTIONS(419), 1,
      aux_sym__double_quote_string_literal_token1,
  [1792] = 1,
    ACTIONS(421), 1,
      sym_tag_name,
  [1796] = 1,
    ACTIONS(423), 1,
      aux_sym__single_quote_string_literal_token1,
  [1800] = 1,
    ACTIONS(425), 1,
      sym_identifier,
  [1804] = 1,
    ACTIONS(427), 1,
      sym_identifier,
  [1808] = 1,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 122,
  [SMALL_STATE(6)] = 162,
  [SMALL_STATE(7)] = 200,
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
  [SMALL_STATE(29)] = 911,
  [SMALL_STATE(30)] = 938,
  [SMALL_STATE(31)] = 955,
  [SMALL_STATE(32)] = 982,
  [SMALL_STATE(33)] = 996,
  [SMALL_STATE(34)] = 1010,
  [SMALL_STATE(35)] = 1024,
  [SMALL_STATE(36)] = 1038,
  [SMALL_STATE(37)] = 1062,
  [SMALL_STATE(38)] = 1076,
  [SMALL_STATE(39)] = 1090,
  [SMALL_STATE(40)] = 1104,
  [SMALL_STATE(41)] = 1118,
  [SMALL_STATE(42)] = 1132,
  [SMALL_STATE(43)] = 1146,
  [SMALL_STATE(44)] = 1160,
  [SMALL_STATE(45)] = 1174,
  [SMALL_STATE(46)] = 1195,
  [SMALL_STATE(47)] = 1216,
  [SMALL_STATE(48)] = 1229,
  [SMALL_STATE(49)] = 1239,
  [SMALL_STATE(50)] = 1249,
  [SMALL_STATE(51)] = 1259,
  [SMALL_STATE(52)] = 1269,
  [SMALL_STATE(53)] = 1279,
  [SMALL_STATE(54)] = 1289,
  [SMALL_STATE(55)] = 1299,
  [SMALL_STATE(56)] = 1309,
  [SMALL_STATE(57)] = 1319,
  [SMALL_STATE(58)] = 1329,
  [SMALL_STATE(59)] = 1339,
  [SMALL_STATE(60)] = 1353,
  [SMALL_STATE(61)] = 1367,
  [SMALL_STATE(62)] = 1377,
  [SMALL_STATE(63)] = 1387,
  [SMALL_STATE(64)] = 1397,
  [SMALL_STATE(65)] = 1407,
  [SMALL_STATE(66)] = 1417,
  [SMALL_STATE(67)] = 1427,
  [SMALL_STATE(68)] = 1437,
  [SMALL_STATE(69)] = 1447,
  [SMALL_STATE(70)] = 1457,
  [SMALL_STATE(71)] = 1471,
  [SMALL_STATE(72)] = 1481,
  [SMALL_STATE(73)] = 1495,
  [SMALL_STATE(74)] = 1505,
  [SMALL_STATE(75)] = 1515,
  [SMALL_STATE(76)] = 1525,
  [SMALL_STATE(77)] = 1535,
  [SMALL_STATE(78)] = 1549,
  [SMALL_STATE(79)] = 1559,
  [SMALL_STATE(80)] = 1573,
  [SMALL_STATE(81)] = 1583,
  [SMALL_STATE(82)] = 1593,
  [SMALL_STATE(83)] = 1602,
  [SMALL_STATE(84)] = 1611,
  [SMALL_STATE(85)] = 1620,
  [SMALL_STATE(86)] = 1628,
  [SMALL_STATE(87)] = 1636,
  [SMALL_STATE(88)] = 1646,
  [SMALL_STATE(89)] = 1656,
  [SMALL_STATE(90)] = 1666,
  [SMALL_STATE(91)] = 1671,
  [SMALL_STATE(92)] = 1676,
  [SMALL_STATE(93)] = 1680,
  [SMALL_STATE(94)] = 1684,
  [SMALL_STATE(95)] = 1688,
  [SMALL_STATE(96)] = 1692,
  [SMALL_STATE(97)] = 1696,
  [SMALL_STATE(98)] = 1700,
  [SMALL_STATE(99)] = 1704,
  [SMALL_STATE(100)] = 1708,
  [SMALL_STATE(101)] = 1712,
  [SMALL_STATE(102)] = 1716,
  [SMALL_STATE(103)] = 1720,
  [SMALL_STATE(104)] = 1724,
  [SMALL_STATE(105)] = 1728,
  [SMALL_STATE(106)] = 1732,
  [SMALL_STATE(107)] = 1736,
  [SMALL_STATE(108)] = 1740,
  [SMALL_STATE(109)] = 1744,
  [SMALL_STATE(110)] = 1748,
  [SMALL_STATE(111)] = 1752,
  [SMALL_STATE(112)] = 1756,
  [SMALL_STATE(113)] = 1760,
  [SMALL_STATE(114)] = 1764,
  [SMALL_STATE(115)] = 1768,
  [SMALL_STATE(116)] = 1772,
  [SMALL_STATE(117)] = 1776,
  [SMALL_STATE(118)] = 1780,
  [SMALL_STATE(119)] = 1784,
  [SMALL_STATE(120)] = 1788,
  [SMALL_STATE(121)] = 1792,
  [SMALL_STATE(122)] = 1796,
  [SMALL_STATE(123)] = 1800,
  [SMALL_STATE(124)] = 1804,
  [SMALL_STATE(125)] = 1808,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(118),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(119),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(28),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(15),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(6),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(41),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(122),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(120),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(30),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(16),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(7),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_helper_invocation_repeat1, 2), SHIFT_REPEAT(34),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_helper_invocation, 2, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(25),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(100),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(10),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(26),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(116),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(11),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string_literal, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string_literal, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string_literal, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string_literal, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(47),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(14),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(45),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_void, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_void, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3, .production_id = 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 3, .production_id = 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 4),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement_end, 4, .production_id = 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement_end, 4, .production_id = 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_end, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_end, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat_statement, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concat_statement, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 5),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_concat_statement, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_concat_statement, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_concat_statement, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_concat_statement, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_concat_statement, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_concat_statement, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__single_quote_concat_statement_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(77),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__single_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(13),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_concat_statement, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_concat_statement, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_concat_statement_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(79),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(12),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement_start, 4, .production_id = 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement_start, 4, .production_id = 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement_start, 6, .production_id = 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement_start, 6, .production_id = 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement_start, 5, .production_id = 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement_start, 5, .production_id = 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2), SHIFT_REPEAT(87),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [429] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
