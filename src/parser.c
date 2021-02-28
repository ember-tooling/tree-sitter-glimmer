#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
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
  sym_path_expression = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_SQUOTE = 16,
  aux_sym__single_quote_string_literal_token1 = 17,
  anon_sym_DQUOTE = 18,
  aux_sym__double_quote_string_literal_token1 = 19,
  sym_number_literal = 20,
  anon_sym_true = 21,
  anon_sym_false = 22,
  sym_comment = 23,
  sym_template = 24,
  sym_element_node_start = 25,
  sym_element_node_end = 26,
  sym_element_node_void = 27,
  sym_element_node = 28,
  sym_attribute_node = 29,
  sym_block_params = 30,
  sym__value = 31,
  sym_mustache_statement = 32,
  sym_sub_expression = 33,
  sym_string_literal = 34,
  sym__single_quote_string_literal = 35,
  sym__double_quote_string_literal = 36,
  sym_boolean_literal = 37,
  aux_sym_template_repeat1 = 38,
  aux_sym_element_node_start_repeat1 = 39,
  aux_sym_element_node_repeat1 = 40,
  aux_sym_block_params_repeat1 = 41,
  aux_sym_mustache_statement_repeat1 = 42,
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
  [sym_path_expression] = "path_expression",
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
  [sym_path_expression] = sym_path_expression,
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
  [sym_path_expression] = {
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
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == '{') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == '}') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_text_node);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(24);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_as);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(21);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__mustache_statement_start);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__mustache_statement_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 's') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 12, .external_lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 12, .external_lex_state = 1},
  [10] = {.lex_state = 12, .external_lex_state = 1},
  [11] = {.lex_state = 12, .external_lex_state = 1},
  [12] = {.lex_state = 3, .external_lex_state = 1},
  [13] = {.lex_state = 12, .external_lex_state = 1},
  [14] = {.lex_state = 12, .external_lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 3, .external_lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 3, .external_lex_state = 1},
  [24] = {.lex_state = 12, .external_lex_state = 1},
  [25] = {.lex_state = 12, .external_lex_state = 1},
  [26] = {.lex_state = 12, .external_lex_state = 1},
  [27] = {.lex_state = 12, .external_lex_state = 1},
  [28] = {.lex_state = 12, .external_lex_state = 1},
  [29] = {.lex_state = 12, .external_lex_state = 1},
  [30] = {.lex_state = 3, .external_lex_state = 1},
  [31] = {.lex_state = 12, .external_lex_state = 1},
  [32] = {.lex_state = 12, .external_lex_state = 1},
  [33] = {.lex_state = 3, .external_lex_state = 1},
  [34] = {.lex_state = 3, .external_lex_state = 1},
  [35] = {.lex_state = 3, .external_lex_state = 1},
  [36] = {.lex_state = 3, .external_lex_state = 1},
  [37] = {.lex_state = 12, .external_lex_state = 1},
  [38] = {.lex_state = 3, .external_lex_state = 1},
  [39] = {.lex_state = 12, .external_lex_state = 1},
  [40] = {.lex_state = 3, .external_lex_state = 1},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 8},
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
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__mustache_statement_start] = ACTIONS(1),
    [sym__mustache_statement_end] = ACTIONS(1),
    [sym_path_expression] = ACTIONS(1),
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
    [sym_template] = STATE(56),
    [sym_element_node_start] = STATE(9),
    [sym_element_node_void] = STATE(26),
    [sym_element_node] = STATE(11),
    [sym_mustache_statement] = STATE(11),
    [aux_sym_template_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text_node] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [sym__mustache_statement_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(16), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(22), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 2,
      sym__mustache_statement_end,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_path_expression,
      sym_number_literal,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 5,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [33] = 8,
    ACTIONS(28), 1,
      sym__mustache_statement_end,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(30), 2,
      sym_path_expression,
      sym_number_literal,
    ACTIONS(38), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 5,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [65] = 8,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      sym__mustache_statement_end,
    ACTIONS(30), 2,
      sym_path_expression,
      sym_number_literal,
    ACTIONS(38), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 5,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [97] = 8,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym__mustache_statement_end,
    ACTIONS(38), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(44), 2,
      sym_path_expression,
      sym_number_literal,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(3), 5,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [129] = 8,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      sym__mustache_statement_end,
    ACTIONS(38), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(48), 2,
      sym_path_expression,
      sym_number_literal,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(4), 5,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [161] = 8,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    ACTIONS(30), 2,
      sym_path_expression,
      sym_number_literal,
    ACTIONS(38), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 5,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [193] = 8,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    ACTIONS(38), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(52), 2,
      sym_path_expression,
      sym_number_literal,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(7), 5,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [225] = 8,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(58), 1,
      anon_sym_LT,
    ACTIONS(60), 1,
      anon_sym_LT_SLASH,
    STATE(9), 1,
      sym_element_node_start,
    STATE(25), 1,
      sym_element_node_end,
    STATE(26), 1,
      sym_element_node_void,
    ACTIONS(56), 2,
      sym_comment,
      sym_text_node,
    STATE(10), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [253] = 8,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(58), 1,
      anon_sym_LT,
    ACTIONS(60), 1,
      anon_sym_LT_SLASH,
    STATE(9), 1,
      sym_element_node_start,
    STATE(26), 1,
      sym_element_node_void,
    STATE(29), 1,
      sym_element_node_end,
    ACTIONS(62), 2,
      sym_comment,
      sym_text_node,
    STATE(14), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [281] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_element_node_start,
    STATE(26), 1,
      sym_element_node_void,
    ACTIONS(66), 2,
      sym_comment,
      sym_text_node,
    STATE(13), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [306] = 8,
    ACTIONS(68), 1,
      anon_sym_GT,
    ACTIONS(70), 1,
      anon_sym_SLASH_GT,
    ACTIONS(72), 1,
      sym_attribute_name,
    ACTIONS(74), 1,
      anon_sym_as,
    ACTIONS(76), 1,
      sym__mustache_statement_start,
    ACTIONS(78), 1,
      sym_comment,
    STATE(55), 1,
      sym_block_params,
    STATE(20), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [333] = 7,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(88), 1,
      sym__mustache_statement_start,
    STATE(9), 1,
      sym_element_node_start,
    STATE(26), 1,
      sym_element_node_void,
    ACTIONS(82), 2,
      sym_comment,
      sym_text_node,
    STATE(13), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [358] = 7,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(97), 1,
      anon_sym_LT_SLASH,
    ACTIONS(99), 1,
      sym__mustache_statement_start,
    STATE(9), 1,
      sym_element_node_start,
    STATE(26), 1,
      sym_element_node_void,
    ACTIONS(91), 2,
      sym_comment,
      sym_text_node,
    STATE(14), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [383] = 2,
    ACTIONS(104), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(102), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [397] = 2,
    ACTIONS(108), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(106), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [411] = 2,
    ACTIONS(112), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(110), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [425] = 2,
    ACTIONS(116), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(114), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [439] = 2,
    ACTIONS(120), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(118), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [453] = 7,
    ACTIONS(72), 1,
      sym_attribute_name,
    ACTIONS(74), 1,
      anon_sym_as,
    ACTIONS(76), 1,
      sym__mustache_statement_start,
    ACTIONS(122), 1,
      anon_sym_GT,
    ACTIONS(124), 1,
      sym_comment,
    STATE(51), 1,
      sym_block_params,
    STATE(23), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [477] = 2,
    ACTIONS(128), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(126), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [491] = 6,
    ACTIONS(76), 1,
      sym__mustache_statement_start,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      sym_number_literal,
    STATE(36), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(40), 2,
      sym_mustache_statement,
      sym_string_literal,
  [512] = 6,
    ACTIONS(136), 1,
      anon_sym_GT,
    ACTIONS(138), 1,
      sym_attribute_name,
    ACTIONS(141), 1,
      anon_sym_as,
    ACTIONS(143), 1,
      sym__mustache_statement_start,
    ACTIONS(146), 1,
      sym_comment,
    STATE(23), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [533] = 2,
    ACTIONS(151), 1,
      anon_sym_LT,
    ACTIONS(149), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [544] = 2,
    ACTIONS(155), 1,
      anon_sym_LT,
    ACTIONS(153), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [555] = 2,
    ACTIONS(159), 1,
      anon_sym_LT,
    ACTIONS(157), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [566] = 2,
    ACTIONS(163), 1,
      anon_sym_LT,
    ACTIONS(161), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [577] = 2,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(165), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [588] = 2,
    ACTIONS(171), 1,
      anon_sym_LT,
    ACTIONS(169), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [599] = 3,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(175), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(173), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [612] = 2,
    ACTIONS(181), 1,
      anon_sym_LT,
    ACTIONS(179), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [623] = 2,
    ACTIONS(185), 1,
      anon_sym_LT,
    ACTIONS(183), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [633] = 2,
    ACTIONS(104), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(102), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [643] = 2,
    ACTIONS(108), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(106), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [653] = 2,
    ACTIONS(151), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(149), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [663] = 2,
    ACTIONS(112), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(110), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [673] = 2,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(187), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [683] = 2,
    ACTIONS(167), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(165), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [693] = 2,
    ACTIONS(193), 1,
      anon_sym_LT,
    ACTIONS(191), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [703] = 2,
    ACTIONS(197), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(195), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [713] = 3,
    ACTIONS(199), 1,
      anon_sym_PIPE,
    ACTIONS(201), 1,
      sym_path_expression,
    STATE(42), 1,
      aux_sym_block_params_repeat1,
  [723] = 3,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      sym_path_expression,
    STATE(42), 1,
      aux_sym_block_params_repeat1,
  [733] = 3,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(210), 1,
      sym_path_expression,
    STATE(41), 1,
      aux_sym_block_params_repeat1,
  [743] = 1,
    ACTIONS(212), 1,
      aux_sym__single_quote_string_literal_token1,
  [747] = 1,
    ACTIONS(214), 1,
      anon_sym_PIPE,
  [751] = 1,
    ACTIONS(216), 1,
      anon_sym_SQUOTE,
  [755] = 1,
    ACTIONS(218), 1,
      aux_sym__double_quote_string_literal_token1,
  [759] = 1,
    ACTIONS(220), 1,
      anon_sym_GT,
  [763] = 1,
    ACTIONS(222), 1,
      sym_tag_name,
  [767] = 1,
    ACTIONS(224), 1,
      anon_sym_GT,
  [771] = 1,
    ACTIONS(226), 1,
      anon_sym_GT,
  [775] = 1,
    ACTIONS(228), 1,
      anon_sym_GT,
  [779] = 1,
    ACTIONS(230), 1,
      sym_tag_name,
  [783] = 1,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
  [787] = 1,
    ACTIONS(122), 1,
      anon_sym_GT,
  [791] = 1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [795] = 1,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
  [799] = 1,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
  [803] = 1,
    ACTIONS(240), 1,
      aux_sym__single_quote_string_literal_token1,
  [807] = 1,
    ACTIONS(242), 1,
      aux_sym__double_quote_string_literal_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 65,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 129,
  [SMALL_STATE(7)] = 161,
  [SMALL_STATE(8)] = 193,
  [SMALL_STATE(9)] = 225,
  [SMALL_STATE(10)] = 253,
  [SMALL_STATE(11)] = 281,
  [SMALL_STATE(12)] = 306,
  [SMALL_STATE(13)] = 333,
  [SMALL_STATE(14)] = 358,
  [SMALL_STATE(15)] = 383,
  [SMALL_STATE(16)] = 397,
  [SMALL_STATE(17)] = 411,
  [SMALL_STATE(18)] = 425,
  [SMALL_STATE(19)] = 439,
  [SMALL_STATE(20)] = 453,
  [SMALL_STATE(21)] = 477,
  [SMALL_STATE(22)] = 491,
  [SMALL_STATE(23)] = 512,
  [SMALL_STATE(24)] = 533,
  [SMALL_STATE(25)] = 544,
  [SMALL_STATE(26)] = 555,
  [SMALL_STATE(27)] = 566,
  [SMALL_STATE(28)] = 577,
  [SMALL_STATE(29)] = 588,
  [SMALL_STATE(30)] = 599,
  [SMALL_STATE(31)] = 612,
  [SMALL_STATE(32)] = 623,
  [SMALL_STATE(33)] = 633,
  [SMALL_STATE(34)] = 643,
  [SMALL_STATE(35)] = 653,
  [SMALL_STATE(36)] = 663,
  [SMALL_STATE(37)] = 673,
  [SMALL_STATE(38)] = 683,
  [SMALL_STATE(39)] = 693,
  [SMALL_STATE(40)] = 703,
  [SMALL_STATE(41)] = 713,
  [SMALL_STATE(42)] = 723,
  [SMALL_STATE(43)] = 733,
  [SMALL_STATE(44)] = 743,
  [SMALL_STATE(45)] = 747,
  [SMALL_STATE(46)] = 751,
  [SMALL_STATE(47)] = 755,
  [SMALL_STATE(48)] = 759,
  [SMALL_STATE(49)] = 763,
  [SMALL_STATE(50)] = 767,
  [SMALL_STATE(51)] = 771,
  [SMALL_STATE(52)] = 775,
  [SMALL_STATE(53)] = 779,
  [SMALL_STATE(54)] = 783,
  [SMALL_STATE(55)] = 787,
  [SMALL_STATE(56)] = 791,
  [SMALL_STATE(57)] = 795,
  [SMALL_STATE(58)] = 799,
  [SMALL_STATE(59)] = 803,
  [SMALL_STATE(60)] = 807,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(2),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(8),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(44),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(47),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(18),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(13),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(53),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(5),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(14),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(53),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string_literal, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string_literal, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string_literal, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string_literal, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(30),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(6),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(23),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_end, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_end, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_void, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_void, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 5),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2), SHIFT_REPEAT(42),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [234] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
