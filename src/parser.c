#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_text_node = 1,
  sym_tag_name = 2,
  anon_sym_LT = 3,
  anon_sym_GT = 4,
  anon_sym_LT_SLASH = 5,
  anon_sym_SLASH_GT = 6,
  sym_attribute_name = 7,
  anon_sym_EQ = 8,
  anon_sym_as = 9,
  anon_sym_PIPE = 10,
  sym__mustache_statement_start = 11,
  sym__mustache_statement_end = 12,
  anon_sym_DOT = 13,
  sym_identifier = 14,
  sym_helper_identifier = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_SQUOTE = 18,
  aux_sym__single_quote_string_literal_token1 = 19,
  anon_sym_DQUOTE = 20,
  aux_sym__double_quote_string_literal_token1 = 21,
  sym_number_literal = 22,
  anon_sym_true = 23,
  anon_sym_false = 24,
  sym_comment = 25,
  sym_template = 26,
  sym_element_node_start = 27,
  sym_element_node_end = 28,
  sym_element_node_void = 29,
  sym_element_node = 30,
  sym_attribute_node = 31,
  sym_block_params = 32,
  sym_path_expression = 33,
  sym__identifier = 34,
  sym__value = 35,
  sym_mustache_statement = 36,
  sym_sub_expression = 37,
  sym_string_literal = 38,
  sym__single_quote_string_literal = 39,
  sym__double_quote_string_literal = 40,
  sym_boolean_literal = 41,
  aux_sym_template_repeat1 = 42,
  aux_sym_element_node_start_repeat1 = 43,
  aux_sym_element_node_repeat1 = 44,
  aux_sym_block_params_repeat1 = 45,
  aux_sym_mustache_statement_repeat1 = 46,
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
  [anon_sym_as] = "as",
  [anon_sym_PIPE] = "|",
  [sym__mustache_statement_start] = "_mustache_statement_start",
  [sym__mustache_statement_end] = "_mustache_statement_end",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [sym_helper_identifier] = "helper_identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__single_quote_string_literal_token1] = "_single_quote_string_literal_token1",
  [anon_sym_DQUOTE] = "\"",
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
  [anon_sym_as] = anon_sym_as,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym__mustache_statement_start] = sym__mustache_statement_start,
  [sym__mustache_statement_end] = sym__mustache_statement_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [sym_helper_identifier] = sym_helper_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__single_quote_string_literal_token1] = aux_sym__single_quote_string_literal_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__single_quote_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
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

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(29);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == '{') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == '}') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_text_node);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(22);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_as);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(20);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__mustache_statement_start);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__mustache_statement_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == 's') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_helper_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 11, .external_lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 11, .external_lex_state = 1},
  [11] = {.lex_state = 11, .external_lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 11, .external_lex_state = 1},
  [18] = {.lex_state = 11, .external_lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3, .external_lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 11, .external_lex_state = 1},
  [23] = {.lex_state = 3, .external_lex_state = 1},
  [24] = {.lex_state = 3, .external_lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 11, .external_lex_state = 1},
  [27] = {.lex_state = 11, .external_lex_state = 1},
  [28] = {.lex_state = 11, .external_lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 11, .external_lex_state = 1},
  [32] = {.lex_state = 11, .external_lex_state = 1},
  [33] = {.lex_state = 3, .external_lex_state = 1},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 11, .external_lex_state = 1},
  [36] = {.lex_state = 11, .external_lex_state = 1},
  [37] = {.lex_state = 3, .external_lex_state = 1},
  [38] = {.lex_state = 11, .external_lex_state = 1},
  [39] = {.lex_state = 11, .external_lex_state = 1},
  [40] = {.lex_state = 11, .external_lex_state = 1},
  [41] = {.lex_state = 3, .external_lex_state = 1},
  [42] = {.lex_state = 3, .external_lex_state = 1},
  [43] = {.lex_state = 3, .external_lex_state = 1},
  [44] = {.lex_state = 3, .external_lex_state = 1},
  [45] = {.lex_state = 3, .external_lex_state = 1},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 8},
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
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__mustache_statement_start] = ACTIONS(1),
    [sym__mustache_statement_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_helper_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(62),
    [sym_element_node_start] = STATE(10),
    [sym_element_node_void] = STATE(28),
    [sym_element_node] = STATE(22),
    [sym_mustache_statement] = STATE(22),
    [aux_sym_template_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text_node] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [sym__mustache_statement_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(16), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(22), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number_literal,
    STATE(9), 1,
      sym__identifier,
    ACTIONS(11), 2,
      sym__mustache_statement_end,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(28), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 2,
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
      sym__mustache_statement_end,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number_literal,
    STATE(9), 1,
      sym__identifier,
    ACTIONS(33), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 2,
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
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__mustache_statement_end,
    ACTIONS(47), 1,
      sym_number_literal,
    STATE(9), 1,
      sym__identifier,
    ACTIONS(33), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(8), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [118] = 10,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__mustache_statement_end,
    ACTIONS(51), 1,
      sym_number_literal,
    STATE(9), 1,
      sym__identifier,
    ACTIONS(33), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 2,
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
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym__identifier,
    ACTIONS(33), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [196] = 10,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(57), 1,
      sym_number_literal,
    STATE(9), 1,
      sym__identifier,
    ACTIONS(33), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(6), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [235] = 10,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(59), 1,
      sym__mustache_statement_end,
    STATE(9), 1,
      sym__identifier,
    ACTIONS(33), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [274] = 3,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(61), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(65), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [292] = 8,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_element_node_start,
    STATE(27), 1,
      sym_element_node_end,
    STATE(28), 1,
      sym_element_node_void,
    ACTIONS(67), 2,
      sym_comment,
      sym_text_node,
    STATE(11), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [320] = 8,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_element_node_start,
    STATE(28), 1,
      sym_element_node_void,
    STATE(35), 1,
      sym_element_node_end,
    ACTIONS(73), 2,
      sym_comment,
      sym_text_node,
    STATE(18), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [348] = 2,
    ACTIONS(75), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(77), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [363] = 2,
    ACTIONS(79), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(81), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [378] = 2,
    ACTIONS(83), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(85), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [393] = 2,
    ACTIONS(87), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(89), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [408] = 2,
    ACTIONS(91), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(93), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [423] = 7,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(103), 1,
      sym__mustache_statement_start,
    STATE(10), 1,
      sym_element_node_start,
    STATE(28), 1,
      sym_element_node_void,
    ACTIONS(97), 2,
      sym_comment,
      sym_text_node,
    STATE(17), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [448] = 7,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(112), 1,
      anon_sym_LT_SLASH,
    ACTIONS(114), 1,
      sym__mustache_statement_start,
    STATE(10), 1,
      sym_element_node_start,
    STATE(28), 1,
      sym_element_node_void,
    ACTIONS(106), 2,
      sym_comment,
      sym_text_node,
    STATE(18), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [473] = 2,
    ACTIONS(117), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(119), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [488] = 8,
    ACTIONS(121), 1,
      anon_sym_GT,
    ACTIONS(123), 1,
      anon_sym_SLASH_GT,
    ACTIONS(125), 1,
      sym_attribute_name,
    ACTIONS(127), 1,
      anon_sym_as,
    ACTIONS(129), 1,
      sym__mustache_statement_start,
    ACTIONS(131), 1,
      sym_comment,
    STATE(50), 1,
      sym_block_params,
    STATE(23), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [515] = 2,
    ACTIONS(133), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(135), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [530] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_element_node_start,
    STATE(28), 1,
      sym_element_node_void,
    ACTIONS(139), 2,
      sym_comment,
      sym_text_node,
    STATE(17), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [555] = 7,
    ACTIONS(125), 1,
      sym_attribute_name,
    ACTIONS(127), 1,
      anon_sym_as,
    ACTIONS(129), 1,
      sym__mustache_statement_start,
    ACTIONS(141), 1,
      anon_sym_GT,
    ACTIONS(143), 1,
      sym_comment,
    STATE(53), 1,
      sym_block_params,
    STATE(24), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [579] = 6,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      sym_attribute_name,
    ACTIONS(150), 1,
      anon_sym_as,
    ACTIONS(152), 1,
      sym__mustache_statement_start,
    ACTIONS(155), 1,
      sym_comment,
    STATE(24), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [600] = 6,
    ACTIONS(129), 1,
      sym__mustache_statement_start,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      sym_number_literal,
    STATE(37), 2,
      sym_mustache_statement,
      sym_string_literal,
    STATE(44), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
  [621] = 2,
    ACTIONS(166), 1,
      anon_sym_LT,
    ACTIONS(164), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [632] = 2,
    ACTIONS(170), 1,
      anon_sym_LT,
    ACTIONS(168), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [643] = 2,
    ACTIONS(174), 1,
      anon_sym_LT,
    ACTIONS(172), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [654] = 4,
    ACTIONS(176), 1,
      anon_sym_PIPE,
    STATE(46), 1,
      sym__identifier,
    ACTIONS(178), 2,
      sym_identifier,
      sym_helper_identifier,
    STATE(29), 2,
      sym_path_expression,
      aux_sym_block_params_repeat1,
  [669] = 4,
    ACTIONS(181), 1,
      anon_sym_PIPE,
    STATE(46), 1,
      sym__identifier,
    ACTIONS(183), 2,
      sym_identifier,
      sym_helper_identifier,
    STATE(29), 2,
      sym_path_expression,
      aux_sym_block_params_repeat1,
  [684] = 2,
    ACTIONS(187), 1,
      anon_sym_LT,
    ACTIONS(185), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [695] = 2,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(189), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [706] = 3,
    ACTIONS(197), 1,
      anon_sym_EQ,
    ACTIONS(195), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(193), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [719] = 4,
    ACTIONS(199), 1,
      anon_sym_PIPE,
    STATE(46), 1,
      sym__identifier,
    ACTIONS(183), 2,
      sym_identifier,
      sym_helper_identifier,
    STATE(30), 2,
      sym_path_expression,
      aux_sym_block_params_repeat1,
  [734] = 2,
    ACTIONS(203), 1,
      anon_sym_LT,
    ACTIONS(201), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [745] = 2,
    ACTIONS(207), 1,
      anon_sym_LT,
    ACTIONS(205), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [756] = 2,
    ACTIONS(211), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(209), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [766] = 2,
    ACTIONS(215), 1,
      anon_sym_LT,
    ACTIONS(213), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [776] = 2,
    ACTIONS(219), 1,
      anon_sym_LT,
    ACTIONS(217), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [786] = 2,
    ACTIONS(223), 1,
      anon_sym_LT,
    ACTIONS(221), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [796] = 2,
    ACTIONS(119), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(117), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [806] = 2,
    ACTIONS(93), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(91), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [816] = 2,
    ACTIONS(166), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(164), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [826] = 2,
    ACTIONS(85), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(83), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [836] = 2,
    ACTIONS(191), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(189), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [846] = 3,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(225), 1,
      anon_sym_DOT,
    ACTIONS(65), 2,
      sym_identifier,
      sym_helper_identifier,
  [857] = 2,
    ACTIONS(87), 1,
      anon_sym_PIPE,
    ACTIONS(89), 2,
      sym_identifier,
      sym_helper_identifier,
  [865] = 2,
    STATE(47), 1,
      sym__identifier,
    ACTIONS(227), 2,
      sym_identifier,
      sym_helper_identifier,
  [873] = 2,
    STATE(15), 1,
      sym__identifier,
    ACTIONS(229), 2,
      sym_identifier,
      sym_helper_identifier,
  [881] = 1,
    ACTIONS(141), 1,
      anon_sym_GT,
  [885] = 1,
    ACTIONS(231), 1,
      anon_sym_GT,
  [889] = 1,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
  [893] = 1,
    ACTIONS(235), 1,
      anon_sym_GT,
  [897] = 1,
    ACTIONS(237), 1,
      anon_sym_GT,
  [901] = 1,
    ACTIONS(239), 1,
      anon_sym_PIPE,
  [905] = 1,
    ACTIONS(241), 1,
      sym_tag_name,
  [909] = 1,
    ACTIONS(243), 1,
      anon_sym_GT,
  [913] = 1,
    ACTIONS(245), 1,
      aux_sym__single_quote_string_literal_token1,
  [917] = 1,
    ACTIONS(247), 1,
      aux_sym__double_quote_string_literal_token1,
  [921] = 1,
    ACTIONS(249), 1,
      sym_tag_name,
  [925] = 1,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
  [929] = 1,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
  [933] = 1,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
  [937] = 1,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
  [941] = 1,
    ACTIONS(259), 1,
      aux_sym__single_quote_string_literal_token1,
  [945] = 1,
    ACTIONS(261), 1,
      aux_sym__double_quote_string_literal_token1,
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
  [SMALL_STATE(10)] = 292,
  [SMALL_STATE(11)] = 320,
  [SMALL_STATE(12)] = 348,
  [SMALL_STATE(13)] = 363,
  [SMALL_STATE(14)] = 378,
  [SMALL_STATE(15)] = 393,
  [SMALL_STATE(16)] = 408,
  [SMALL_STATE(17)] = 423,
  [SMALL_STATE(18)] = 448,
  [SMALL_STATE(19)] = 473,
  [SMALL_STATE(20)] = 488,
  [SMALL_STATE(21)] = 515,
  [SMALL_STATE(22)] = 530,
  [SMALL_STATE(23)] = 555,
  [SMALL_STATE(24)] = 579,
  [SMALL_STATE(25)] = 600,
  [SMALL_STATE(26)] = 621,
  [SMALL_STATE(27)] = 632,
  [SMALL_STATE(28)] = 643,
  [SMALL_STATE(29)] = 654,
  [SMALL_STATE(30)] = 669,
  [SMALL_STATE(31)] = 684,
  [SMALL_STATE(32)] = 695,
  [SMALL_STATE(33)] = 706,
  [SMALL_STATE(34)] = 719,
  [SMALL_STATE(35)] = 734,
  [SMALL_STATE(36)] = 745,
  [SMALL_STATE(37)] = 756,
  [SMALL_STATE(38)] = 766,
  [SMALL_STATE(39)] = 776,
  [SMALL_STATE(40)] = 786,
  [SMALL_STATE(41)] = 796,
  [SMALL_STATE(42)] = 806,
  [SMALL_STATE(43)] = 816,
  [SMALL_STATE(44)] = 826,
  [SMALL_STATE(45)] = 836,
  [SMALL_STATE(46)] = 846,
  [SMALL_STATE(47)] = 857,
  [SMALL_STATE(48)] = 865,
  [SMALL_STATE(49)] = 873,
  [SMALL_STATE(50)] = 881,
  [SMALL_STATE(51)] = 885,
  [SMALL_STATE(52)] = 889,
  [SMALL_STATE(53)] = 893,
  [SMALL_STATE(54)] = 897,
  [SMALL_STATE(55)] = 901,
  [SMALL_STATE(56)] = 905,
  [SMALL_STATE(57)] = 909,
  [SMALL_STATE(58)] = 913,
  [SMALL_STATE(59)] = 917,
  [SMALL_STATE(60)] = 921,
  [SMALL_STATE(61)] = 925,
  [SMALL_STATE(62)] = 929,
  [SMALL_STATE(63)] = 933,
  [SMALL_STATE(64)] = 937,
  [SMALL_STATE(65)] = 941,
  [SMALL_STATE(66)] = 945,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(9),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(7),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(58),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(59),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string_literal, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string_literal, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(17),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(56),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(18),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(56),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string_literal, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string_literal, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(33),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(5),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(24),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_params_repeat1, 2), SHIFT_REPEAT(46),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_end, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_end, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_void, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_void, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [253] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
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
