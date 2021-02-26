#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
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
  anon_sym_SQUOTE = 14,
  aux_sym__single_quote_string_literal_token1 = 15,
  anon_sym_DQUOTE = 16,
  aux_sym__double_quote_string_literal_token1 = 17,
  sym_number_literal = 18,
  anon_sym_true = 19,
  anon_sym_false = 20,
  sym_template = 21,
  sym_element_node_start = 22,
  sym_element_node_end = 23,
  sym_element_node_void = 24,
  sym_element_node = 25,
  sym_attribute_node = 26,
  sym_block_params = 27,
  sym__value = 28,
  sym_mustache_statement = 29,
  sym_string_literal = 30,
  sym__single_quote_string_literal = 31,
  sym__double_quote_string_literal = 32,
  sym_boolean_literal = 33,
  aux_sym_template_repeat1 = 34,
  aux_sym_element_node_start_repeat1 = 35,
  aux_sym_element_node_repeat1 = 36,
  aux_sym_block_params_repeat1 = 37,
  aux_sym_mustache_statement_repeat1 = 38,
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
  [anon_sym_SQUOTE] = "'",
  [aux_sym__single_quote_string_literal_token1] = "_single_quote_string_literal_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_literal_token1] = "_double_quote_string_literal_token1",
  [sym_number_literal] = "number_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_template] = "template",
  [sym_element_node_start] = "element_node_start",
  [sym_element_node_end] = "element_node_end",
  [sym_element_node_void] = "element_node_void",
  [sym_element_node] = "element_node",
  [sym_attribute_node] = "attribute_node",
  [sym_block_params] = "block_params",
  [sym__value] = "_value",
  [sym_mustache_statement] = "mustache_statement",
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
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__single_quote_string_literal_token1] = aux_sym__single_quote_string_literal_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_literal_token1] = aux_sym__double_quote_string_literal_token1,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_template] = sym_template,
  [sym_element_node_start] = sym_element_node_start,
  [sym_element_node_end] = sym_element_node_end,
  [sym_element_node_void] = sym_element_node_void,
  [sym_element_node] = sym_element_node,
  [sym_attribute_node] = sym_attribute_node,
  [sym_block_params] = sym_block_params,
  [sym__value] = sym__value,
  [sym_mustache_statement] = sym_mustache_statement,
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
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(38);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(38);
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
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(31);
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
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
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
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 46:
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
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 8},
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
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(52),
    [sym_element_node_start] = STATE(7),
    [sym_element_node_void] = STATE(22),
    [sym_element_node] = STATE(9),
    [sym_mustache_statement] = STATE(9),
    [aux_sym_template_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text_node] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [sym__mustache_statement_start] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      sym__mustache_statement_end,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 2,
      sym_path_expression,
      sym_number_literal,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(6), 4,
      sym__value,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [28] = 7,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym__mustache_statement_end,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_path_expression,
      sym_number_literal,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(5), 4,
      sym__value,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [56] = 7,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym__mustache_statement_end,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      sym_path_expression,
      sym_number_literal,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 4,
      sym__value,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [84] = 7,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym__mustache_statement_end,
    ACTIONS(13), 2,
      sym_path_expression,
      sym_number_literal,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(6), 4,
      sym__value,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [112] = 7,
    ACTIONS(31), 1,
      sym__mustache_statement_end,
    ACTIONS(36), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 2,
      sym_path_expression,
      sym_number_literal,
    ACTIONS(42), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(6), 4,
      sym__value,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [140] = 8,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(45), 1,
      sym_text_node,
    ACTIONS(47), 1,
      anon_sym_LT,
    ACTIONS(49), 1,
      anon_sym_LT_SLASH,
    STATE(7), 1,
      sym_element_node_start,
    STATE(22), 1,
      sym_element_node_void,
    STATE(25), 1,
      sym_element_node_end,
    STATE(8), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [167] = 8,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(47), 1,
      anon_sym_LT,
    ACTIONS(49), 1,
      anon_sym_LT_SLASH,
    ACTIONS(51), 1,
      sym_text_node,
    STATE(7), 1,
      sym_element_node_start,
    STATE(22), 1,
      sym_element_node_void,
    STATE(26), 1,
      sym_element_node_end,
    STATE(10), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [194] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_text_node,
    STATE(7), 1,
      sym_element_node_start,
    STATE(22), 1,
      sym_element_node_void,
    STATE(11), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [218] = 7,
    ACTIONS(57), 1,
      sym_text_node,
    ACTIONS(60), 1,
      anon_sym_LT,
    ACTIONS(63), 1,
      anon_sym_LT_SLASH,
    ACTIONS(65), 1,
      sym__mustache_statement_start,
    STATE(7), 1,
      sym_element_node_start,
    STATE(22), 1,
      sym_element_node_void,
    STATE(10), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [242] = 7,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      sym_text_node,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(76), 1,
      sym__mustache_statement_start,
    STATE(7), 1,
      sym_element_node_start,
    STATE(22), 1,
      sym_element_node_void,
    STATE(11), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [266] = 6,
    ACTIONS(79), 1,
      sym__mustache_statement_start,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_number_literal,
    STATE(31), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(32), 2,
      sym_mustache_statement,
      sym_string_literal,
  [287] = 2,
    ACTIONS(87), 3,
      sym__mustache_statement_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(89), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [299] = 6,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_SLASH_GT,
    ACTIONS(95), 1,
      sym_attribute_name,
    ACTIONS(97), 1,
      anon_sym_as,
    STATE(51), 1,
      sym_block_params,
    STATE(18), 2,
      sym_attribute_node,
      aux_sym_element_node_start_repeat1,
  [319] = 2,
    ACTIONS(99), 3,
      sym__mustache_statement_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(101), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [331] = 2,
    ACTIONS(103), 3,
      sym__mustache_statement_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(105), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [343] = 2,
    ACTIONS(107), 3,
      sym__mustache_statement_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(109), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [355] = 5,
    ACTIONS(95), 1,
      sym_attribute_name,
    ACTIONS(97), 1,
      anon_sym_as,
    ACTIONS(111), 1,
      anon_sym_GT,
    STATE(49), 1,
      sym_block_params,
    STATE(20), 2,
      sym_attribute_node,
      aux_sym_element_node_start_repeat1,
  [372] = 2,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [382] = 4,
    ACTIONS(117), 1,
      anon_sym_GT,
    ACTIONS(119), 1,
      sym_attribute_name,
    ACTIONS(122), 1,
      anon_sym_as,
    STATE(20), 2,
      sym_attribute_node,
      aux_sym_element_node_start_repeat1,
  [396] = 2,
    ACTIONS(126), 1,
      anon_sym_LT,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [406] = 2,
    ACTIONS(130), 1,
      anon_sym_LT,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [416] = 2,
    ACTIONS(134), 1,
      anon_sym_LT,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [426] = 2,
    ACTIONS(138), 1,
      anon_sym_LT,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [436] = 2,
    ACTIONS(142), 1,
      anon_sym_LT,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [446] = 2,
    ACTIONS(146), 1,
      anon_sym_LT,
    ACTIONS(144), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [456] = 3,
    ACTIONS(148), 1,
      anon_sym_GT,
    ACTIONS(152), 1,
      anon_sym_EQ,
    ACTIONS(150), 2,
      sym_attribute_name,
      anon_sym_as,
  [467] = 2,
    ACTIONS(156), 1,
      anon_sym_LT,
    ACTIONS(154), 3,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [476] = 2,
    ACTIONS(160), 1,
      anon_sym_LT,
    ACTIONS(158), 3,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [485] = 2,
    ACTIONS(164), 1,
      anon_sym_LT,
    ACTIONS(162), 3,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [494] = 2,
    ACTIONS(107), 1,
      anon_sym_GT,
    ACTIONS(109), 2,
      sym_attribute_name,
      anon_sym_as,
  [502] = 2,
    ACTIONS(166), 1,
      anon_sym_GT,
    ACTIONS(168), 2,
      sym_attribute_name,
      anon_sym_as,
  [510] = 2,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 2,
      sym_attribute_name,
      anon_sym_as,
  [518] = 2,
    ACTIONS(99), 1,
      anon_sym_GT,
    ACTIONS(101), 2,
      sym_attribute_name,
      anon_sym_as,
  [526] = 3,
    ACTIONS(170), 1,
      anon_sym_PIPE,
    ACTIONS(172), 1,
      sym_path_expression,
    STATE(39), 1,
      aux_sym_block_params_repeat1,
  [536] = 2,
    ACTIONS(113), 1,
      anon_sym_GT,
    ACTIONS(115), 2,
      sym_attribute_name,
      anon_sym_as,
  [544] = 2,
    ACTIONS(136), 1,
      anon_sym_GT,
    ACTIONS(138), 2,
      sym_attribute_name,
      anon_sym_as,
  [552] = 3,
    ACTIONS(174), 1,
      anon_sym_PIPE,
    ACTIONS(176), 1,
      sym_path_expression,
    STATE(38), 1,
      aux_sym_block_params_repeat1,
  [562] = 3,
    ACTIONS(179), 1,
      anon_sym_PIPE,
    ACTIONS(181), 1,
      sym_path_expression,
    STATE(38), 1,
      aux_sym_block_params_repeat1,
  [572] = 1,
    ACTIONS(183), 1,
      anon_sym_PIPE,
  [576] = 1,
    ACTIONS(185), 1,
      anon_sym_GT,
  [580] = 1,
    ACTIONS(187), 1,
      sym_tag_name,
  [584] = 1,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
  [588] = 1,
    ACTIONS(191), 1,
      anon_sym_GT,
  [592] = 1,
    ACTIONS(193), 1,
      sym_tag_name,
  [596] = 1,
    ACTIONS(195), 1,
      anon_sym_GT,
  [600] = 1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
  [604] = 1,
    ACTIONS(199), 1,
      aux_sym__single_quote_string_literal_token1,
  [608] = 1,
    ACTIONS(201), 1,
      anon_sym_GT,
  [612] = 1,
    ACTIONS(203), 1,
      aux_sym__double_quote_string_literal_token1,
  [616] = 1,
    ACTIONS(111), 1,
      anon_sym_GT,
  [620] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
  [624] = 1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
  [628] = 1,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
  [632] = 1,
    ACTIONS(211), 1,
      aux_sym__single_quote_string_literal_token1,
  [636] = 1,
    ACTIONS(213), 1,
      aux_sym__double_quote_string_literal_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 140,
  [SMALL_STATE(8)] = 167,
  [SMALL_STATE(9)] = 194,
  [SMALL_STATE(10)] = 218,
  [SMALL_STATE(11)] = 242,
  [SMALL_STATE(12)] = 266,
  [SMALL_STATE(13)] = 287,
  [SMALL_STATE(14)] = 299,
  [SMALL_STATE(15)] = 319,
  [SMALL_STATE(16)] = 331,
  [SMALL_STATE(17)] = 343,
  [SMALL_STATE(18)] = 355,
  [SMALL_STATE(19)] = 372,
  [SMALL_STATE(20)] = 382,
  [SMALL_STATE(21)] = 396,
  [SMALL_STATE(22)] = 406,
  [SMALL_STATE(23)] = 416,
  [SMALL_STATE(24)] = 426,
  [SMALL_STATE(25)] = 436,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 456,
  [SMALL_STATE(28)] = 467,
  [SMALL_STATE(29)] = 476,
  [SMALL_STATE(30)] = 485,
  [SMALL_STATE(31)] = 494,
  [SMALL_STATE(32)] = 502,
  [SMALL_STATE(33)] = 510,
  [SMALL_STATE(34)] = 518,
  [SMALL_STATE(35)] = 526,
  [SMALL_STATE(36)] = 536,
  [SMALL_STATE(37)] = 544,
  [SMALL_STATE(38)] = 552,
  [SMALL_STATE(39)] = 562,
  [SMALL_STATE(40)] = 572,
  [SMALL_STATE(41)] = 576,
  [SMALL_STATE(42)] = 580,
  [SMALL_STATE(43)] = 584,
  [SMALL_STATE(44)] = 588,
  [SMALL_STATE(45)] = 592,
  [SMALL_STATE(46)] = 596,
  [SMALL_STATE(47)] = 600,
  [SMALL_STATE(48)] = 604,
  [SMALL_STATE(49)] = 608,
  [SMALL_STATE(50)] = 612,
  [SMALL_STATE(51)] = 616,
  [SMALL_STATE(52)] = 620,
  [SMALL_STATE(53)] = 624,
  [SMALL_STATE(54)] = 628,
  [SMALL_STATE(55)] = 632,
  [SMALL_STATE(56)] = 636,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(6),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(48),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(50),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(16),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(10),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(45),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(11),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(45),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string_literal, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string_literal, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string_literal, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string_literal, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(27),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_void, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_void, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_end, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_end, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 5),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2), SHIFT_REPEAT(38),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [205] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
};

#ifdef __cplusplus
extern "C" {
#endif
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
