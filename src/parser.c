#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_text_node = 1,
  aux_sym_tag_name_token1 = 2,
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
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_SQUOTE = 15,
  aux_sym__single_quote_string_literal_token1 = 16,
  anon_sym_DQUOTE = 17,
  aux_sym__double_quote_string_literal_token1 = 18,
  sym_number_literal = 19,
  anon_sym_true = 20,
  anon_sym_false = 21,
  sym_comment = 22,
  sym_template = 23,
  sym_tag_name = 24,
  sym_element_node_start = 25,
  sym_element_node_end = 26,
  sym_element_node_void = 27,
  sym_element_node = 28,
  sym_attribute_node = 29,
  sym_block_params = 30,
  sym_path_expression = 31,
  sym__value = 32,
  sym_mustache_statement = 33,
  sym_sub_expression = 34,
  sym_string_literal = 35,
  sym__single_quote_string_literal = 36,
  sym__double_quote_string_literal = 37,
  sym_boolean_literal = 38,
  aux_sym_template_repeat1 = 39,
  aux_sym_element_node_start_repeat1 = 40,
  aux_sym_element_node_repeat1 = 41,
  aux_sym_block_params_repeat1 = 42,
  aux_sym_mustache_statement_repeat1 = 43,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text_node] = "text_node",
  [aux_sym_tag_name_token1] = "tag_name_token1",
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
  [sym_tag_name] = "tag_name",
  [sym_element_node_start] = "element_node_start",
  [sym_element_node_end] = "element_node_end",
  [sym_element_node_void] = "element_node_void",
  [sym_element_node] = "element_node",
  [sym_attribute_node] = "attribute_node",
  [sym_block_params] = "block_params",
  [sym_path_expression] = "path_expression",
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
  [aux_sym_tag_name_token1] = aux_sym_tag_name_token1,
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
  [sym_tag_name] = sym_tag_name,
  [sym_element_node_start] = sym_element_node_start,
  [sym_element_node_end] = sym_element_node_end,
  [sym_element_node_void] = sym_element_node_void,
  [sym_element_node] = sym_element_node,
  [sym_attribute_node] = sym_attribute_node,
  [sym_block_params] = sym_block_params,
  [sym_path_expression] = sym_path_expression,
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
  [aux_sym_tag_name_token1] = {
    .visible = false,
    .named = false,
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
  [sym_tag_name] = {
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
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '}') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_text_node);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(29);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_as);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__mustache_statement_start);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__mustache_statement_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 10, .external_lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 10, .external_lex_state = 1},
  [10] = {.lex_state = 10, .external_lex_state = 1},
  [11] = {.lex_state = 10, .external_lex_state = 1},
  [12] = {.lex_state = 2, .external_lex_state = 1},
  [13] = {.lex_state = 10, .external_lex_state = 1},
  [14] = {.lex_state = 10, .external_lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2, .external_lex_state = 1},
  [23] = {.lex_state = 2, .external_lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 10, .external_lex_state = 1},
  [26] = {.lex_state = 2, .external_lex_state = 1},
  [27] = {.lex_state = 2, .external_lex_state = 1},
  [28] = {.lex_state = 10, .external_lex_state = 1},
  [29] = {.lex_state = 10, .external_lex_state = 1},
  [30] = {.lex_state = 10, .external_lex_state = 1},
  [31] = {.lex_state = 10, .external_lex_state = 1},
  [32] = {.lex_state = 10, .external_lex_state = 1},
  [33] = {.lex_state = 10, .external_lex_state = 1},
  [34] = {.lex_state = 2, .external_lex_state = 1},
  [35] = {.lex_state = 10, .external_lex_state = 1},
  [36] = {.lex_state = 2, .external_lex_state = 1},
  [37] = {.lex_state = 2, .external_lex_state = 1},
  [38] = {.lex_state = 2, .external_lex_state = 1},
  [39] = {.lex_state = 10, .external_lex_state = 1},
  [40] = {.lex_state = 2, .external_lex_state = 1},
  [41] = {.lex_state = 2, .external_lex_state = 1},
  [42] = {.lex_state = 10, .external_lex_state = 1},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 7},
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
    [aux_sym_tag_name_token1] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__mustache_statement_start] = ACTIONS(1),
    [sym__mustache_statement_end] = ACTIONS(1),
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
    [sym_template] = STATE(60),
    [sym_element_node_start] = STATE(9),
    [sym_element_node_void] = STATE(28),
    [sym_element_node] = STATE(14),
    [sym_mustache_statement] = STATE(14),
    [aux_sym_template_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text_node] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [sym__mustache_statement_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      aux_sym_tag_name_token1,
    ACTIONS(16), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(22), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(14), 2,
      sym__mustache_statement_end,
      anon_sym_RPAREN,
    ACTIONS(28), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [36] = 9,
    ACTIONS(31), 1,
      aux_sym_tag_name_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(7), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [71] = 9,
    ACTIONS(31), 1,
      aux_sym_tag_name_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__mustache_statement_end,
    ACTIONS(47), 1,
      sym_number_literal,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [106] = 9,
    ACTIONS(31), 1,
      aux_sym_tag_name_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__mustache_statement_end,
    ACTIONS(51), 1,
      sym_number_literal,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(8), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [141] = 9,
    ACTIONS(31), 1,
      aux_sym_tag_name_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym__mustache_statement_end,
    ACTIONS(55), 1,
      sym_number_literal,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(4), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [176] = 9,
    ACTIONS(31), 1,
      aux_sym_tag_name_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_number_literal,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [211] = 9,
    ACTIONS(31), 1,
      aux_sym_tag_name_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_number_literal,
    ACTIONS(59), 1,
      sym__mustache_statement_end,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [246] = 8,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(65), 1,
      anon_sym_LT_SLASH,
    STATE(9), 1,
      sym_element_node_start,
    STATE(28), 1,
      sym_element_node_void,
    STATE(32), 1,
      sym_element_node_end,
    ACTIONS(61), 2,
      sym_comment,
      sym_text_node,
    STATE(10), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [274] = 8,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(65), 1,
      anon_sym_LT_SLASH,
    STATE(9), 1,
      sym_element_node_start,
    STATE(28), 1,
      sym_element_node_void,
    STATE(33), 1,
      sym_element_node_end,
    ACTIONS(67), 2,
      sym_comment,
      sym_text_node,
    STATE(11), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [302] = 7,
    ACTIONS(72), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      anon_sym_LT_SLASH,
    ACTIONS(77), 1,
      sym__mustache_statement_start,
    STATE(9), 1,
      sym_element_node_start,
    STATE(28), 1,
      sym_element_node_void,
    ACTIONS(69), 2,
      sym_comment,
      sym_text_node,
    STATE(11), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [327] = 8,
    ACTIONS(80), 1,
      anon_sym_GT,
    ACTIONS(82), 1,
      anon_sym_SLASH_GT,
    ACTIONS(84), 1,
      sym_attribute_name,
    ACTIONS(86), 1,
      anon_sym_as,
    ACTIONS(88), 1,
      sym__mustache_statement_start,
    ACTIONS(90), 1,
      sym_comment,
    STATE(58), 1,
      sym_block_params,
    STATE(22), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [354] = 7,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(100), 1,
      sym__mustache_statement_start,
    STATE(9), 1,
      sym_element_node_start,
    STATE(28), 1,
      sym_element_node_void,
    ACTIONS(94), 2,
      sym_comment,
      sym_text_node,
    STATE(13), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [379] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_element_node_start,
    STATE(28), 1,
      sym_element_node_void,
    ACTIONS(105), 2,
      sym_comment,
      sym_text_node,
    STATE(13), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [404] = 2,
    ACTIONS(107), 4,
      aux_sym_tag_name_token1,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(109), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [418] = 2,
    ACTIONS(111), 4,
      aux_sym_tag_name_token1,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [432] = 2,
    ACTIONS(115), 4,
      aux_sym_tag_name_token1,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(117), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [446] = 2,
    ACTIONS(119), 4,
      aux_sym_tag_name_token1,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(121), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [460] = 2,
    ACTIONS(123), 4,
      aux_sym_tag_name_token1,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(125), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [474] = 2,
    ACTIONS(127), 4,
      aux_sym_tag_name_token1,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [488] = 2,
    ACTIONS(131), 4,
      aux_sym_tag_name_token1,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(133), 5,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [502] = 7,
    ACTIONS(84), 1,
      sym_attribute_name,
    ACTIONS(86), 1,
      anon_sym_as,
    ACTIONS(88), 1,
      sym__mustache_statement_start,
    ACTIONS(135), 1,
      anon_sym_GT,
    ACTIONS(137), 1,
      sym_comment,
    STATE(56), 1,
      sym_block_params,
    STATE(23), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [526] = 6,
    ACTIONS(139), 1,
      anon_sym_GT,
    ACTIONS(141), 1,
      sym_attribute_name,
    ACTIONS(144), 1,
      anon_sym_as,
    ACTIONS(146), 1,
      sym__mustache_statement_start,
    ACTIONS(149), 1,
      sym_comment,
    STATE(23), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [547] = 6,
    ACTIONS(88), 1,
      sym__mustache_statement_start,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_number_literal,
    STATE(34), 2,
      sym_mustache_statement,
      sym_string_literal,
    STATE(40), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
  [568] = 2,
    ACTIONS(160), 1,
      anon_sym_LT,
    ACTIONS(158), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [579] = 2,
    ACTIONS(164), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(162), 4,
      sym_comment,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym__mustache_statement_start,
  [590] = 3,
    ACTIONS(170), 1,
      anon_sym_EQ,
    ACTIONS(168), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(166), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [603] = 2,
    ACTIONS(174), 1,
      anon_sym_LT,
    ACTIONS(172), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [614] = 2,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(176), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [625] = 2,
    ACTIONS(182), 1,
      anon_sym_LT,
    ACTIONS(180), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [636] = 2,
    ACTIONS(186), 1,
      anon_sym_LT,
    ACTIONS(184), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [647] = 2,
    ACTIONS(190), 1,
      anon_sym_LT,
    ACTIONS(188), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [658] = 2,
    ACTIONS(194), 1,
      anon_sym_LT,
    ACTIONS(192), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [669] = 2,
    ACTIONS(198), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(196), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [679] = 2,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(200), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [689] = 2,
    ACTIONS(119), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(121), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [699] = 2,
    ACTIONS(131), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(133), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [709] = 2,
    ACTIONS(160), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(158), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [719] = 2,
    ACTIONS(206), 1,
      anon_sym_LT,
    ACTIONS(204), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [729] = 2,
    ACTIONS(115), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(117), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [739] = 2,
    ACTIONS(186), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(184), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [749] = 2,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(208), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [759] = 3,
    ACTIONS(212), 1,
      aux_sym_tag_name_token1,
    ACTIONS(214), 1,
      anon_sym_PIPE,
    STATE(45), 2,
      sym_path_expression,
      aux_sym_block_params_repeat1,
  [770] = 3,
    ACTIONS(212), 1,
      aux_sym_tag_name_token1,
    ACTIONS(216), 1,
      anon_sym_PIPE,
    STATE(43), 2,
      sym_path_expression,
      aux_sym_block_params_repeat1,
  [781] = 3,
    ACTIONS(218), 1,
      aux_sym_tag_name_token1,
    ACTIONS(221), 1,
      anon_sym_PIPE,
    STATE(45), 2,
      sym_path_expression,
      aux_sym_block_params_repeat1,
  [792] = 2,
    ACTIONS(223), 1,
      aux_sym_tag_name_token1,
    STATE(12), 1,
      sym_tag_name,
  [799] = 2,
    ACTIONS(225), 1,
      aux_sym_tag_name_token1,
    STATE(50), 1,
      sym_tag_name,
  [806] = 1,
    ACTIONS(129), 2,
      aux_sym_tag_name_token1,
      anon_sym_PIPE,
  [811] = 1,
    ACTIONS(227), 1,
      aux_sym__single_quote_string_literal_token1,
  [815] = 1,
    ACTIONS(229), 1,
      anon_sym_GT,
  [819] = 1,
    ACTIONS(231), 1,
      anon_sym_GT,
  [823] = 1,
    ACTIONS(162), 1,
      anon_sym_GT,
  [827] = 1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
  [831] = 1,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
  [835] = 1,
    ACTIONS(237), 1,
      aux_sym__double_quote_string_literal_token1,
  [839] = 1,
    ACTIONS(239), 1,
      anon_sym_GT,
  [843] = 1,
    ACTIONS(241), 1,
      anon_sym_GT,
  [847] = 1,
    ACTIONS(135), 1,
      anon_sym_GT,
  [851] = 1,
    ACTIONS(243), 1,
      anon_sym_PIPE,
  [855] = 1,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
  [859] = 1,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
  [863] = 1,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
  [867] = 1,
    ACTIONS(251), 1,
      aux_sym__single_quote_string_literal_token1,
  [871] = 1,
    ACTIONS(253), 1,
      aux_sym__double_quote_string_literal_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 71,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 141,
  [SMALL_STATE(7)] = 176,
  [SMALL_STATE(8)] = 211,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 274,
  [SMALL_STATE(11)] = 302,
  [SMALL_STATE(12)] = 327,
  [SMALL_STATE(13)] = 354,
  [SMALL_STATE(14)] = 379,
  [SMALL_STATE(15)] = 404,
  [SMALL_STATE(16)] = 418,
  [SMALL_STATE(17)] = 432,
  [SMALL_STATE(18)] = 446,
  [SMALL_STATE(19)] = 460,
  [SMALL_STATE(20)] = 474,
  [SMALL_STATE(21)] = 488,
  [SMALL_STATE(22)] = 502,
  [SMALL_STATE(23)] = 526,
  [SMALL_STATE(24)] = 547,
  [SMALL_STATE(25)] = 568,
  [SMALL_STATE(26)] = 579,
  [SMALL_STATE(27)] = 590,
  [SMALL_STATE(28)] = 603,
  [SMALL_STATE(29)] = 614,
  [SMALL_STATE(30)] = 625,
  [SMALL_STATE(31)] = 636,
  [SMALL_STATE(32)] = 647,
  [SMALL_STATE(33)] = 658,
  [SMALL_STATE(34)] = 669,
  [SMALL_STATE(35)] = 679,
  [SMALL_STATE(36)] = 689,
  [SMALL_STATE(37)] = 699,
  [SMALL_STATE(38)] = 709,
  [SMALL_STATE(39)] = 719,
  [SMALL_STATE(40)] = 729,
  [SMALL_STATE(41)] = 739,
  [SMALL_STATE(42)] = 749,
  [SMALL_STATE(43)] = 759,
  [SMALL_STATE(44)] = 770,
  [SMALL_STATE(45)] = 781,
  [SMALL_STATE(46)] = 792,
  [SMALL_STATE(47)] = 799,
  [SMALL_STATE(48)] = 806,
  [SMALL_STATE(49)] = 811,
  [SMALL_STATE(50)] = 815,
  [SMALL_STATE(51)] = 819,
  [SMALL_STATE(52)] = 823,
  [SMALL_STATE(53)] = 827,
  [SMALL_STATE(54)] = 831,
  [SMALL_STATE(55)] = 835,
  [SMALL_STATE(56)] = 839,
  [SMALL_STATE(57)] = 843,
  [SMALL_STATE(58)] = 847,
  [SMALL_STATE(59)] = 851,
  [SMALL_STATE(60)] = 855,
  [SMALL_STATE(61)] = 859,
  [SMALL_STATE(62)] = 863,
  [SMALL_STATE(63)] = 867,
  [SMALL_STATE(64)] = 871,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(20),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(3),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(49),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(55),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(16),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(11),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(46),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(5),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(13),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(46),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string_literal, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string_literal, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string_literal, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string_literal, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(27),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(6),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(23),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_name, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_name, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_end, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_end, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_void, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_void, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 5),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 5),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2), SHIFT_REPEAT(48),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [245] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
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
