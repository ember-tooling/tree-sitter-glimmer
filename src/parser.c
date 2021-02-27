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
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 12, .external_lex_state = 1},
  [23] = {.lex_state = 12, .external_lex_state = 1},
  [24] = {.lex_state = 12, .external_lex_state = 1},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 12, .external_lex_state = 1},
  [27] = {.lex_state = 12, .external_lex_state = 1},
  [28] = {.lex_state = 12, .external_lex_state = 1},
  [29] = {.lex_state = 12, .external_lex_state = 1},
  [30] = {.lex_state = 12, .external_lex_state = 1},
  [31] = {.lex_state = 12, .external_lex_state = 1},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 12, .external_lex_state = 1},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 0},
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
    [sym_element_node_void] = STATE(23),
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
    STATE(23), 1,
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
    STATE(23), 1,
      sym_element_node_void,
    STATE(28), 1,
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
    STATE(23), 1,
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
    STATE(23), 1,
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
    STATE(23), 1,
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
  [440] = 6,
    ACTIONS(114), 1,
      sym__mustache_statement_start,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      sym_number_literal,
    STATE(40), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(42), 2,
      sym_mustache_statement,
      sym_string_literal,
  [461] = 6,
    ACTIONS(122), 1,
      anon_sym_GT,
    ACTIONS(124), 1,
      anon_sym_SLASH_GT,
    ACTIONS(126), 1,
      sym_attribute_name,
    ACTIONS(128), 1,
      anon_sym_as,
    STATE(55), 1,
      sym_block_params,
    STATE(25), 2,
      sym_attribute_node,
      aux_sym_element_node_start_repeat1,
  [481] = 2,
    ACTIONS(132), 1,
      anon_sym_LT,
    ACTIONS(130), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [492] = 2,
    ACTIONS(136), 1,
      anon_sym_LT,
    ACTIONS(134), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [503] = 2,
    ACTIONS(140), 1,
      anon_sym_LT,
    ACTIONS(138), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [514] = 5,
    ACTIONS(126), 1,
      sym_attribute_name,
    ACTIONS(128), 1,
      anon_sym_as,
    ACTIONS(142), 1,
      anon_sym_GT,
    STATE(50), 1,
      sym_block_params,
    STATE(32), 2,
      sym_attribute_node,
      aux_sym_element_node_start_repeat1,
  [531] = 2,
    ACTIONS(146), 1,
      anon_sym_LT,
    ACTIONS(144), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [542] = 2,
    ACTIONS(150), 1,
      anon_sym_LT,
    ACTIONS(148), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [553] = 2,
    ACTIONS(154), 1,
      anon_sym_LT,
    ACTIONS(152), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [564] = 2,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(156), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [575] = 2,
    ACTIONS(162), 1,
      anon_sym_LT,
    ACTIONS(160), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [585] = 2,
    ACTIONS(166), 1,
      anon_sym_LT,
    ACTIONS(164), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [595] = 4,
    ACTIONS(168), 1,
      anon_sym_GT,
    ACTIONS(170), 1,
      sym_attribute_name,
    ACTIONS(173), 1,
      anon_sym_as,
    STATE(32), 2,
      sym_attribute_node,
      aux_sym_element_node_start_repeat1,
  [609] = 2,
    ACTIONS(177), 1,
      anon_sym_LT,
    ACTIONS(175), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [619] = 3,
    ACTIONS(179), 1,
      anon_sym_GT,
    ACTIONS(183), 1,
      anon_sym_EQ,
    ACTIONS(181), 2,
      sym_attribute_name,
      anon_sym_as,
  [630] = 2,
    ACTIONS(94), 1,
      anon_sym_GT,
    ACTIONS(96), 2,
      sym_attribute_name,
      anon_sym_as,
  [638] = 3,
    ACTIONS(185), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      sym_path_expression,
    STATE(43), 1,
      aux_sym_block_params_repeat1,
  [648] = 2,
    ACTIONS(144), 1,
      anon_sym_GT,
    ACTIONS(146), 2,
      sym_attribute_name,
      anon_sym_as,
  [656] = 3,
    ACTIONS(189), 1,
      anon_sym_PIPE,
    ACTIONS(191), 1,
      sym_path_expression,
    STATE(38), 1,
      aux_sym_block_params_repeat1,
  [666] = 2,
    ACTIONS(90), 1,
      anon_sym_GT,
    ACTIONS(92), 2,
      sym_attribute_name,
      anon_sym_as,
  [674] = 2,
    ACTIONS(106), 1,
      anon_sym_GT,
    ACTIONS(108), 2,
      sym_attribute_name,
      anon_sym_as,
  [682] = 2,
    ACTIONS(130), 1,
      anon_sym_GT,
    ACTIONS(132), 2,
      sym_attribute_name,
      anon_sym_as,
  [690] = 2,
    ACTIONS(194), 1,
      anon_sym_GT,
    ACTIONS(196), 2,
      sym_attribute_name,
      anon_sym_as,
  [698] = 3,
    ACTIONS(198), 1,
      anon_sym_PIPE,
    ACTIONS(200), 1,
      sym_path_expression,
    STATE(38), 1,
      aux_sym_block_params_repeat1,
  [708] = 1,
    ACTIONS(202), 1,
      anon_sym_GT,
  [712] = 1,
    ACTIONS(204), 1,
      anon_sym_GT,
  [716] = 1,
    ACTIONS(206), 1,
      aux_sym__single_quote_string_literal_token1,
  [720] = 1,
    ACTIONS(208), 1,
      aux_sym__double_quote_string_literal_token1,
  [724] = 1,
    ACTIONS(210), 1,
      anon_sym_GT,
  [728] = 1,
    ACTIONS(212), 1,
      anon_sym_PIPE,
  [732] = 1,
    ACTIONS(214), 1,
      anon_sym_GT,
  [736] = 1,
    ACTIONS(216), 1,
      sym_tag_name,
  [740] = 1,
    ACTIONS(218), 1,
      sym_tag_name,
  [744] = 1,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
  [748] = 1,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
  [752] = 1,
    ACTIONS(142), 1,
      anon_sym_GT,
  [756] = 1,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
  [760] = 1,
    ACTIONS(226), 1,
      anon_sym_SQUOTE,
  [764] = 1,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
  [768] = 1,
    ACTIONS(230), 1,
      aux_sym__single_quote_string_literal_token1,
  [772] = 1,
    ACTIONS(232), 1,
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
  [SMALL_STATE(21)] = 461,
  [SMALL_STATE(22)] = 481,
  [SMALL_STATE(23)] = 492,
  [SMALL_STATE(24)] = 503,
  [SMALL_STATE(25)] = 514,
  [SMALL_STATE(26)] = 531,
  [SMALL_STATE(27)] = 542,
  [SMALL_STATE(28)] = 553,
  [SMALL_STATE(29)] = 564,
  [SMALL_STATE(30)] = 575,
  [SMALL_STATE(31)] = 585,
  [SMALL_STATE(32)] = 595,
  [SMALL_STATE(33)] = 609,
  [SMALL_STATE(34)] = 619,
  [SMALL_STATE(35)] = 630,
  [SMALL_STATE(36)] = 638,
  [SMALL_STATE(37)] = 648,
  [SMALL_STATE(38)] = 656,
  [SMALL_STATE(39)] = 666,
  [SMALL_STATE(40)] = 674,
  [SMALL_STATE(41)] = 682,
  [SMALL_STATE(42)] = 690,
  [SMALL_STATE(43)] = 698,
  [SMALL_STATE(44)] = 708,
  [SMALL_STATE(45)] = 712,
  [SMALL_STATE(46)] = 716,
  [SMALL_STATE(47)] = 720,
  [SMALL_STATE(48)] = 724,
  [SMALL_STATE(49)] = 728,
  [SMALL_STATE(50)] = 732,
  [SMALL_STATE(51)] = 736,
  [SMALL_STATE(52)] = 740,
  [SMALL_STATE(53)] = 744,
  [SMALL_STATE(54)] = 748,
  [SMALL_STATE(55)] = 752,
  [SMALL_STATE(56)] = 756,
  [SMALL_STATE(57)] = 760,
  [SMALL_STATE(58)] = 764,
  [SMALL_STATE(59)] = 768,
  [SMALL_STATE(60)] = 772,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(2),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(5),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(46),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(47),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(17),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(12),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(52),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(7),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(13),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(52),
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
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_end, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_end, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_void, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_void, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(34),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2), SHIFT_REPEAT(38),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [224] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
