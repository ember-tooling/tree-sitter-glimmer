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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(21);
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
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(21);
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
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(21);
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
  [12] = {.lex_state = 12, .external_lex_state = 1},
  [13] = {.lex_state = 12, .external_lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 3, .external_lex_state = 1},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 3, .external_lex_state = 1},
  [23] = {.lex_state = 12, .external_lex_state = 1},
  [24] = {.lex_state = 12, .external_lex_state = 1},
  [25] = {.lex_state = 12, .external_lex_state = 1},
  [26] = {.lex_state = 12, .external_lex_state = 1},
  [27] = {.lex_state = 12, .external_lex_state = 1},
  [28] = {.lex_state = 3, .external_lex_state = 1},
  [29] = {.lex_state = 12, .external_lex_state = 1},
  [30] = {.lex_state = 12, .external_lex_state = 1},
  [31] = {.lex_state = 3, .external_lex_state = 1},
  [32] = {.lex_state = 12, .external_lex_state = 1},
  [33] = {.lex_state = 12, .external_lex_state = 1},
  [34] = {.lex_state = 12, .external_lex_state = 1},
  [35] = {.lex_state = 3, .external_lex_state = 1},
  [36] = {.lex_state = 3, .external_lex_state = 1},
  [37] = {.lex_state = 3, .external_lex_state = 1},
  [38] = {.lex_state = 3, .external_lex_state = 1},
  [39] = {.lex_state = 3, .external_lex_state = 1},
  [40] = {.lex_state = 3, .external_lex_state = 1},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 10},
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
    [sym_element_node_void] = STATE(25),
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
    STATE(18), 2,
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
    STATE(18), 2,
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
    ACTIONS(38), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(42), 2,
      sym_path_expression,
      sym_number_literal,
    STATE(18), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(6), 5,
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
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    ACTIONS(38), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(44), 2,
      sym_path_expression,
      sym_number_literal,
    STATE(18), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(8), 5,
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
    ACTIONS(48), 1,
      sym__mustache_statement_end,
    ACTIONS(30), 2,
      sym_path_expression,
      sym_number_literal,
    ACTIONS(38), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 5,
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
      sym__mustache_statement_end,
    ACTIONS(38), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(52), 2,
      sym_path_expression,
      sym_number_literal,
    STATE(18), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(3), 5,
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
    ACTIONS(30), 2,
      sym_path_expression,
      sym_number_literal,
    ACTIONS(38), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 5,
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
      sym_element_node_void,
    STATE(29), 1,
      sym_element_node_end,
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
    STATE(25), 1,
      sym_element_node_void,
    STATE(30), 1,
      sym_element_node_end,
    ACTIONS(62), 2,
      sym_comment,
      sym_text_node,
    STATE(12), 3,
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
    STATE(25), 1,
      sym_element_node_void,
    ACTIONS(66), 2,
      sym_comment,
      sym_text_node,
    STATE(13), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [306] = 7,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(74), 1,
      anon_sym_LT_SLASH,
    ACTIONS(76), 1,
      sym__mustache_statement_start,
    STATE(9), 1,
      sym_element_node_start,
    STATE(25), 1,
      sym_element_node_void,
    ACTIONS(68), 2,
      sym_comment,
      sym_text_node,
    STATE(12), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [331] = 7,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      sym__mustache_statement_start,
    STATE(9), 1,
      sym_element_node_start,
    STATE(25), 1,
      sym_element_node_void,
    ACTIONS(81), 2,
      sym_comment,
      sym_text_node,
    STATE(13), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [356] = 2,
    ACTIONS(92), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(90), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [370] = 2,
    ACTIONS(96), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(94), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [384] = 2,
    ACTIONS(100), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(98), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [398] = 2,
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
  [412] = 2,
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
  [426] = 2,
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
  [440] = 7,
    ACTIONS(114), 1,
      anon_sym_GT,
    ACTIONS(116), 1,
      anon_sym_SLASH_GT,
    ACTIONS(118), 1,
      sym_attribute_name,
    ACTIONS(120), 1,
      anon_sym_as,
    ACTIONS(122), 1,
      sym_comment,
    STATE(49), 1,
      sym_block_params,
    STATE(22), 2,
      sym_attribute_node,
      aux_sym_element_node_start_repeat1,
  [463] = 6,
    ACTIONS(124), 1,
      sym__mustache_statement_start,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      sym_number_literal,
    STATE(35), 2,
      sym_mustache_statement,
      sym_string_literal,
    STATE(39), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
  [484] = 6,
    ACTIONS(118), 1,
      sym_attribute_name,
    ACTIONS(120), 1,
      anon_sym_as,
    ACTIONS(132), 1,
      anon_sym_GT,
    ACTIONS(134), 1,
      sym_comment,
    STATE(44), 1,
      sym_block_params,
    STATE(28), 2,
      sym_attribute_node,
      aux_sym_element_node_start_repeat1,
  [504] = 2,
    ACTIONS(138), 1,
      anon_sym_LT,
    ACTIONS(136), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [515] = 2,
    ACTIONS(142), 1,
      anon_sym_LT,
    ACTIONS(140), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [526] = 2,
    ACTIONS(146), 1,
      anon_sym_LT,
    ACTIONS(144), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [537] = 2,
    ACTIONS(150), 1,
      anon_sym_LT,
    ACTIONS(148), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [548] = 2,
    ACTIONS(154), 1,
      anon_sym_LT,
    ACTIONS(152), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [559] = 5,
    ACTIONS(156), 1,
      anon_sym_GT,
    ACTIONS(158), 1,
      sym_attribute_name,
    ACTIONS(161), 1,
      anon_sym_as,
    ACTIONS(163), 1,
      sym_comment,
    STATE(28), 2,
      sym_attribute_node,
      aux_sym_element_node_start_repeat1,
  [576] = 2,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(166), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [587] = 2,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(170), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [598] = 3,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(174), 2,
      sym_comment,
      anon_sym_GT,
    ACTIONS(176), 2,
      sym_attribute_name,
      anon_sym_as,
  [610] = 2,
    ACTIONS(182), 1,
      anon_sym_LT,
    ACTIONS(180), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [620] = 2,
    ACTIONS(186), 1,
      anon_sym_LT,
    ACTIONS(184), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [630] = 2,
    ACTIONS(190), 1,
      anon_sym_LT,
    ACTIONS(188), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [640] = 2,
    ACTIONS(192), 2,
      sym_comment,
      anon_sym_GT,
    ACTIONS(194), 2,
      sym_attribute_name,
      anon_sym_as,
  [649] = 2,
    ACTIONS(90), 2,
      sym_comment,
      anon_sym_GT,
    ACTIONS(92), 2,
      sym_attribute_name,
      anon_sym_as,
  [658] = 2,
    ACTIONS(94), 2,
      sym_comment,
      anon_sym_GT,
    ACTIONS(96), 2,
      sym_attribute_name,
      anon_sym_as,
  [667] = 2,
    ACTIONS(136), 2,
      sym_comment,
      anon_sym_GT,
    ACTIONS(138), 2,
      sym_attribute_name,
      anon_sym_as,
  [676] = 2,
    ACTIONS(106), 2,
      sym_comment,
      anon_sym_GT,
    ACTIONS(108), 2,
      sym_attribute_name,
      anon_sym_as,
  [685] = 2,
    ACTIONS(140), 2,
      sym_comment,
      anon_sym_GT,
    ACTIONS(142), 2,
      sym_attribute_name,
      anon_sym_as,
  [694] = 3,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    ACTIONS(198), 1,
      sym_path_expression,
    STATE(43), 1,
      aux_sym_block_params_repeat1,
  [704] = 3,
    ACTIONS(200), 1,
      anon_sym_PIPE,
    ACTIONS(202), 1,
      sym_path_expression,
    STATE(42), 1,
      aux_sym_block_params_repeat1,
  [714] = 3,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      sym_path_expression,
    STATE(42), 1,
      aux_sym_block_params_repeat1,
  [724] = 1,
    ACTIONS(209), 1,
      anon_sym_GT,
  [728] = 1,
    ACTIONS(211), 1,
      anon_sym_GT,
  [732] = 1,
    ACTIONS(213), 1,
      anon_sym_GT,
  [736] = 1,
    ACTIONS(215), 1,
      anon_sym_PIPE,
  [740] = 1,
    ACTIONS(217), 1,
      anon_sym_GT,
  [744] = 1,
    ACTIONS(132), 1,
      anon_sym_GT,
  [748] = 1,
    ACTIONS(219), 1,
      aux_sym__single_quote_string_literal_token1,
  [752] = 1,
    ACTIONS(221), 1,
      aux_sym__double_quote_string_literal_token1,
  [756] = 1,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
  [760] = 1,
    ACTIONS(225), 1,
      sym_tag_name,
  [764] = 1,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
  [768] = 1,
    ACTIONS(229), 1,
      sym_tag_name,
  [772] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
  [776] = 1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
  [780] = 1,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
  [784] = 1,
    ACTIONS(237), 1,
      aux_sym__single_quote_string_literal_token1,
  [788] = 1,
    ACTIONS(239), 1,
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
  [SMALL_STATE(13)] = 331,
  [SMALL_STATE(14)] = 356,
  [SMALL_STATE(15)] = 370,
  [SMALL_STATE(16)] = 384,
  [SMALL_STATE(17)] = 398,
  [SMALL_STATE(18)] = 412,
  [SMALL_STATE(19)] = 426,
  [SMALL_STATE(20)] = 440,
  [SMALL_STATE(21)] = 463,
  [SMALL_STATE(22)] = 484,
  [SMALL_STATE(23)] = 504,
  [SMALL_STATE(24)] = 515,
  [SMALL_STATE(25)] = 526,
  [SMALL_STATE(26)] = 537,
  [SMALL_STATE(27)] = 548,
  [SMALL_STATE(28)] = 559,
  [SMALL_STATE(29)] = 576,
  [SMALL_STATE(30)] = 587,
  [SMALL_STATE(31)] = 598,
  [SMALL_STATE(32)] = 610,
  [SMALL_STATE(33)] = 620,
  [SMALL_STATE(34)] = 630,
  [SMALL_STATE(35)] = 640,
  [SMALL_STATE(36)] = 649,
  [SMALL_STATE(37)] = 658,
  [SMALL_STATE(38)] = 667,
  [SMALL_STATE(39)] = 676,
  [SMALL_STATE(40)] = 685,
  [SMALL_STATE(41)] = 694,
  [SMALL_STATE(42)] = 704,
  [SMALL_STATE(43)] = 714,
  [SMALL_STATE(44)] = 724,
  [SMALL_STATE(45)] = 728,
  [SMALL_STATE(46)] = 732,
  [SMALL_STATE(47)] = 736,
  [SMALL_STATE(48)] = 740,
  [SMALL_STATE(49)] = 744,
  [SMALL_STATE(50)] = 748,
  [SMALL_STATE(51)] = 752,
  [SMALL_STATE(52)] = 756,
  [SMALL_STATE(53)] = 760,
  [SMALL_STATE(54)] = 764,
  [SMALL_STATE(55)] = 768,
  [SMALL_STATE(56)] = 772,
  [SMALL_STATE(57)] = 776,
  [SMALL_STATE(58)] = 780,
  [SMALL_STATE(59)] = 784,
  [SMALL_STATE(60)] = 788,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(2),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(5),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(50),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(51),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(17),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(12),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(55),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(7),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(13),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(55),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(7),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string_literal, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string_literal, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string_literal, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string_literal, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_end, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_end, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_void, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_void, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(31),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(28),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 5),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2), SHIFT_REPEAT(42),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [231] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
