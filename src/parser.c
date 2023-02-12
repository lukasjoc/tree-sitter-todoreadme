#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  sym_end_header = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_COMMA = 5,
  sym_category_identifier = 6,
  anon_sym_ = 7,
  sym_begin_li = 8,
  sym_begin_wrapped_text = 9,
  sym_text = 10,
  sym_source_file = 11,
  sym_block = 12,
  sym_start_of_line = 13,
  sym_standard_header = 14,
  sym_category_header = 15,
  sym_categories = 16,
  sym_category = 17,
  sym_li = 18,
  sym_wrapped_text = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_categories_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_end_header] = "end_header",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [sym_category_identifier] = "category_identifier",
  [anon_sym_] = " ",
  [sym_begin_li] = "begin_li",
  [sym_begin_wrapped_text] = "begin_wrapped_text",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_start_of_line] = "start_of_line",
  [sym_standard_header] = "standard_header",
  [sym_category_header] = "category_header",
  [sym_categories] = "categories",
  [sym_category] = "category",
  [sym_li] = "li",
  [sym_wrapped_text] = "wrapped_text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_categories_repeat1] = "categories_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_end_header] = sym_end_header,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_category_identifier] = sym_category_identifier,
  [anon_sym_] = anon_sym_,
  [sym_begin_li] = sym_begin_li,
  [sym_begin_wrapped_text] = sym_begin_wrapped_text,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_start_of_line] = sym_start_of_line,
  [sym_standard_header] = sym_standard_header,
  [sym_category_header] = sym_category_header,
  [sym_categories] = sym_categories,
  [sym_category] = sym_category,
  [sym_li] = sym_li,
  [sym_wrapped_text] = sym_wrapped_text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_categories_repeat1] = aux_sym_categories_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_end_header] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_category_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_begin_li] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_wrapped_text] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_start_of_line] = {
    .visible = true,
    .named = true,
  },
  [sym_standard_header] = {
    .visible = true,
    .named = true,
  },
  [sym_category_header] = {
    .visible = true,
    .named = true,
  },
  [sym_categories] = {
    .visible = true,
    .named = true,
  },
  [sym_category] = {
    .visible = true,
    .named = true,
  },
  [sym_li] = {
    .visible = true,
    .named = true,
  },
  [sym_wrapped_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_categories_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'k') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_end_header);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'k') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_begin_li);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_begin_wrapped_text);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 47},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 47},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 47},
  [18] = {.lex_state = 47},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 47},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_end_header] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_category_identifier] = ACTIONS(1),
    [sym_begin_li] = ACTIONS(1),
    [sym_begin_wrapped_text] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym_block] = STATE(3),
    [sym_start_of_line] = STATE(17),
    [sym_standard_header] = STATE(16),
    [sym_category_header] = STATE(16),
    [sym_li] = STATE(16),
    [sym_wrapped_text] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(3),
    [sym_begin_li] = ACTIONS(5),
    [sym_begin_wrapped_text] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(14), 1,
      sym_begin_li,
    ACTIONS(17), 1,
      sym_begin_wrapped_text,
    STATE(17), 1,
      sym_start_of_line,
    STATE(2), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    STATE(16), 4,
      sym_standard_header,
      sym_category_header,
      sym_li,
      sym_wrapped_text,
  [26] = 7,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(5), 1,
      sym_begin_li,
    ACTIONS(7), 1,
      sym_begin_wrapped_text,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_start_of_line,
    STATE(2), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    STATE(16), 4,
      sym_standard_header,
      sym_category_header,
      sym_li,
      sym_wrapped_text,
  [52] = 3,
    ACTIONS(22), 1,
      anon_sym_RBRACK,
    ACTIONS(24), 1,
      sym_category_identifier,
    STATE(4), 2,
      sym_category,
      aux_sym_categories_repeat1,
  [63] = 3,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    ACTIONS(29), 1,
      sym_category_identifier,
    STATE(4), 2,
      sym_category,
      aux_sym_categories_repeat1,
  [74] = 1,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym_begin_li,
      sym_begin_wrapped_text,
  [81] = 3,
    ACTIONS(33), 1,
      sym_end_header,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_categories,
  [91] = 2,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    ACTIONS(37), 2,
      anon_sym_RBRACK,
      sym_category_identifier,
  [99] = 2,
    ACTIONS(29), 1,
      sym_category_identifier,
    STATE(5), 2,
      sym_category,
      aux_sym_categories_repeat1,
  [107] = 1,
    ACTIONS(41), 2,
      anon_sym_RBRACK,
      sym_category_identifier,
  [112] = 1,
    ACTIONS(43), 1,
      sym_text,
  [116] = 1,
    ACTIONS(45), 1,
      sym_end_header,
  [120] = 1,
    ACTIONS(47), 1,
      sym_text,
  [124] = 1,
    ACTIONS(49), 1,
      anon_sym_,
  [128] = 1,
    ACTIONS(51), 1,
      sym_text,
  [132] = 1,
    ACTIONS(53), 1,
      sym_text,
  [136] = 1,
    ACTIONS(55), 1,
      sym_text,
  [140] = 1,
    ACTIONS(57), 1,
      sym_text,
  [144] = 1,
    ACTIONS(59), 1,
      sym_text,
  [148] = 1,
    ACTIONS(61), 1,
      sym_text,
  [152] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
  [156] = 1,
    ACTIONS(65), 1,
      sym_end_header,
  [160] = 1,
    ACTIONS(67), 1,
      anon_sym_,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 74,
  [SMALL_STATE(7)] = 81,
  [SMALL_STATE(8)] = 91,
  [SMALL_STATE(9)] = 99,
  [SMALL_STATE(10)] = 107,
  [SMALL_STATE(11)] = 112,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 120,
  [SMALL_STATE(14)] = 124,
  [SMALL_STATE(15)] = 128,
  [SMALL_STATE(16)] = 132,
  [SMALL_STATE(17)] = 136,
  [SMALL_STATE(18)] = 140,
  [SMALL_STATE(19)] = 144,
  [SMALL_STATE(20)] = 148,
  [SMALL_STATE(21)] = 152,
  [SMALL_STATE(22)] = 156,
  [SMALL_STATE(23)] = 160,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_categories_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_categories_repeat1, 2), SHIFT_REPEAT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_header, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_of_line, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category_header, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_li, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrapped_text, 3),
  [63] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_categories, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_todoreadme(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
