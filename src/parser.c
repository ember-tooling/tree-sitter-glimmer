#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_mustache_statement_start = 1,
  sym_mustache_statement_end = 2,
  sym_path_expression = 3,
  anon_sym_SQUOTE = 4,
  aux_sym__single_quote_string_literal_token1 = 5,
  anon_sym_DQUOTE = 6,
  aux_sym__double_quote_string_literal_token1 = 7,
  sym_number_literal = 8,
  sym_template = 9,
  sym__value = 10,
  sym_mustache_statement = 11,
  sym_string_literal = 12,
  sym__single_quote_string_literal = 13,
  sym__double_quote_string_literal = 14,
  aux_sym_template_repeat1 = 15,
  aux_sym_mustache_statement_repeat1 = 16,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_mustache_statement_start] = "mustache_statement_start",
  [sym_mustache_statement_end] = "mustache_statement_end",
  [sym_path_expression] = "path_expression",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__single_quote_string_literal_token1] = "_single_quote_string_literal_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_literal_token1] = "_double_quote_string_literal_token1",
  [sym_number_literal] = "number_literal",
  [sym_template] = "template",
  [sym__value] = "_value",
  [sym_mustache_statement] = "mustache_statement",
  [sym_string_literal] = "string_literal",
  [sym__single_quote_string_literal] = "_single_quote_string_literal",
  [sym__double_quote_string_literal] = "_double_quote_string_literal",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_mustache_statement_repeat1] = "mustache_statement_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_mustache_statement_start] = sym_mustache_statement_start,
  [sym_mustache_statement_end] = sym_mustache_statement_end,
  [sym_path_expression] = sym_path_expression,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__single_quote_string_literal_token1] = aux_sym__single_quote_string_literal_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_literal_token1] = aux_sym__double_quote_string_literal_token1,
  [sym_number_literal] = sym_number_literal,
  [sym_template] = sym_template,
  [sym__value] = sym__value,
  [sym_mustache_statement] = sym_mustache_statement,
  [sym_string_literal] = sym_string_literal,
  [sym__single_quote_string_literal] = sym__single_quote_string_literal,
  [sym__double_quote_string_literal] = sym__double_quote_string_literal,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_mustache_statement_repeat1] = aux_sym_mustache_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_template] = {
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
  [aux_sym_template_repeat1] = {
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
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead == '{') ADVANCE(1);
      if (lookahead == '}') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '{') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == '}') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(16);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_mustache_statement_start);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_mustache_statement_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead == '_') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_mustache_statement_start] = ACTIONS(1),
    [sym_mustache_statement_end] = ACTIONS(1),
    [sym_path_expression] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(12),
    [sym_mustache_statement] = STATE(8),
    [aux_sym_template_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_mustache_statement_start] = ACTIONS(5),
  },
  [2] = {
    [sym__value] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym__single_quote_string_literal] = STATE(5),
    [sym__double_quote_string_literal] = STATE(5),
    [aux_sym_mustache_statement_repeat1] = STATE(3),
    [sym_mustache_statement_end] = ACTIONS(7),
    [sym_path_expression] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number_literal] = ACTIONS(9),
  },
  [3] = {
    [sym__value] = STATE(4),
    [sym_string_literal] = STATE(4),
    [sym__single_quote_string_literal] = STATE(5),
    [sym__double_quote_string_literal] = STATE(5),
    [aux_sym_mustache_statement_repeat1] = STATE(4),
    [sym_mustache_statement_end] = ACTIONS(15),
    [sym_path_expression] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number_literal] = ACTIONS(17),
  },
  [4] = {
    [sym__value] = STATE(4),
    [sym_string_literal] = STATE(4),
    [sym__single_quote_string_literal] = STATE(5),
    [sym__double_quote_string_literal] = STATE(5),
    [aux_sym_mustache_statement_repeat1] = STATE(4),
    [sym_mustache_statement_end] = ACTIONS(19),
    [sym_path_expression] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(24),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(21),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(32), 2,
      sym_path_expression,
      sym_number_literal,
    ACTIONS(30), 3,
      sym_mustache_statement_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [10] = 2,
    ACTIONS(36), 2,
      sym_path_expression,
      sym_number_literal,
    ACTIONS(34), 3,
      sym_mustache_statement_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [20] = 2,
    ACTIONS(40), 2,
      sym_path_expression,
      sym_number_literal,
    ACTIONS(38), 3,
      sym_mustache_statement_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [30] = 3,
    ACTIONS(5), 1,
      sym_mustache_statement_start,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [41] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      sym_mustache_statement_start,
    STATE(9), 2,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [52] = 1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_mustache_statement_start,
  [57] = 1,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_mustache_statement_start,
  [62] = 1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
  [66] = 1,
    ACTIONS(55), 1,
      aux_sym__single_quote_string_literal_token1,
  [70] = 1,
    ACTIONS(57), 1,
      aux_sym__double_quote_string_literal_token1,
  [74] = 1,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
  [78] = 1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 10,
  [SMALL_STATE(7)] = 20,
  [SMALL_STATE(8)] = 30,
  [SMALL_STATE(9)] = 41,
  [SMALL_STATE(10)] = 52,
  [SMALL_STATE(11)] = 57,
  [SMALL_STATE(12)] = 62,
  [SMALL_STATE(13)] = 66,
  [SMALL_STATE(14)] = 70,
  [SMALL_STATE(15)] = 74,
  [SMALL_STATE(16)] = 78,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(13),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(14),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string_literal, 3),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string_literal, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string_literal, 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string_literal, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 3),
  [53] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
