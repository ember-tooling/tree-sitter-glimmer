#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_text_node = 1,
  sym_tag_name = 2,
  anon_sym_LT = 3,
  anon_sym_GT = 4,
  anon_sym_LT_SLASH = 5,
  anon_sym_SLASH_GT = 6,
  sym_attribute_name = 7,
  anon_sym_EQ = 8,
  sym_mustache_statement_start = 9,
  sym_mustache_statement_end = 10,
  sym_path_expression = 11,
  anon_sym_SQUOTE = 12,
  aux_sym__single_quote_string_literal_token1 = 13,
  anon_sym_DQUOTE = 14,
  aux_sym__double_quote_string_literal_token1 = 15,
  sym_number_literal = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  sym_template = 19,
  sym_element_node_start = 20,
  sym_element_node_end = 21,
  sym_element_node_void = 22,
  sym_element_node = 23,
  sym_attribute_node = 24,
  sym__value = 25,
  sym_mustache_statement = 26,
  sym_string_literal = 27,
  sym__single_quote_string_literal = 28,
  sym__double_quote_string_literal = 29,
  sym_boolean_literal = 30,
  aux_sym_template_repeat1 = 31,
  aux_sym_element_node_start_repeat1 = 32,
  aux_sym_element_node_repeat1 = 33,
  aux_sym_mustache_statement_repeat1 = 34,
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
  [sym_mustache_statement_start] = "mustache_statement_start",
  [sym_mustache_statement_end] = "mustache_statement_end",
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
  [sym__value] = "_value",
  [sym_mustache_statement] = "mustache_statement",
  [sym_string_literal] = "string_literal",
  [sym__single_quote_string_literal] = "_single_quote_string_literal",
  [sym__double_quote_string_literal] = "_double_quote_string_literal",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_element_node_start_repeat1] = "element_node_start_repeat1",
  [aux_sym_element_node_repeat1] = "element_node_repeat1",
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
  [sym_mustache_statement_start] = sym_mustache_statement_start,
  [sym_mustache_statement_end] = sym_mustache_statement_end,
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
  [sym__value] = sym__value,
  [sym_mustache_statement] = sym_mustache_statement,
  [sym_string_literal] = sym_string_literal,
  [sym__single_quote_string_literal] = sym__single_quote_string_literal,
  [sym__double_quote_string_literal] = sym__double_quote_string_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_element_node_start_repeat1] = aux_sym_element_node_start_repeat1,
  [aux_sym_element_node_repeat1] = aux_sym_element_node_repeat1,
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
  [sym_mustache_statement_start] = {
    .visible = true,
    .named = true,
  },
  [sym_mustache_statement_end] = {
    .visible = true,
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
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '<') ADVANCE(14);
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
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_mustache_statement_start);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_mustache_statement_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 6},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_mustache_statement_start] = ACTIONS(1),
    [sym_mustache_statement_end] = ACTIONS(1),
    [sym_path_expression] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(43),
    [sym_element_node_start] = STATE(7),
    [sym_element_node_void] = STATE(21),
    [sym_element_node] = STATE(9),
    [sym_mustache_statement] = STATE(9),
    [aux_sym_template_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text_node] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [sym_mustache_statement_start] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      sym_mustache_statement_end,
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
    STATE(14), 2,
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
      sym_mustache_statement_end,
    ACTIONS(13), 2,
      sym_path_expression,
      sym_number_literal,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(6), 4,
      sym__value,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [56] = 7,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_mustache_statement_end,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_path_expression,
      sym_number_literal,
    STATE(14), 2,
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
    ACTIONS(27), 1,
      sym_mustache_statement_end,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      sym_path_expression,
      sym_number_literal,
    STATE(14), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(3), 4,
      sym__value,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [112] = 7,
    ACTIONS(31), 1,
      sym_mustache_statement_end,
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
    STATE(14), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(6), 4,
      sym__value,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [140] = 8,
    ACTIONS(9), 1,
      sym_mustache_statement_start,
    ACTIONS(45), 1,
      sym_text_node,
    ACTIONS(47), 1,
      anon_sym_LT,
    ACTIONS(49), 1,
      anon_sym_LT_SLASH,
    STATE(7), 1,
      sym_element_node_start,
    STATE(20), 1,
      sym_element_node_end,
    STATE(21), 1,
      sym_element_node_void,
    STATE(8), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [167] = 8,
    ACTIONS(9), 1,
      sym_mustache_statement_start,
    ACTIONS(47), 1,
      anon_sym_LT,
    ACTIONS(49), 1,
      anon_sym_LT_SLASH,
    ACTIONS(51), 1,
      sym_text_node,
    STATE(7), 1,
      sym_element_node_start,
    STATE(21), 1,
      sym_element_node_void,
    STATE(24), 1,
      sym_element_node_end,
    STATE(11), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [194] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_mustache_statement_start,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_text_node,
    STATE(7), 1,
      sym_element_node_start,
    STATE(21), 1,
      sym_element_node_void,
    STATE(10), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [218] = 7,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_text_node,
    ACTIONS(62), 1,
      anon_sym_LT,
    ACTIONS(65), 1,
      sym_mustache_statement_start,
    STATE(7), 1,
      sym_element_node_start,
    STATE(21), 1,
      sym_element_node_void,
    STATE(10), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [242] = 7,
    ACTIONS(68), 1,
      sym_text_node,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(74), 1,
      anon_sym_LT_SLASH,
    ACTIONS(76), 1,
      sym_mustache_statement_start,
    STATE(7), 1,
      sym_element_node_start,
    STATE(21), 1,
      sym_element_node_void,
    STATE(11), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [266] = 6,
    ACTIONS(79), 1,
      sym_mustache_statement_start,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_number_literal,
    STATE(30), 2,
      sym_mustache_statement,
      sym_string_literal,
    STATE(32), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
  [287] = 2,
    ACTIONS(87), 3,
      sym_mustache_statement_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(89), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [299] = 2,
    ACTIONS(91), 3,
      sym_mustache_statement_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(93), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [311] = 2,
    ACTIONS(95), 3,
      sym_mustache_statement_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(97), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [323] = 2,
    ACTIONS(99), 3,
      sym_mustache_statement_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(101), 4,
      sym_path_expression,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [335] = 4,
    ACTIONS(103), 1,
      anon_sym_GT,
    ACTIONS(105), 1,
      anon_sym_SLASH_GT,
    ACTIONS(107), 1,
      sym_attribute_name,
    STATE(26), 2,
      sym_attribute_node,
      aux_sym_element_node_start_repeat1,
  [349] = 2,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym_mustache_statement_start,
  [359] = 2,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym_mustache_statement_start,
  [369] = 2,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym_mustache_statement_start,
  [379] = 2,
    ACTIONS(123), 1,
      anon_sym_LT,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym_mustache_statement_start,
  [389] = 2,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym_mustache_statement_start,
  [399] = 2,
    ACTIONS(131), 1,
      anon_sym_LT,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym_mustache_statement_start,
  [409] = 2,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym_mustache_statement_start,
  [419] = 2,
    ACTIONS(139), 1,
      anon_sym_LT,
    ACTIONS(137), 3,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym_mustache_statement_start,
  [428] = 3,
    ACTIONS(107), 1,
      sym_attribute_name,
    ACTIONS(141), 1,
      anon_sym_GT,
    STATE(28), 2,
      sym_attribute_node,
      aux_sym_element_node_start_repeat1,
  [439] = 2,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(143), 3,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym_mustache_statement_start,
  [448] = 3,
    ACTIONS(147), 1,
      anon_sym_GT,
    ACTIONS(149), 1,
      sym_attribute_name,
    STATE(28), 2,
      sym_attribute_node,
      aux_sym_element_node_start_repeat1,
  [459] = 2,
    ACTIONS(154), 1,
      anon_sym_EQ,
    ACTIONS(152), 2,
      anon_sym_GT,
      sym_attribute_name,
  [467] = 1,
    ACTIONS(156), 2,
      anon_sym_GT,
      sym_attribute_name,
  [472] = 1,
    ACTIONS(109), 2,
      anon_sym_GT,
      sym_attribute_name,
  [477] = 1,
    ACTIONS(91), 2,
      anon_sym_GT,
      sym_attribute_name,
  [482] = 1,
    ACTIONS(129), 2,
      anon_sym_GT,
      sym_attribute_name,
  [487] = 1,
    ACTIONS(99), 2,
      anon_sym_GT,
      sym_attribute_name,
  [492] = 1,
    ACTIONS(95), 2,
      anon_sym_GT,
      sym_attribute_name,
  [497] = 1,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
  [501] = 1,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
  [505] = 1,
    ACTIONS(162), 1,
      anon_sym_GT,
  [509] = 1,
    ACTIONS(164), 1,
      sym_tag_name,
  [513] = 1,
    ACTIONS(166), 1,
      sym_tag_name,
  [517] = 1,
    ACTIONS(168), 1,
      aux_sym__double_quote_string_literal_token1,
  [521] = 1,
    ACTIONS(170), 1,
      aux_sym__single_quote_string_literal_token1,
  [525] = 1,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
  [529] = 1,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
  [533] = 1,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
  [537] = 1,
    ACTIONS(178), 1,
      aux_sym__single_quote_string_literal_token1,
  [541] = 1,
    ACTIONS(180), 1,
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
  [SMALL_STATE(15)] = 311,
  [SMALL_STATE(16)] = 323,
  [SMALL_STATE(17)] = 335,
  [SMALL_STATE(18)] = 349,
  [SMALL_STATE(19)] = 359,
  [SMALL_STATE(20)] = 369,
  [SMALL_STATE(21)] = 379,
  [SMALL_STATE(22)] = 389,
  [SMALL_STATE(23)] = 399,
  [SMALL_STATE(24)] = 409,
  [SMALL_STATE(25)] = 419,
  [SMALL_STATE(26)] = 428,
  [SMALL_STATE(27)] = 439,
  [SMALL_STATE(28)] = 448,
  [SMALL_STATE(29)] = 459,
  [SMALL_STATE(30)] = 467,
  [SMALL_STATE(31)] = 472,
  [SMALL_STATE(32)] = 477,
  [SMALL_STATE(33)] = 482,
  [SMALL_STATE(34)] = 487,
  [SMALL_STATE(35)] = 492,
  [SMALL_STATE(36)] = 497,
  [SMALL_STATE(37)] = 501,
  [SMALL_STATE(38)] = 505,
  [SMALL_STATE(39)] = 509,
  [SMALL_STATE(40)] = 513,
  [SMALL_STATE(41)] = 517,
  [SMALL_STATE(42)] = 521,
  [SMALL_STATE(43)] = 525,
  [SMALL_STATE(44)] = 529,
  [SMALL_STATE(45)] = 533,
  [SMALL_STATE(46)] = 537,
  [SMALL_STATE(47)] = 541,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(6),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(42),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(41),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(10),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(39),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(11),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(39),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string_literal, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string_literal, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string_literal, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string_literal, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_end, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_end, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_void, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_void, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(29),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [172] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
