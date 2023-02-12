#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_COLON = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_COMMA = 5,
  sym_category_identifier = 6,
  aux_sym_li_token1 = 7,
  anon_sym_PIPE = 8,
  sym_text = 9,
  sym_source_file = 10,
  sym_block = 11,
  sym_start_of_line = 12,
  sym_standard_header = 13,
  sym_category_header = 14,
  sym_categories = 15,
  sym_category = 16,
  sym_li = 17,
  sym_wrapped_text = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_categories_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [sym_category_identifier] = "category_identifier",
  [aux_sym_li_token1] = "li_token1",
  [anon_sym_PIPE] = "| ",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_category_identifier] = sym_category_identifier,
  [aux_sym_li_token1] = aux_sym_li_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [aux_sym_li_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'k') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == '|') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'k') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_li_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PIPE);
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
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 47},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 47},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 47},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 47},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_category_identifier] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym_block] = STATE(3),
    [sym_start_of_line] = STATE(11),
    [sym_standard_header] = STATE(12),
    [sym_category_header] = STATE(12),
    [sym_li] = STATE(12),
    [sym_wrapped_text] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(3),
    [aux_sym_li_token1] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(7),
  },
  [2] = {
    [sym_block] = STATE(2),
    [sym_start_of_line] = STATE(11),
    [sym_standard_header] = STATE(12),
    [sym_category_header] = STATE(12),
    [sym_li] = STATE(12),
    [sym_wrapped_text] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [aux_sym_li_token1] = ACTIONS(14),
    [anon_sym_PIPE] = ACTIONS(17),
  },
  [3] = {
    [sym_block] = STATE(2),
    [sym_start_of_line] = STATE(11),
    [sym_standard_header] = STATE(12),
    [sym_category_header] = STATE(12),
    [sym_li] = STATE(12),
    [sym_wrapped_text] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(20),
    [sym_identifier] = ACTIONS(3),
    [aux_sym_li_token1] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(22), 1,
      anon_sym_RBRACK,
    ACTIONS(24), 1,
      sym_category_identifier,
    STATE(4), 2,
      sym_category,
      aux_sym_categories_repeat1,
  [11] = 3,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    ACTIONS(29), 1,
      sym_category_identifier,
    STATE(4), 2,
      sym_category,
      aux_sym_categories_repeat1,
  [22] = 1,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_li_token1,
      anon_sym_PIPE,
  [29] = 2,
    ACTIONS(29), 1,
      sym_category_identifier,
    STATE(5), 2,
      sym_category,
      aux_sym_categories_repeat1,
  [37] = 3,
    ACTIONS(33), 1,
      anon_sym_COLON,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym_categories,
  [47] = 2,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    ACTIONS(37), 2,
      anon_sym_RBRACK,
      sym_category_identifier,
  [55] = 1,
    ACTIONS(41), 2,
      anon_sym_RBRACK,
      sym_category_identifier,
  [60] = 1,
    ACTIONS(43), 1,
      sym_text,
  [64] = 1,
    ACTIONS(45), 1,
      sym_text,
  [68] = 1,
    ACTIONS(47), 1,
      sym_text,
  [72] = 1,
    ACTIONS(49), 1,
      anon_sym_COLON,
  [76] = 1,
    ACTIONS(51), 1,
      sym_text,
  [80] = 1,
    ACTIONS(53), 1,
      sym_text,
  [84] = 1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
  [88] = 1,
    ACTIONS(57), 1,
      sym_text,
  [92] = 1,
    ACTIONS(59), 1,
      sym_text,
  [96] = 1,
    ACTIONS(61), 1,
      anon_sym_COLON,
  [100] = 1,
    ACTIONS(63), 1,
      sym_text,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 11,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 29,
  [SMALL_STATE(8)] = 37,
  [SMALL_STATE(9)] = 47,
  [SMALL_STATE(10)] = 55,
  [SMALL_STATE(11)] = 60,
  [SMALL_STATE(12)] = 64,
  [SMALL_STATE(13)] = 68,
  [SMALL_STATE(14)] = 72,
  [SMALL_STATE(15)] = 76,
  [SMALL_STATE(16)] = 80,
  [SMALL_STATE(17)] = 84,
  [SMALL_STATE(18)] = 88,
  [SMALL_STATE(19)] = 92,
  [SMALL_STATE(20)] = 96,
  [SMALL_STATE(21)] = 100,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_categories_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_categories_repeat1, 2), SHIFT_REPEAT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_of_line, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_header, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_li, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrapped_text, 2),
  [55] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category_header, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_categories, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
