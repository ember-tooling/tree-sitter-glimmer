#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

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
  aux_sym__mustache_safe_single_quote_string_literal_token1 = 11,
  aux_sym__mustache_safe_double_quote_string_literal_token1 = 12,
  anon_sym_as = 13,
  anon_sym_PIPE = 14,
  sym__mustache_statement_start = 15,
  sym__mustache_statement_end = 16,
  anon_sym_DOT = 17,
  sym_identifier = 18,
  sym_helper_identifier = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  aux_sym__single_quote_string_literal_token1 = 22,
  aux_sym__double_quote_string_literal_token1 = 23,
  sym_number_literal = 24,
  anon_sym_true = 25,
  anon_sym_false = 26,
  sym_comment = 27,
  sym_template = 28,
  sym_element_node_start = 29,
  sym_element_node_end = 30,
  sym_element_node_void = 31,
  sym_element_node = 32,
  sym_attribute_node = 33,
  sym_concat_statement = 34,
  sym__single_quote_concat_statement = 35,
  sym__double_quote_concat_statement = 36,
  sym__mustache_safe_string_literal = 37,
  sym__mustache_safe_single_quote_string_literal = 38,
  sym__mustache_safe_double_quote_string_literal = 39,
  sym_block_params = 40,
  sym_path_expression = 41,
  sym__identifier = 42,
  sym__value = 43,
  sym_mustache_statement = 44,
  sym_sub_expression = 45,
  sym_string_literal = 46,
  sym__single_quote_string_literal = 47,
  sym__double_quote_string_literal = 48,
  sym_boolean_literal = 49,
  aux_sym_template_repeat1 = 50,
  aux_sym_element_node_start_repeat1 = 51,
  aux_sym_element_node_repeat1 = 52,
  aux_sym_block_params_repeat1 = 53,
  aux_sym_mustache_statement_repeat1 = 54,
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
  [aux_sym__mustache_safe_single_quote_string_literal_token1] = "_mustache_safe_single_quote_string_literal_token1",
  [aux_sym__mustache_safe_double_quote_string_literal_token1] = "_mustache_safe_double_quote_string_literal_token1",
  [anon_sym_as] = "as",
  [anon_sym_PIPE] = "|",
  [sym__mustache_statement_start] = "_mustache_statement_start",
  [sym__mustache_statement_end] = "_mustache_statement_end",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [sym_helper_identifier] = "helper_identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym__single_quote_string_literal_token1] = "_single_quote_string_literal_token1",
  [aux_sym__double_quote_string_literal_token1] = "_double_quote_string_literal_token1",
  [sym_number_literal] = "number_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_comment] = "comment_statement",
  [sym_template] = "template",
  [sym_element_node_start] = "element_node_start",
  [sym_element_node_end] = "element_node_end",
  [sym_element_node_void] = "element_node_void",
  [sym_element_node] = "element_node",
  [sym_attribute_node] = "attribute_node",
  [sym_concat_statement] = "concat_statement",
  [sym__single_quote_concat_statement] = "_single_quote_concat_statement",
  [sym__double_quote_concat_statement] = "_double_quote_concat_statement",
  [sym__mustache_safe_string_literal] = "string_literal",
  [sym__mustache_safe_single_quote_string_literal] = "_mustache_safe_single_quote_string_literal",
  [sym__mustache_safe_double_quote_string_literal] = "_mustache_safe_double_quote_string_literal",
  [sym_block_params] = "block_params",
  [sym_path_expression] = "path_expression",
  [sym__identifier] = "_identifier",
  [sym__value] = "_value",
  [sym_mustache_statement] = "mustache_statement",
  [sym_sub_expression] = "sub_expression",
  [sym_string_literal] = "string_literal",
  [sym__single_quote_string_literal] = "_single_quote_string_literal",
  [sym__double_quote_string_literal] = "_double_quote_string_literal",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_element_node_start_repeat1] = "element_node_start_repeat1",
  [aux_sym_element_node_repeat1] = "element_node_repeat1",
  [aux_sym_block_params_repeat1] = "block_params_repeat1",
  [aux_sym_mustache_statement_repeat1] = "mustache_statement_repeat1",
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
  [aux_sym__mustache_safe_single_quote_string_literal_token1] = aux_sym__mustache_safe_single_quote_string_literal_token1,
  [aux_sym__mustache_safe_double_quote_string_literal_token1] = aux_sym__mustache_safe_double_quote_string_literal_token1,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym__mustache_statement_start] = sym__mustache_statement_start,
  [sym__mustache_statement_end] = sym__mustache_statement_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [sym_helper_identifier] = sym_helper_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__single_quote_string_literal_token1] = aux_sym__single_quote_string_literal_token1,
  [aux_sym__double_quote_string_literal_token1] = aux_sym__double_quote_string_literal_token1,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_comment] = sym_comment,
  [sym_template] = sym_template,
  [sym_element_node_start] = sym_element_node_start,
  [sym_element_node_end] = sym_element_node_end,
  [sym_element_node_void] = sym_element_node_void,
  [sym_element_node] = sym_element_node,
  [sym_attribute_node] = sym_attribute_node,
  [sym_concat_statement] = sym_concat_statement,
  [sym__single_quote_concat_statement] = sym__single_quote_concat_statement,
  [sym__double_quote_concat_statement] = sym__double_quote_concat_statement,
  [sym__mustache_safe_string_literal] = sym_string_literal,
  [sym__mustache_safe_single_quote_string_literal] = sym__mustache_safe_single_quote_string_literal,
  [sym__mustache_safe_double_quote_string_literal] = sym__mustache_safe_double_quote_string_literal,
  [sym_block_params] = sym_block_params,
  [sym_path_expression] = sym_path_expression,
  [sym__identifier] = sym__identifier,
  [sym__value] = sym__value,
  [sym_mustache_statement] = sym_mustache_statement,
  [sym_sub_expression] = sym_sub_expression,
  [sym_string_literal] = sym_string_literal,
  [sym__single_quote_string_literal] = sym__single_quote_string_literal,
  [sym__double_quote_string_literal] = sym__double_quote_string_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_element_node_start_repeat1] = aux_sym_element_node_start_repeat1,
  [aux_sym_element_node_repeat1] = aux_sym_element_node_repeat1,
  [aux_sym_block_params_repeat1] = aux_sym_block_params_repeat1,
  [aux_sym_mustache_statement_repeat1] = aux_sym_mustache_statement_repeat1,
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
  [aux_sym__mustache_safe_single_quote_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mustache_safe_double_quote_string_literal_token1] = {
    .visible = false,
    .named = false,
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
  [sym_helper_identifier] = {
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
  [sym__mustache_safe_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__mustache_safe_single_quote_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__mustache_safe_double_quote_string_literal] = {
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
  [sym__identifier] = {
    .visible = false,
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
  [sym_sub_expression] = {
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
  [aux_sym_element_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mustache_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_attribute_name_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '\'' || (c < '{'
      ? (c < '<'
        ? c == '/'
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(37);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_text_node);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(30);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__mustache_safe_single_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__mustache_safe_single_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__mustache_safe_double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__mustache_safe_double_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_as);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(22);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__mustache_statement_start);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__mustache_statement_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 's') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_helper_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 13, .external_lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 13, .external_lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 13, .external_lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 13, .external_lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3, .external_lex_state = 1},
  [20] = {.lex_state = 13, .external_lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 13, .external_lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 3, .external_lex_state = 1},
  [27] = {.lex_state = 3, .external_lex_state = 1},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 13, .external_lex_state = 1},
  [30] = {.lex_state = 3, .external_lex_state = 1},
  [31] = {.lex_state = 13, .external_lex_state = 1},
  [32] = {.lex_state = 13, .external_lex_state = 1},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 13, .external_lex_state = 1},
  [36] = {.lex_state = 13, .external_lex_state = 1},
  [37] = {.lex_state = 13, .external_lex_state = 1},
  [38] = {.lex_state = 13, .external_lex_state = 1},
  [39] = {.lex_state = 3, .external_lex_state = 1},
  [40] = {.lex_state = 13, .external_lex_state = 1},
  [41] = {.lex_state = 3, .external_lex_state = 1},
  [42] = {.lex_state = 13, .external_lex_state = 1},
  [43] = {.lex_state = 3, .external_lex_state = 1},
  [44] = {.lex_state = 13, .external_lex_state = 1},
  [45] = {.lex_state = 3, .external_lex_state = 1},
  [46] = {.lex_state = 3, .external_lex_state = 1},
  [47] = {.lex_state = 3, .external_lex_state = 1},
  [48] = {.lex_state = 3, .external_lex_state = 1},
  [49] = {.lex_state = 3, .external_lex_state = 1},
  [50] = {.lex_state = 3, .external_lex_state = 1},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
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
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__mustache_statement_start] = ACTIONS(1),
    [sym__mustache_statement_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_helper_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(75),
    [sym_element_node_start] = STATE(11),
    [sym_element_node_void] = STATE(31),
    [sym_element_node] = STATE(15),
    [sym_mustache_statement] = STATE(15),
    [aux_sym_template_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text_node] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [sym__mustache_statement_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(14), 1,
      anon_sym_DQUOTE,
    ACTIONS(22), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_number_literal,
    STATE(14), 1,
      sym__identifier,
    ACTIONS(17), 2,
      sym__mustache_statement_end,
      anon_sym_RPAREN,
    ACTIONS(19), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(28), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [40] = 10,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym__mustache_statement_end,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_number_literal,
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [79] = 10,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(45), 1,
      sym__mustache_statement_end,
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [118] = 10,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym__mustache_statement_end,
    ACTIONS(49), 1,
      sym_number_literal,
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(3), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [157] = 10,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym__mustache_statement_end,
    ACTIONS(53), 1,
      sym_number_literal,
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(4), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [196] = 10,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(55), 1,
      sym__mustache_statement_end,
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [235] = 10,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      sym__mustache_statement_end,
    ACTIONS(59), 1,
      sym_number_literal,
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(7), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [274] = 10,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [313] = 10,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(65), 1,
      sym_number_literal,
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(9), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [352] = 8,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      anon_sym_LT_SLASH,
    STATE(11), 1,
      sym_element_node_start,
    STATE(31), 1,
      sym_element_node_void,
    STATE(35), 1,
      sym_element_node_end,
    ACTIONS(67), 2,
      sym_comment,
      sym_text_node,
    STATE(13), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [380] = 7,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      sym__mustache_statement_start,
    ACTIONS(79), 1,
      sym_number_literal,
    STATE(49), 2,
      sym__single_quote_concat_statement,
      sym__double_quote_concat_statement,
    STATE(50), 2,
      sym__mustache_safe_single_quote_string_literal,
      sym__mustache_safe_double_quote_string_literal,
    STATE(48), 3,
      sym_concat_statement,
      sym__mustache_safe_string_literal,
      sym_mustache_statement,
  [406] = 8,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      anon_sym_LT_SLASH,
    STATE(11), 1,
      sym_element_node_start,
    STATE(31), 1,
      sym_element_node_void,
    STATE(38), 1,
      sym_element_node_end,
    ACTIONS(81), 2,
      sym_comment,
      sym_text_node,
    STATE(24), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [434] = 3,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(83), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(87), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [452] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_element_node_start,
    STATE(31), 1,
      sym_element_node_void,
    ACTIONS(91), 2,
      sym_comment,
      sym_text_node,
    STATE(20), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [477] = 2,
    ACTIONS(93), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(95), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [492] = 2,
    ACTIONS(97), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(99), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [507] = 2,
    ACTIONS(101), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(103), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [522] = 8,
    ACTIONS(77), 1,
      sym__mustache_statement_start,
    ACTIONS(105), 1,
      anon_sym_GT,
    ACTIONS(107), 1,
      anon_sym_SLASH_GT,
    ACTIONS(109), 1,
      sym_attribute_name,
    ACTIONS(111), 1,
      anon_sym_as,
    ACTIONS(113), 1,
      sym_comment,
    STATE(74), 1,
      sym_block_params,
    STATE(26), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [549] = 7,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      anon_sym_LT,
    ACTIONS(123), 1,
      sym__mustache_statement_start,
    STATE(11), 1,
      sym_element_node_start,
    STATE(31), 1,
      sym_element_node_void,
    ACTIONS(117), 2,
      sym_comment,
      sym_text_node,
    STATE(20), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [574] = 2,
    ACTIONS(126), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(128), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [589] = 2,
    ACTIONS(130), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(132), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [604] = 2,
    ACTIONS(134), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(136), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [619] = 7,
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(144), 1,
      anon_sym_LT_SLASH,
    ACTIONS(146), 1,
      sym__mustache_statement_start,
    STATE(11), 1,
      sym_element_node_start,
    STATE(31), 1,
      sym_element_node_void,
    ACTIONS(138), 2,
      sym_comment,
      sym_text_node,
    STATE(24), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [644] = 2,
    ACTIONS(149), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(151), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [659] = 7,
    ACTIONS(77), 1,
      sym__mustache_statement_start,
    ACTIONS(109), 1,
      sym_attribute_name,
    ACTIONS(111), 1,
      anon_sym_as,
    ACTIONS(153), 1,
      anon_sym_GT,
    ACTIONS(155), 1,
      sym_comment,
    STATE(68), 1,
      sym_block_params,
    STATE(27), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [683] = 6,
    ACTIONS(157), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      sym_attribute_name,
    ACTIONS(162), 1,
      anon_sym_as,
    ACTIONS(164), 1,
      sym__mustache_statement_start,
    ACTIONS(167), 1,
      sym_comment,
    STATE(27), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [704] = 4,
    ACTIONS(170), 1,
      anon_sym_PIPE,
    STATE(51), 1,
      sym__identifier,
    ACTIONS(172), 2,
      sym_identifier,
      sym_helper_identifier,
    STATE(34), 2,
      sym_path_expression,
      aux_sym_block_params_repeat1,
  [719] = 2,
    ACTIONS(176), 1,
      anon_sym_LT,
    ACTIONS(174), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [730] = 3,
    ACTIONS(182), 1,
      anon_sym_EQ,
    ACTIONS(180), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(178), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [743] = 2,
    ACTIONS(186), 1,
      anon_sym_LT,
    ACTIONS(184), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [754] = 2,
    ACTIONS(190), 1,
      anon_sym_LT,
    ACTIONS(188), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [765] = 4,
    ACTIONS(192), 1,
      anon_sym_PIPE,
    STATE(51), 1,
      sym__identifier,
    ACTIONS(194), 2,
      sym_identifier,
      sym_helper_identifier,
    STATE(33), 2,
      sym_path_expression,
      aux_sym_block_params_repeat1,
  [780] = 4,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    STATE(51), 1,
      sym__identifier,
    ACTIONS(172), 2,
      sym_identifier,
      sym_helper_identifier,
    STATE(33), 2,
      sym_path_expression,
      aux_sym_block_params_repeat1,
  [795] = 2,
    ACTIONS(201), 1,
      anon_sym_LT,
    ACTIONS(199), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [806] = 2,
    ACTIONS(205), 1,
      anon_sym_LT,
    ACTIONS(203), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [817] = 2,
    ACTIONS(209), 1,
      anon_sym_LT,
    ACTIONS(207), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [828] = 2,
    ACTIONS(213), 1,
      anon_sym_LT,
    ACTIONS(211), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [839] = 2,
    ACTIONS(217), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(215), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [849] = 2,
    ACTIONS(221), 1,
      anon_sym_LT,
    ACTIONS(219), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [859] = 2,
    ACTIONS(205), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(203), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [869] = 2,
    ACTIONS(225), 1,
      anon_sym_LT,
    ACTIONS(223), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [879] = 2,
    ACTIONS(176), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(174), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [889] = 2,
    ACTIONS(229), 1,
      anon_sym_LT,
    ACTIONS(227), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [899] = 2,
    ACTIONS(233), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(231), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [909] = 2,
    ACTIONS(237), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(235), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [919] = 2,
    ACTIONS(241), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(239), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [929] = 2,
    ACTIONS(245), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(243), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [939] = 2,
    ACTIONS(249), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(247), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [949] = 2,
    ACTIONS(253), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(251), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [959] = 3,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(255), 1,
      anon_sym_DOT,
    ACTIONS(87), 2,
      sym_identifier,
      sym_helper_identifier,
  [970] = 2,
    STATE(54), 1,
      sym__identifier,
    ACTIONS(257), 2,
      sym_identifier,
      sym_helper_identifier,
  [978] = 3,
    ACTIONS(259), 1,
      aux_sym__mustache_safe_double_quote_string_literal_token1,
    ACTIONS(261), 1,
      sym__mustache_statement_start,
    STATE(59), 1,
      sym_mustache_statement,
  [988] = 2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 2,
      sym_identifier,
      sym_helper_identifier,
  [996] = 2,
    STATE(25), 1,
      sym__identifier,
    ACTIONS(263), 2,
      sym_identifier,
      sym_helper_identifier,
  [1004] = 3,
    ACTIONS(261), 1,
      sym__mustache_statement_start,
    ACTIONS(265), 1,
      aux_sym__mustache_safe_single_quote_string_literal_token1,
    STATE(70), 1,
      sym_mustache_statement,
  [1014] = 1,
    ACTIONS(203), 2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1019] = 1,
    ACTIONS(174), 2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1024] = 1,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
  [1028] = 1,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
  [1032] = 1,
    ACTIONS(271), 1,
      anon_sym_GT,
  [1036] = 1,
    ACTIONS(273), 1,
      anon_sym_SQUOTE,
  [1040] = 1,
    ACTIONS(275), 1,
      anon_sym_PIPE,
  [1044] = 1,
    ACTIONS(277), 1,
      anon_sym_GT,
  [1048] = 1,
    ACTIONS(279), 1,
      sym_tag_name,
  [1052] = 1,
    ACTIONS(281), 1,
      sym_tag_name,
  [1056] = 1,
    ACTIONS(283), 1,
      anon_sym_GT,
  [1060] = 1,
    ACTIONS(285), 1,
      anon_sym_GT,
  [1064] = 1,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
  [1068] = 1,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
  [1072] = 1,
    ACTIONS(291), 1,
      anon_sym_SQUOTE,
  [1076] = 1,
    ACTIONS(293), 1,
      aux_sym__double_quote_string_literal_token1,
  [1080] = 1,
    ACTIONS(295), 1,
      aux_sym__single_quote_string_literal_token1,
  [1084] = 1,
    ACTIONS(153), 1,
      anon_sym_GT,
  [1088] = 1,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 118,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 196,
  [SMALL_STATE(8)] = 235,
  [SMALL_STATE(9)] = 274,
  [SMALL_STATE(10)] = 313,
  [SMALL_STATE(11)] = 352,
  [SMALL_STATE(12)] = 380,
  [SMALL_STATE(13)] = 406,
  [SMALL_STATE(14)] = 434,
  [SMALL_STATE(15)] = 452,
  [SMALL_STATE(16)] = 477,
  [SMALL_STATE(17)] = 492,
  [SMALL_STATE(18)] = 507,
  [SMALL_STATE(19)] = 522,
  [SMALL_STATE(20)] = 549,
  [SMALL_STATE(21)] = 574,
  [SMALL_STATE(22)] = 589,
  [SMALL_STATE(23)] = 604,
  [SMALL_STATE(24)] = 619,
  [SMALL_STATE(25)] = 644,
  [SMALL_STATE(26)] = 659,
  [SMALL_STATE(27)] = 683,
  [SMALL_STATE(28)] = 704,
  [SMALL_STATE(29)] = 719,
  [SMALL_STATE(30)] = 730,
  [SMALL_STATE(31)] = 743,
  [SMALL_STATE(32)] = 754,
  [SMALL_STATE(33)] = 765,
  [SMALL_STATE(34)] = 780,
  [SMALL_STATE(35)] = 795,
  [SMALL_STATE(36)] = 806,
  [SMALL_STATE(37)] = 817,
  [SMALL_STATE(38)] = 828,
  [SMALL_STATE(39)] = 839,
  [SMALL_STATE(40)] = 849,
  [SMALL_STATE(41)] = 859,
  [SMALL_STATE(42)] = 869,
  [SMALL_STATE(43)] = 879,
  [SMALL_STATE(44)] = 889,
  [SMALL_STATE(45)] = 899,
  [SMALL_STATE(46)] = 909,
  [SMALL_STATE(47)] = 919,
  [SMALL_STATE(48)] = 929,
  [SMALL_STATE(49)] = 939,
  [SMALL_STATE(50)] = 949,
  [SMALL_STATE(51)] = 959,
  [SMALL_STATE(52)] = 970,
  [SMALL_STATE(53)] = 978,
  [SMALL_STATE(54)] = 988,
  [SMALL_STATE(55)] = 996,
  [SMALL_STATE(56)] = 1004,
  [SMALL_STATE(57)] = 1014,
  [SMALL_STATE(58)] = 1019,
  [SMALL_STATE(59)] = 1024,
  [SMALL_STATE(60)] = 1028,
  [SMALL_STATE(61)] = 1032,
  [SMALL_STATE(62)] = 1036,
  [SMALL_STATE(63)] = 1040,
  [SMALL_STATE(64)] = 1044,
  [SMALL_STATE(65)] = 1048,
  [SMALL_STATE(66)] = 1052,
  [SMALL_STATE(67)] = 1056,
  [SMALL_STATE(68)] = 1060,
  [SMALL_STATE(69)] = 1064,
  [SMALL_STATE(70)] = 1068,
  [SMALL_STATE(71)] = 1072,
  [SMALL_STATE(72)] = 1076,
  [SMALL_STATE(73)] = 1080,
  [SMALL_STATE(74)] = 1084,
  [SMALL_STATE(75)] = 1088,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(73),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(72),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(14),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(10),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string_literal, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string_literal, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string_literal, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string_literal, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(20),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(66),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(5),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 3),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(24),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(66),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(30),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(8),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(27),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_void, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_void, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_params_repeat1, 2), SHIFT_REPEAT(51),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_end, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_end, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_concat_statement, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_concat_statement, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 5),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_concat_statement, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_concat_statement, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mustache_safe_double_quote_string_literal, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mustache_safe_double_quote_string_literal, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mustache_safe_single_quote_string_literal, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mustache_safe_single_quote_string_literal, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat_statement, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concat_statement, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mustache_safe_string_literal, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mustache_safe_string_literal, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [297] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
