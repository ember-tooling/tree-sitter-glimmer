#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 79
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
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(37);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_text_node);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(30);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__mustache_safe_single_quote_string_literal_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__mustache_safe_single_quote_string_literal_content);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__mustache_safe_double_quote_string_literal_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__mustache_safe_double_quote_string_literal_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_as);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(22);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__mustache_statement_start);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__mustache_statement_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 's') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_helper_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__single_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__double_quote_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
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
  [13] = {.lex_state = 13, .external_lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 13, .external_lex_state = 1},
  [16] = {.lex_state = 13, .external_lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 5, .external_lex_state = 1},
  [20] = {.lex_state = 13, .external_lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 13, .external_lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 5, .external_lex_state = 1},
  [28] = {.lex_state = 5, .external_lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 13, .external_lex_state = 1},
  [32] = {.lex_state = 13, .external_lex_state = 1},
  [33] = {.lex_state = 13, .external_lex_state = 1},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 5, .external_lex_state = 1},
  [36] = {.lex_state = 13, .external_lex_state = 1},
  [37] = {.lex_state = 13, .external_lex_state = 1},
  [38] = {.lex_state = 13, .external_lex_state = 1},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 13, .external_lex_state = 1},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 5, .external_lex_state = 1},
  [43] = {.lex_state = 5, .external_lex_state = 1},
  [44] = {.lex_state = 13, .external_lex_state = 1},
  [45] = {.lex_state = 5, .external_lex_state = 1},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 13, .external_lex_state = 1},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 5, .external_lex_state = 1},
  [51] = {.lex_state = 5, .external_lex_state = 1},
  [52] = {.lex_state = 5, .external_lex_state = 1},
  [53] = {.lex_state = 13, .external_lex_state = 1},
  [54] = {.lex_state = 5, .external_lex_state = 1},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 5, .external_lex_state = 1},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
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
    [sym_template] = STATE(78),
    [sym_element_node_start] = STATE(13),
    [sym_element_node_void] = STATE(32),
    [sym_element_node] = STATE(16),
    [sym_mustache_statement] = STATE(16),
    [aux_sym_template_repeat1] = STATE(16),
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
    STATE(14), 1,
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
    STATE(23), 2,
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
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
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
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
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
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
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
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym__mustache_statement_end,
    ACTIONS(53), 1,
      sym_number_literal,
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(4), 6,
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
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(55), 1,
      sym__mustache_statement_end,
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
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
    ACTIONS(41), 1,
      sym_number_literal,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(2), 6,
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
    ACTIONS(59), 1,
      sym__mustache_statement_end,
    ACTIONS(61), 1,
      sym_number_literal,
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(7), 6,
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
    ACTIONS(63), 1,
      sym__mustache_statement_end,
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
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
    ACTIONS(65), 1,
      sym__mustache_statement_end,
    ACTIONS(67), 1,
      sym_number_literal,
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
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
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 1,
      sym_number_literal,
    STATE(14), 1,
      sym__identifier,
    ACTIONS(37), 2,
      sym_identifier,
      sym_helper_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    STATE(8), 6,
      sym_path_expression,
      sym__value,
      sym_sub_expression,
      sym_string_literal,
      sym_boolean_literal,
      aux_sym_mustache_statement_repeat1,
  [430] = 8,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      anon_sym_LT_SLASH,
    STATE(13), 1,
      sym_element_node_start,
    STATE(32), 1,
      sym_element_node_void,
    STATE(40), 1,
      sym_element_node_end,
    ACTIONS(73), 2,
      sym_comment,
      sym_text_node,
    STATE(15), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [458] = 3,
    ACTIONS(81), 1,
      anon_sym_DOT,
    ACTIONS(79), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(83), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [476] = 8,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      anon_sym_LT_SLASH,
    STATE(13), 1,
      sym_element_node_start,
    STATE(32), 1,
      sym_element_node_void,
    STATE(38), 1,
      sym_element_node_end,
    ACTIONS(85), 2,
      sym_comment,
      sym_text_node,
    STATE(24), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [504] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym__mustache_statement_start,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_element_node_start,
    STATE(32), 1,
      sym_element_node_void,
    ACTIONS(89), 2,
      sym_comment,
      sym_text_node,
    STATE(20), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [529] = 2,
    ACTIONS(91), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(93), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [544] = 2,
    ACTIONS(95), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(97), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [559] = 8,
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
    STATE(68), 1,
      sym_block_params,
    STATE(27), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [586] = 7,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_LT,
    ACTIONS(119), 1,
      sym__mustache_statement_start,
    STATE(13), 1,
      sym_element_node_start,
    STATE(32), 1,
      sym_element_node_void,
    ACTIONS(113), 2,
      sym_comment,
      sym_text_node,
    STATE(20), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_template_repeat1,
  [611] = 2,
    ACTIONS(122), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(124), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [626] = 2,
    ACTIONS(126), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(128), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [641] = 2,
    ACTIONS(130), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(132), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [656] = 7,
    ACTIONS(137), 1,
      anon_sym_LT,
    ACTIONS(140), 1,
      anon_sym_LT_SLASH,
    ACTIONS(142), 1,
      sym__mustache_statement_start,
    STATE(13), 1,
      sym_element_node_start,
    STATE(32), 1,
      sym_element_node_void,
    ACTIONS(134), 2,
      sym_comment,
      sym_text_node,
    STATE(24), 3,
      sym_element_node,
      sym_mustache_statement,
      aux_sym_element_node_repeat1,
  [681] = 2,
    ACTIONS(145), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(147), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [696] = 2,
    ACTIONS(149), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__mustache_statement_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(151), 5,
      sym_identifier,
      sym_helper_identifier,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
  [711] = 7,
    ACTIONS(103), 1,
      sym_attribute_name,
    ACTIONS(105), 1,
      anon_sym_as,
    ACTIONS(107), 1,
      sym__mustache_statement_start,
    ACTIONS(153), 1,
      anon_sym_GT,
    ACTIONS(155), 1,
      sym_comment,
    STATE(69), 1,
      sym_block_params,
    STATE(28), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [735] = 6,
    ACTIONS(157), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      sym_attribute_name,
    ACTIONS(162), 1,
      anon_sym_as,
    ACTIONS(164), 1,
      sym__mustache_statement_start,
    ACTIONS(167), 1,
      sym_comment,
    STATE(28), 3,
      sym_attribute_node,
      sym_mustache_statement,
      aux_sym_element_node_start_repeat1,
  [756] = 6,
    ACTIONS(107), 1,
      sym__mustache_statement_start,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      sym_number_literal,
    STATE(50), 2,
      sym_concat_statement,
      sym_mustache_statement,
    STATE(51), 2,
      sym__single_quote_concat_statement,
      sym__double_quote_concat_statement,
  [777] = 4,
    ACTIONS(176), 1,
      anon_sym_PIPE,
    STATE(58), 1,
      sym__identifier,
    ACTIONS(178), 2,
      sym_identifier,
      sym_helper_identifier,
    STATE(39), 2,
      sym_path_expression,
      aux_sym_block_params_repeat1,
  [792] = 2,
    ACTIONS(182), 1,
      anon_sym_LT,
    ACTIONS(180), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [803] = 2,
    ACTIONS(186), 1,
      anon_sym_LT,
    ACTIONS(184), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [814] = 2,
    ACTIONS(190), 1,
      anon_sym_LT,
    ACTIONS(188), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [825] = 4,
    ACTIONS(192), 1,
      anon_sym_PIPE,
    STATE(58), 1,
      sym__identifier,
    ACTIONS(194), 2,
      sym_identifier,
      sym_helper_identifier,
    STATE(34), 2,
      sym_path_expression,
      aux_sym_block_params_repeat1,
  [840] = 3,
    ACTIONS(201), 1,
      anon_sym_EQ,
    ACTIONS(199), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(197), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [853] = 2,
    ACTIONS(205), 1,
      anon_sym_LT,
    ACTIONS(203), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [864] = 2,
    ACTIONS(209), 1,
      anon_sym_LT,
    ACTIONS(207), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [875] = 2,
    ACTIONS(213), 1,
      anon_sym_LT,
    ACTIONS(211), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [886] = 4,
    ACTIONS(215), 1,
      anon_sym_PIPE,
    STATE(58), 1,
      sym__identifier,
    ACTIONS(178), 2,
      sym_identifier,
      sym_helper_identifier,
    STATE(34), 2,
      sym_path_expression,
      aux_sym_block_params_repeat1,
  [901] = 2,
    ACTIONS(219), 1,
      anon_sym_LT,
    ACTIONS(217), 5,
      sym_comment,
      ts_builtin_sym_end,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [912] = 4,
    ACTIONS(221), 1,
      anon_sym_SQUOTE,
    ACTIONS(223), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(225), 1,
      sym__mustache_statement_start,
    STATE(55), 2,
      sym_mustache_statement,
      aux_sym__single_quote_concat_statement_repeat1,
  [926] = 2,
    ACTIONS(229), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(227), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [936] = 2,
    ACTIONS(205), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(203), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [946] = 2,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(231), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [956] = 2,
    ACTIONS(190), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(188), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [966] = 4,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(240), 1,
      sym__mustache_statement_start,
    STATE(46), 2,
      sym_mustache_statement,
      aux_sym__double_quote_concat_statement_repeat1,
  [980] = 2,
    ACTIONS(245), 1,
      anon_sym_LT,
    ACTIONS(243), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [990] = 4,
    ACTIONS(225), 1,
      sym__mustache_statement_start,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    STATE(41), 2,
      sym_mustache_statement,
      aux_sym__single_quote_concat_statement_repeat1,
  [1004] = 4,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(255), 1,
      sym__mustache_statement_start,
    STATE(57), 2,
      sym_mustache_statement,
      aux_sym__double_quote_concat_statement_repeat1,
  [1018] = 2,
    ACTIONS(259), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(257), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1028] = 2,
    ACTIONS(263), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(261), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1038] = 2,
    ACTIONS(267), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(265), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1048] = 2,
    ACTIONS(271), 1,
      anon_sym_LT,
    ACTIONS(269), 4,
      sym_comment,
      sym_text_node,
      anon_sym_LT_SLASH,
      sym__mustache_statement_start,
  [1058] = 2,
    ACTIONS(275), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(273), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1068] = 4,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(282), 1,
      sym__mustache_statement_start,
    STATE(55), 2,
      sym_mustache_statement,
      aux_sym__single_quote_concat_statement_repeat1,
  [1082] = 2,
    ACTIONS(287), 2,
      sym_attribute_name,
      anon_sym_as,
    ACTIONS(285), 3,
      sym_comment,
      anon_sym_GT,
      sym__mustache_statement_start,
  [1092] = 4,
    ACTIONS(255), 1,
      sym__mustache_statement_start,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    STATE(46), 2,
      sym_mustache_statement,
      aux_sym__double_quote_concat_statement_repeat1,
  [1106] = 3,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(83), 2,
      sym_identifier,
      sym_helper_identifier,
  [1117] = 2,
    STATE(65), 1,
      sym__identifier,
    ACTIONS(295), 2,
      sym_identifier,
      sym_helper_identifier,
  [1125] = 2,
    ACTIONS(203), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(205), 2,
      anon_sym_DQUOTE,
      sym__mustache_statement_start,
  [1133] = 2,
    STATE(17), 1,
      sym__identifier,
    ACTIONS(297), 2,
      sym_identifier,
      sym_helper_identifier,
  [1141] = 2,
    ACTIONS(188), 1,
      sym__mustache_safe_double_quote_string_literal_content,
    ACTIONS(190), 2,
      anon_sym_DQUOTE,
      sym__mustache_statement_start,
  [1149] = 2,
    ACTIONS(203), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(205), 2,
      anon_sym_SQUOTE,
      sym__mustache_statement_start,
  [1157] = 2,
    ACTIONS(188), 1,
      sym__mustache_safe_single_quote_string_literal_content,
    ACTIONS(190), 2,
      anon_sym_SQUOTE,
      sym__mustache_statement_start,
  [1165] = 2,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(93), 2,
      sym_identifier,
      sym_helper_identifier,
  [1173] = 1,
    ACTIONS(299), 1,
      sym_tag_name,
  [1177] = 1,
    ACTIONS(301), 1,
      anon_sym_GT,
  [1181] = 1,
    ACTIONS(153), 1,
      anon_sym_GT,
  [1185] = 1,
    ACTIONS(303), 1,
      anon_sym_GT,
  [1189] = 1,
    ACTIONS(305), 1,
      anon_sym_GT,
  [1193] = 1,
    ACTIONS(307), 1,
      anon_sym_GT,
  [1197] = 1,
    ACTIONS(309), 1,
      anon_sym_PIPE,
  [1201] = 1,
    ACTIONS(311), 1,
      sym_tag_name,
  [1205] = 1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
  [1209] = 1,
    ACTIONS(315), 1,
      aux_sym__double_quote_string_literal_token1,
  [1213] = 1,
    ACTIONS(317), 1,
      aux_sym__single_quote_string_literal_token1,
  [1217] = 1,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
  [1221] = 1,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
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
  [SMALL_STATE(14)] = 458,
  [SMALL_STATE(15)] = 476,
  [SMALL_STATE(16)] = 504,
  [SMALL_STATE(17)] = 529,
  [SMALL_STATE(18)] = 544,
  [SMALL_STATE(19)] = 559,
  [SMALL_STATE(20)] = 586,
  [SMALL_STATE(21)] = 611,
  [SMALL_STATE(22)] = 626,
  [SMALL_STATE(23)] = 641,
  [SMALL_STATE(24)] = 656,
  [SMALL_STATE(25)] = 681,
  [SMALL_STATE(26)] = 696,
  [SMALL_STATE(27)] = 711,
  [SMALL_STATE(28)] = 735,
  [SMALL_STATE(29)] = 756,
  [SMALL_STATE(30)] = 777,
  [SMALL_STATE(31)] = 792,
  [SMALL_STATE(32)] = 803,
  [SMALL_STATE(33)] = 814,
  [SMALL_STATE(34)] = 825,
  [SMALL_STATE(35)] = 840,
  [SMALL_STATE(36)] = 853,
  [SMALL_STATE(37)] = 864,
  [SMALL_STATE(38)] = 875,
  [SMALL_STATE(39)] = 886,
  [SMALL_STATE(40)] = 901,
  [SMALL_STATE(41)] = 912,
  [SMALL_STATE(42)] = 926,
  [SMALL_STATE(43)] = 936,
  [SMALL_STATE(44)] = 946,
  [SMALL_STATE(45)] = 956,
  [SMALL_STATE(46)] = 966,
  [SMALL_STATE(47)] = 980,
  [SMALL_STATE(48)] = 990,
  [SMALL_STATE(49)] = 1004,
  [SMALL_STATE(50)] = 1018,
  [SMALL_STATE(51)] = 1028,
  [SMALL_STATE(52)] = 1038,
  [SMALL_STATE(53)] = 1048,
  [SMALL_STATE(54)] = 1058,
  [SMALL_STATE(55)] = 1068,
  [SMALL_STATE(56)] = 1082,
  [SMALL_STATE(57)] = 1092,
  [SMALL_STATE(58)] = 1106,
  [SMALL_STATE(59)] = 1117,
  [SMALL_STATE(60)] = 1125,
  [SMALL_STATE(61)] = 1133,
  [SMALL_STATE(62)] = 1141,
  [SMALL_STATE(63)] = 1149,
  [SMALL_STATE(64)] = 1157,
  [SMALL_STATE(65)] = 1165,
  [SMALL_STATE(66)] = 1173,
  [SMALL_STATE(67)] = 1177,
  [SMALL_STATE(68)] = 1181,
  [SMALL_STATE(69)] = 1185,
  [SMALL_STATE(70)] = 1189,
  [SMALL_STATE(71)] = 1193,
  [SMALL_STATE(72)] = 1197,
  [SMALL_STATE(73)] = 1201,
  [SMALL_STATE(74)] = 1205,
  [SMALL_STATE(75)] = 1209,
  [SMALL_STATE(76)] = 1213,
  [SMALL_STATE(77)] = 1217,
  [SMALL_STATE(78)] = 1221,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(76),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(75),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(14),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(12),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mustache_statement_repeat1, 2), SHIFT_REPEAT(25),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(20),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(66),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string_literal, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string_literal, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string_literal, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string_literal, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(24),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(66),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_repeat1, 2), SHIFT_REPEAT(5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_expression, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(35),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_node_start_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(11),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_node_start_repeat1, 2), SHIFT_REPEAT(28),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_end, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_end, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_params_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_params_repeat1, 2), SHIFT_REPEAT(58),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mustache_statement, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mustache_statement, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_void, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_void, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_concat_statement, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_concat_statement, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 4),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_concat_statement_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(46),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(6),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_node, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_node, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat_statement, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concat_statement, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_concat_statement, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_concat_statement, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_node_start, 5),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_node_start, 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_concat_statement, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_concat_statement, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__single_quote_concat_statement_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(55),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__single_quote_concat_statement_repeat1, 2), SHIFT_REPEAT(9),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_concat_statement, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_concat_statement, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_params, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [321] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
