#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
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
  sym_template = 8,
  sym__value = 9,
  sym_mustache_statement = 10,
  sym_string_literal = 11,
  sym__single_quote_string_literal = 12,
  sym__double_quote_string_literal = 13,
  aux_sym_template_repeat1 = 14,
  aux_sym_mustache_statement_repeat1 = 15,
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
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (lookahead == '{') ADVANCE(1);
      if (lookahead == '}') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '{') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == '}') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(14);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_mustache_statement_start);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_mustache_statement_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_path_expression);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(14);
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
  },
  [1] = {
    [sym_template] = STATE(12),
    [sym_mustache_statement] = STATE(5),
    [aux_sym_template_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_mustache_statement_start] = ACTIONS(5),
  },
  [2] = {
    [sym__value] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym__single_quote_string_literal] = STATE(6),
    [sym__double_quote_string_literal] = STATE(6),
    [aux_sym_mustache_statement_repeat1] = STATE(3),
    [sym_mustache_statement_end] = ACTIONS(7),
    [sym_path_expression] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
  },
  [3] = {
    [sym__value] = STATE(4),
    [sym_string_literal] = STATE(4),
    [sym__single_quote_string_literal] = STATE(6),
    [sym__double_quote_string_literal] = STATE(6),
    [aux_sym_mustache_statement_repeat1] = STATE(4),
    [sym_mustache_statement_end] = ACTIONS(15),
    [sym_path_expression] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
  },
  [4] = {
    [sym__value] = STATE(4),
    [sym_string_literal] = STATE(4),
    [sym__single_quote_string_literal] = STATE(6),
    [sym__double_quote_string_literal] = STATE(6),
    [aux_sym_mustache_statement_repeat1] = STATE(4),
    [sym_mustache_statement_end] = ACTIONS(19),
    [sym_path_expression] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(24),
    [anon_sym_DQUOTE] = ACTIONS(27),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      sym_mustache_statement_start,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [11] = 1,
    ACTIONS(32), 4,
      sym_mustache_statement_end,
      sym_path_expression,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [18] = 3,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      sym_mustache_statement_start,
    STATE(7), 2,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [29] = 1,
    ACTIONS(39), 4,
      sym_mustache_statement_end,
      sym_path_expression,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [36] = 1,
    ACTIONS(41), 4,
      sym_mustache_statement_end,
      sym_path_expression,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [43] = 1,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_mustache_statement_start,
  [48] = 1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      sym_mustache_statement_start,
  [53] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
  [57] = 1,
    ACTIONS(49), 1,
      aux_sym__single_quote_string_literal_token1,
  [61] = 1,
    ACTIONS(51), 1,
      aux_sym__double_quote_string_literal_token1,
  [65] = 1,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
  [69] = 1,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 11,
  [SMALL_STATE(7)] = 18,
  [SMALL_STATE(8)] = 29,
  [SMALL_STATE(9)] = 36,
  [SMALL_STATE(10)] = 43,
  [SMALL_STATE(11)] = 48,
  [SMALL_STATE(12)] = 53,
  [SMALL_STATE(13)] = 57,
  [SMALL_STATE(14)] = 61,
  [SMALL_STATE(15)] = 65,
  [SMALL_STATE(16)] = 69,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(13),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(14),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string_literal, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string_literal, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 3),
  [47] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
