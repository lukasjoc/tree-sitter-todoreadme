#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
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
  sym_text = 7,
  sym_source_file = 8,
  sym_block = 9,
  sym_header = 10,
  sym_standard_header = 11,
  sym_category_header = 12,
  sym_categories = 13,
  sym_category = 14,
  aux_sym_source_file_repeat1 = 15,
  aux_sym_categories_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [sym_category_identifier] = "category_identifier",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_header] = "header",
  [sym_standard_header] = "standard_header",
  [sym_category_header] = "category_header",
  [sym_categories] = "categories",
  [sym_category] = "category",
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
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_header] = sym_header,
  [sym_standard_header] = sym_standard_header,
  [sym_category_header] = sym_category_header,
  [sym_categories] = sym_categories,
  [sym_category] = sym_category,
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
  [sym_header] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '#' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'k') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_category_identifier);
      if (lookahead == '#' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0) ADVANCE(26);
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
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym_block] = STATE(2),
    [sym_header] = STATE(12),
    [sym_standard_header] = STATE(13),
    [sym_category_header] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_header,
    STATE(3), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    STATE(13), 2,
      sym_standard_header,
      sym_category_header,
  [18] = 5,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(12), 1,
      sym_header,
    STATE(3), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    STATE(13), 2,
      sym_standard_header,
      sym_category_header,
  [36] = 3,
    ACTIONS(12), 1,
      anon_sym_RBRACK,
    ACTIONS(14), 1,
      sym_category_identifier,
    STATE(5), 2,
      sym_category,
      aux_sym_categories_repeat1,
  [47] = 3,
    ACTIONS(16), 1,
      anon_sym_RBRACK,
    ACTIONS(18), 1,
      sym_category_identifier,
    STATE(5), 2,
      sym_category,
      aux_sym_categories_repeat1,
  [58] = 3,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(15), 1,
      sym_categories,
  [68] = 2,
    ACTIONS(14), 1,
      sym_category_identifier,
    STATE(4), 2,
      sym_category,
      aux_sym_categories_repeat1,
  [76] = 2,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    ACTIONS(25), 2,
      anon_sym_RBRACK,
      sym_category_identifier,
  [84] = 1,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [89] = 1,
    ACTIONS(31), 2,
      anon_sym_RBRACK,
      sym_category_identifier,
  [94] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [98] = 1,
    ACTIONS(35), 1,
      sym_text,
  [102] = 1,
    ACTIONS(37), 1,
      sym_text,
  [106] = 1,
    ACTIONS(39), 1,
      sym_text,
  [110] = 1,
    ACTIONS(41), 1,
      anon_sym_COLON,
  [114] = 1,
    ACTIONS(43), 1,
      sym_text,
  [118] = 1,
    ACTIONS(45), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 58,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 84,
  [SMALL_STATE(10)] = 89,
  [SMALL_STATE(11)] = 94,
  [SMALL_STATE(12)] = 98,
  [SMALL_STATE(13)] = 102,
  [SMALL_STATE(14)] = 106,
  [SMALL_STATE(15)] = 110,
  [SMALL_STATE(16)] = 114,
  [SMALL_STATE(17)] = 118,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [12] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_categories_repeat1, 2),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_categories_repeat1, 2), SHIFT_REPEAT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 2),
  [33] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_header, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category_header, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_categories, 3),
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
