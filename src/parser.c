#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
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
  anon_sym_SQUOTE = 9,
  anon_sym_DQUOTE = 10,
  sym__mustache_safe_single_quote_string_literal_content = 11,
  sym__mustache_safe_double_quote_string_literal_content = 12,
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
  sym_block_params = 37,
  sym_path_expression = 38,
  sym__identifier = 39,
  sym__value = 40,
  sym_mustache_statement = 41,
  sym_sub_expression = 42,
  sym_string_literal = 43,
  sym__single_quote_string_literal = 44,
  sym__double_quote_string_literal = 45,
  sym_boolean_literal = 46,
  aux_sym_template_repeat1 = 47,
  aux_sym_element_node_start_repeat1 = 48,
  aux_sym_element_node_repeat1 = 49,
  aux_sym__single_quote_concat_statement_repeat1 = 50,
  aux_sym__double_quote_concat_statement_repeat1 = 51,
  aux_sym_block_params_repeat1 = 52,
  aux_sym_mustache_statement_repeat1 = 53,
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
  [sym__mustache_safe_single_quote_string_literal_content] = "_mustache_safe_single_quote_string_literal_content",
  [sym__mustache_safe_double_quote_string_literal_content] = "_mustache_safe_double_quote_string_literal_content",
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
  [aux_sym__single_quote_concat_statement_repeat1] = "_single_quote_concat_statement_repeat1",
  [aux_sym__double_quote_concat_statement_repeat1] = "_double_quote_concat_statement_repeat1",
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
  [sym__mustache_safe_single_quote_string_literal_content] = sym__mustache_safe_single_quote_string_literal_content,
  [sym__mustache_safe_double_quote_string_literal_content] = sym__mustache_safe_double_quote_string_literal_content,
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
  [aux_sym__single_quote_concat_statement_repeat1] = aux_sym__single_quote_concat_statement_repeat1,
  [aux_sym__double_quote_concat_statement_repeat1] = aux_sym__double_quote_concat_statement_repeat1,
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
  [sym__mustache_safe_single_quote_string_literal_content] = {
    .visible = false,
    .named = true,
  },
  [sym__mustache_safe_double_quote_string_literal_content] = {
    .visible = false,
    .named = true,
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
  [aux_sym__single_quote_concat_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quote_concat_statement_repeat1] = {
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
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(38);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 12:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_text_node);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text_node);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(31);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__mustache_safe_single_quote_string_literal_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__mustache_safe_single_quote_string_literal_content);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__mustache_safe_double_quote_string_literal_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__mustache_safe_double_quote_string_literal_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_as);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__mustache_statement_start);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__mustache_statement_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 's') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_helper_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
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
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 13, .external_lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 13, .external_lex_state = 1},
  [18] = {.lex_state = 13, .external_lex_state = 1},
  [19] = {.lex_state = 13, .external_lex_state = 1},
  [20] = {.lex_state = 5, .external_lex_state = 1},
  [21] = {.lex_state = 13, .external_lex_state = 1},
  [22] = {.lex_state = 13, .external_lex_state = 1},
  [23] = {.lex_state = 5, .external_lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 13, .external_lex_state = 1},
  [32] = {.lex_state = 5, .external_lex_state = 1},
  [33] = {.lex_state = 5, .external_lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 5, .external_lex_state = 1},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 13, .external_lex_state = 1},
  [40] = {.lex_state = 13, .external_lex_state = 1},
  [41] = {.lex_state = 13, .external_lex_state = 1},
  [42] = {.lex_state = 13, .external_lex_state = 1},
  [43] = {.lex_state = 13, .external_lex_state = 1},
  [44] = {.lex_state = 13, .external_lex_state = 1},
  [45] = {.lex_state = 13, .external_lex_state = 1},
  [46] = {.lex_state = 13, .external_lex_state = 1},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 5, .external_lex_state = 1},
  [50] = {.lex_state = 5, .external_lex_state = 1},
  [51] = {.lex_state = 13, .external_lex_state = 1},
  [52] = {.lex_state = 13, .external_lex_state = 1},
  [53] = {.lex_state = 13, .external_lex_state = 1},
  [54] = {.lex_state = 5, .external_lex_state = 1},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 5, .external_lex_state = 1},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 5, .external_lex_state = 1},
  [59] = {.lex_state = 5, .external_lex_state = 1},
  [60] = {.lex_state = 5, .external_lex_state = 1},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 5, .external_lex_state = 1},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 13, .external_lex_state = 1},
  [65] = {.lex_state = 13, .external_lex_state = 1},
  [66] = {.lex_state = 13, .external_lex_state = 1},
  [67] = {.lex_state = 13, .external_lex_state = 1},
  [68] = {.lex_state = 13, .external_lex_state = 1},
  [69] = {.lex_state = 13, .external_lex_state = 1},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 12},
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
    [sym_template] = STATE(91),
    [sym_element_node_start] = STATE(18),
    [sym_element_node_void] = STATE(41),
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
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(14), 1,
      anon_sym_DQUOTE,
    ACTIONS(22), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_number_literal,
    STATE(16), 1,
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
    STATE(25), 2,
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
    STATE(16), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
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
    STATE(16), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
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
    STATE(16), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(14), 6,
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
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
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
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      sym__mustache_statement_end,
    ACTIONS(55), 1,
      sym_number_literal,
    STATE(16), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(4), 6,
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
    STATE(16), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(3), 6,
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
    ACTIONS(61), 1,
      sym__mustache_statement_end,
    ACTIONS(63), 1,
      sym_number_literal,
    STATE(16), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(13), 6,
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
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(65), 1,
      sym__mustache_statement_end,
    STATE(16), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [352] = 10,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      sym__mustache_statement_end,
    ACTIONS(69), 1,
      sym_number_literal,
    STATE(16), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(10), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [391] = 10,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(73), 1,
      sym_number_literal,
    STATE(16), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(6), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [430] = 10,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(75), 1,
      sym__mustache_statement_end,
    STATE(16), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [469] = 10,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(77), 1,
      sym__mustache_statement_end,
    STATE(16), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [508] = 8,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(83), 1,
      anon_sym_LT_SLASH,
    ACTIONS(85), 1,
      sym__mustache_statement_start,
    STATE(15), 1,
      sym_element_node_start,
    STATE(40), 1,
      sym_element_node_end,
    STATE(64), 1,
      sym_element_node_void,
    ACTIONS(79), 2,
      sym_comment,
      sym_text_node,
    STATE(17), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [536] = 3,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(87), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(91), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [554] = 8,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(83), 1,
      anon_sym_LT_SLASH,
    ACTIONS(85), 1,
      sym__mustache_statement_start,
    STATE(15), 1,
      sym_element_node_start,
    STATE(64), 1,
      sym_element_node_void,
    STATE(67), 1,
      sym_element_node_end,
    ACTIONS(93), 2,
      sym_comment,
      sym_text_node,
    STATE(31), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [582] = 8,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      sym__mustache_statement_start,
    ACTIONS(97), 1,
      anon_sym_LT_SLASH,
    STATE(15), 1,
      sym_element_node_start,
    STATE(46), 1,
      sym_element_node_end,
    STATE(64), 1,
      sym_element_node_void,
    ACTIONS(95), 2,
      sym_comment,
      sym_text_node,
    STATE(19), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [610] = 8,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      sym__mustache_statement_start,
    ACTIONS(97), 1,
      anon_sym_LT_SLASH,
    STATE(15), 1,
      sym_element_node_start,
    STATE(44), 1,
      sym_element_node_end,
    STATE(64), 1,
      sym_element_node_void,
    ACTIONS(93), 2,
      sym_comment,
      sym_text_node,
    STATE(31), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [638] = 8,
    ACTIONS(99), 1,
      anon_sym_GT,
    ACTIONS(101), 1,
      anon_sym_SLASH_GT,
    ACTIONS(103), 1,
      sym_attribute_name,
    ACTIONS(105), 1,
      anon_sym_as,
    ACTIONS(107), 1,
      sym__mustache_statement_start,
    ACTIONS(109), 1,
      sym_comment,
    STATE(80), 1,
      sym_block_params,
    STATE(32), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [665] = 7,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_LT,
    ACTIONS(119), 1,
      sym__mustache_statement_start,
    STATE(18), 1,
      sym_element_node_start,
    STATE(41), 1,
      sym_element_node_void,
    ACTIONS(113), 2,
      sym_comment,
      sym_text_node,
    STATE(21), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [690] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_element_node_start,
    STATE(41), 1,
      sym_element_node_void,
    ACTIONS(124), 2,
      sym_comment,
      sym_text_node,
    STATE(21), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [715] = 8,
    ACTIONS(99), 1,
      anon_sym_GT,
    ACTIONS(103), 1,
      sym_attribute_name,
    ACTIONS(105), 1,
      anon_sym_as,
    ACTIONS(107), 1,
      sym__mustache_statement_start,
    ACTIONS(109), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_SLASH_GT,
    STATE(80), 1,
      sym_block_params,
    STATE(32), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [742] = 2,
    ACTIONS(128), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(130), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [757] = 2,
    ACTIONS(132), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(134), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [772] = 2,
    ACTIONS(136), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(138), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [787] = 2,
    ACTIONS(140), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(142), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [802] = 2,
    ACTIONS(144), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(146), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [817] = 2,
    ACTIONS(148), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(150), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [832] = 2,
    ACTIONS(152), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(154), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [847] = 7,
    ACTIONS(159), 1,
      anon_sym_LT,
    ACTIONS(162), 1,
      anon_sym_LT_SLASH,
    ACTIONS(164), 1,
      sym__mustache_statement_start,
    STATE(15), 1,
      sym_element_node_start,
    STATE(64), 1,
      sym_element_node_void,
    ACTIONS(156), 2,
      sym_comment,
      sym_text_node,
    STATE(31), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [872] = 7,
    ACTIONS(103), 1,
      sym_attribute_name,
    ACTIONS(105), 1,
      anon_sym_as,
    ACTIONS(107), 1,
      sym__mustache_statement_start,
    ACTIONS(167), 1,
      anon_sym_GT,
    ACTIONS(169), 1,
      sym_comment,
    STATE(84), 1,
      sym_block_params,
    STATE(33), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [896] = 6,
    ACTIONS(171), 1,
      anon_sym_GT,
    ACTIONS(173), 1,
      sym_attribute_name,
    ACTIONS(176), 1,
      anon_sym_as,
    ACTIONS(178), 1,
      sym__mustache_statement_start,
    ACTIONS(181), 1,
      sym_comment,
    STATE(33), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [917] = 6,
    ACTIONS(107), 1,
      sym__mustache_statement_start,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym_number_literal,
    STATE(49), 2,
      sym_concat_statement,
      sym_mustache_statement,
    STATE(50), 2,
      sym__single_quote_concat_statement,
      sym__double_quote_concat_statement,
  [938] = 4,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    STATE(70), 1,
      sym__identifier,
    ACTIONS(192), 2,
      sym_identifier,
      sym_helper_identifier,
    STATE(36), 2,
      sym_path_expression,
      aux_sym_block_params_repeat1,
  [953] = 4,
    ACTIONS(194), 1,
      anon_sym_PIPE,
    STATE(70), 1,
      sym__identifier,
    ACTIONS(196), 2,
      sym_identifier,
      sym_helper_identifier,
    STATE(36), 2,
      sym_path_expression,
      aux_sym_block_params_repeat1,
  [968] = 3,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(201), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(199), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [981] = 4,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    STATE(70), 1,
      sym__identifier,
    ACTIONS(192), 2,
      sym_identifier,
      sym_helper_identifier,
    STATE(35), 2,
      sym_path_expression,
      aux_sym_block_params_repeat1,
  [996] = 2,
    ACTIONS(209), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(207), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1006] = 2,
    ACTIONS(211), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(213), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1016] = 2,
    ACTIONS(217), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(215), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1026] = 2,
    ACTIONS(221), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(219), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1036] = 2,
    ACTIONS(225), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(223), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1046] = 2,
    ACTIONS(229), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(227), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1056] = 2,
    ACTIONS(231), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(233), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1066] = 2,
    ACTIONS(213), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(211), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1076] = 4,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(239), 1,
      sym__mustache_statement_start,
    STATE(55), 2,
      sym_mustache_statement,
      aux_sym__single_quote_concat_statement_repeat1,
  [1090] = 4,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(245), 1,
      sym__mustache_statement_start,
    STATE(57), 2,
      sym_mustache_statement,
      aux_sym__double_quote_concat_statement_repeat1,
  [1104] = 2,
    ACTIONS(249), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(247), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1114] = 2,
    ACTIONS(253), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(251), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1124] = 2,
    ACTIONS(255), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(257), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1134] = 2,
    ACTIONS(261), 2,
      anon_sym_LT,
      sym__mustache_statement_start,
    ACTIONS(259), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
  [1144] = 2,
    ACTIONS(263), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(265), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1154] = 2,
    ACTIONS(269), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(267), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1164] = 4,
    ACTIONS(239), 1,
      sym__mustache_statement_start,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    STATE(61), 2,
      sym_mustache_statement,
      aux_sym__single_quote_concat_statement_repeat1,
  [1178] = 2,
    ACTIONS(277), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(275), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1188] = 4,
    ACTIONS(245), 1,
      sym__mustache_statement_start,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    STATE(63), 2,
      sym_mustache_statement,
      aux_sym__double_quote_concat_statement_repeat1,
  [1202] = 2,
    ACTIONS(221), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(219), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1212] = 2,
    ACTIONS(225), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(223), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1222] = 2,
    ACTIONS(285), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(283), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1232] = 4,
    ACTIONS(287), 1,
      anon_sym_SQUOTE,
    ACTIONS(289), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(292), 1,
      sym__mustache_statement_start,
    STATE(61), 2,
      sym_mustache_statement,
      aux_sym__single_quote_concat_statement_repeat1,
  [1246] = 2,
    ACTIONS(297), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(295), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1256] = 4,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(304), 1,
      sym__mustache_statement_start,
    STATE(63), 2,
      sym_mustache_statement,
      aux_sym__double_quote_concat_statement_repeat1,
  [1270] = 2,
    ACTIONS(215), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(217), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1280] = 2,
    ACTIONS(223), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(225), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1290] = 2,
    ACTIONS(207), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(209), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1300] = 2,
    ACTIONS(227), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(229), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1310] = 2,
    ACTIONS(259), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(261), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1320] = 2,
    ACTIONS(219), 2,
      sym_comment,
      sym_text_node,
    ACTIONS(221), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1330] = 3,
    ACTIONS(87), 1,
      anon_sym_PIPE,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(91), 2,
      sym_identifier,
      sym_helper_identifier,
  [1341] = 2,
    ACTIONS(223), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(225), 2,
      anon_sym_DQUOTE,
      sym__mustache_statement_start,
  [1349] = 2,
    STATE(24), 1,
      sym__identifier,
    ACTIONS(309), 2,
      sym_identifier,
      sym_helper_identifier,
  [1357] = 2,
    ACTIONS(128), 1,
      anon_sym_PIPE,
    ACTIONS(130), 2,
      sym_identifier,
      sym_helper_identifier,
  [1365] = 2,
    STATE(73), 1,
      sym__identifier,
    ACTIONS(311), 2,
      sym_identifier,
      sym_helper_identifier,
  [1373] = 2,
    ACTIONS(219), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(221), 2,
      anon_sym_DQUOTE,
      sym__mustache_statement_start,
  [1381] = 2,
    ACTIONS(223), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(225), 2,
      anon_sym_SQUOTE,
      sym__mustache_statement_start,
  [1389] = 2,
    ACTIONS(219), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(221), 2,
      anon_sym_SQUOTE,
      sym__mustache_statement_start,
  [1397] = 1,
    ACTIONS(313), 1,
      sym_tag_name,
  [1401] = 1,
    ACTIONS(315), 1,
      anon_sym_GT,
  [1405] = 1,
    ACTIONS(167), 1,
      anon_sym_GT,
  [1409] = 1,
    ACTIONS(317), 1,
      anon_sym_PIPE,
  [1413] = 1,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
  [1417] = 1,
    ACTIONS(321), 1,
      anon_sym_GT,
  [1421] = 1,
    ACTIONS(323), 1,
      anon_sym_GT,
  [1425] = 1,
    ACTIONS(325), 1,
      anon_sym_GT,
  [1429] = 1,
    ACTIONS(327), 1,
      sym_tag_name,
  [1433] = 1,
    ACTIONS(329), 1,
      anon_sym_GT,
  [1437] = 1,
    ACTIONS(331), 1,
      aux_sym__double_quote_string_literal_token1,
  [1441] = 1,
    ACTIONS(333), 1,
      aux_sym__single_quote_string_literal_token1,
  [1445] = 1,
    ACTIONS(335), 1,
      anon_sym_SQUOTE,
  [1449] = 1,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
  [1453] = 1,
    ACTIONS(339), 1,
      sym_tag_name,
  [1457] = 1,
    ACTIONS(341), 1,
      sym_tag_name,
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
  [SMALL_STATE(12)] = 391,
  [SMALL_STATE(13)] = 430,
  [SMALL_STATE(14)] = 469,
  [SMALL_STATE(15)] = 508,
  [SMALL_STATE(16)] = 536,
  [SMALL_STATE(17)] = 554,
  [SMALL_STATE(18)] = 582,
  [SMALL_STATE(19)] = 610,
  [SMALL_STATE(20)] = 638,
  [SMALL_STATE(21)] = 665,
  [SMALL_STATE(22)] = 690,
  [SMALL_STATE(23)] = 715,
  [SMALL_STATE(24)] = 742,
  [SMALL_STATE(25)] = 757,
  [SMALL_STATE(26)] = 772,
  [SMALL_STATE(27)] = 787,
  [SMALL_STATE(28)] = 802,
  [SMALL_STATE(29)] = 817,
  [SMALL_STATE(30)] = 832,
  [SMALL_STATE(31)] = 847,
  [SMALL_STATE(32)] = 872,
  [SMALL_STATE(33)] = 896,
  [SMALL_STATE(34)] = 917,
  [SMALL_STATE(35)] = 938,
  [SMALL_STATE(36)] = 953,
  [SMALL_STATE(37)] = 968,
  [SMALL_STATE(38)] = 981,
  [SMALL_STATE(39)] = 996,
  [SMALL_STATE(40)] = 1006,
  [SMALL_STATE(41)] = 1016,
  [SMALL_STATE(42)] = 1026,
  [SMALL_STATE(43)] = 1036,
  [SMALL_STATE(44)] = 1046,
  [SMALL_STATE(45)] = 1056,
  [SMALL_STATE(46)] = 1066,
  [SMALL_STATE(47)] = 1076,
  [SMALL_STATE(48)] = 1090,
  [SMALL_STATE(49)] = 1104,
  [SMALL_STATE(50)] = 1114,
  [SMALL_STATE(51)] = 1124,
  [SMALL_STATE(52)] = 1134,
  [SMALL_STATE(53)] = 1144,
  [SMALL_STATE(54)] = 1154,
  [SMALL_STATE(55)] = 1164,
  [SMALL_STATE(56)] = 1178,
  [SMALL_STATE(57)] = 1188,
  [SMALL_STATE(58)] = 1202,
  [SMALL_STATE(59)] = 1212,
  [SMALL_STATE(60)] = 1222,
  [SMALL_STATE(61)] = 1232,
  [SMALL_STATE(62)] = 1246,
  [SMALL_STATE(63)] = 1256,
  [SMALL_STATE(64)] = 1270,
  [SMALL_STATE(65)] = 1280,
  [SMALL_STATE(66)] = 1290,
  [SMALL_STATE(67)] = 1300,
  [SMALL_STATE(68)] = 1310,
  [SMALL_STATE(69)] = 1320,
  [SMALL_STATE(70)] = 1330,
  [SMALL_STATE(71)] = 1341,
  [SMALL_STATE(72)] = 1349,
  [SMALL_STATE(73)] = 1357,
  [SMALL_STATE(74)] = 1365,
  [SMALL_STATE(75)] = 1373,
  [SMALL_STATE(76)] = 1381,
  [SMALL_STATE(77)] = 1389,
  [SMALL_STATE(78)] = 1397,
  [SMALL_STATE(79)] = 1401,
  [SMALL_STATE(80)] = 1405,
  [SMALL_STATE(81)] = 1409,
  [SMALL_STATE(82)] = 1413,
  [SMALL_STATE(83)] = 1417,
  [SMALL_STATE(84)] = 1421,
  [SMALL_STATE(85)] = 1425,
  [SMALL_STATE(86)] = 1429,
  [SMALL_STATE(87)] = 1433,
  [SMALL_STATE(88)] = 1437,
  [SMALL_STATE(89)] = 1441,
  [SMALL_STATE(90)] = 1445,
  [SMALL_STATE(91)] = 1449,
  [SMALL_STATE(92)] = 1453,
  [SMALL_STATE(93)] = 1457,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(89),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(88),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(16),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(12),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(21),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(78),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string_literal, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string_literal, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string_literal, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string_literal, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 3),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(31),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(92),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_node_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(8),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(37),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(11),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(33),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_params_repeat1, 2), SHIFT_REPEAT(70),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_end, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_end, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 4),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat_statement, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concat_statement, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_void, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_void, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 5),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 5),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_concat_statement, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_concat_statement, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_concat_statement, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_concat_statement, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_concat_statement, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_concat_statement, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__single_quote_concat_statement_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(61),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__single_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(9),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_concat_statement, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_concat_statement, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_concat_statement_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(63),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(7),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [337] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
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
