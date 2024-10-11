#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_conf = 1,
  anon_sym_EQ = 2,
  anon_sym_COLON = 3,
  sym_word = 4,
  sym_str = 5,
  sym_indent = 6,
  sym_dedent = 7,
  sym_newline = 8,
  sym_source_file = 9,
  sym_expr = 10,
  sym_statement = 11,
  sym_command = 12,
  sym_conf = 13,
  sym_var = 14,
  sym_fn = 15,
  sym_complex = 16,
  sym_arg = 17,
  sym_block = 18,
  sym_flow_control = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_complex_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_conf] = "conf",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [sym_word] = "word",
  [sym_str] = "str",
  [sym_indent] = "indent",
  [sym_dedent] = "dedent",
  [sym_newline] = "newline",
  [sym_source_file] = "source_file",
  [sym_expr] = "expr",
  [sym_statement] = "statement",
  [sym_command] = "command",
  [sym_conf] = "conf",
  [sym_var] = "var",
  [sym_fn] = "fn",
  [sym_complex] = "complex",
  [sym_arg] = "arg",
  [sym_block] = "block",
  [sym_flow_control] = "flow_control",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_complex_repeat1] = "complex_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_conf] = anon_sym_conf,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_word] = sym_word,
  [sym_str] = sym_str,
  [sym_indent] = sym_indent,
  [sym_dedent] = sym_dedent,
  [sym_newline] = sym_newline,
  [sym_source_file] = sym_source_file,
  [sym_expr] = sym_expr,
  [sym_statement] = sym_statement,
  [sym_command] = sym_command,
  [sym_conf] = sym_conf,
  [sym_var] = sym_var,
  [sym_fn] = sym_fn,
  [sym_complex] = sym_complex,
  [sym_arg] = sym_arg,
  [sym_block] = sym_block,
  [sym_flow_control] = sym_flow_control,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_complex_repeat1] = aux_sym_complex_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_conf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_str] = {
    .visible = true,
    .named = true,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_dedent] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_conf] = {
    .visible = true,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_complex] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_control] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_complex_repeat1] = {
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
  [6] = 3,
  [7] = 5,
  [8] = 4,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 19,
  [20] = 14,
  [21] = 19,
  [22] = 22,
  [23] = 13,
  [24] = 15,
  [25] = 25,
  [26] = 22,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(10);
      END_STATE();
    case 2:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_conf);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(10);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_str);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 3},
  [11] = {.lex_state = 1, .external_lex_state = 3},
  [12] = {.lex_state = 1, .external_lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0, .external_lex_state = 3},
  [17] = {.lex_state = 1, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 1, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0, .external_lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_conf] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym_expr] = STATE(2),
    [sym_statement] = STATE(22),
    [sym_command] = STATE(16),
    [sym_conf] = STATE(29),
    [sym_fn] = STATE(11),
    [sym_complex] = STATE(29),
    [sym_flow_control] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_conf] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      anon_sym_conf,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_fn,
    STATE(16), 1,
      sym_command,
    STATE(7), 2,
      sym_expr,
      aux_sym_source_file_repeat1,
    STATE(22), 2,
      sym_statement,
      sym_flow_control,
    STATE(29), 2,
      sym_conf,
      sym_complex,
  [28] = 8,
    ACTIONS(5), 1,
      anon_sym_conf,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(11), 1,
      sym_dedent,
    STATE(11), 1,
      sym_fn,
    STATE(18), 1,
      sym_command,
    STATE(5), 2,
      sym_expr,
      aux_sym_source_file_repeat1,
    STATE(26), 2,
      sym_statement,
      sym_flow_control,
    STATE(29), 2,
      sym_conf,
      sym_complex,
  [56] = 8,
    ACTIONS(5), 1,
      anon_sym_conf,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(13), 1,
      sym_dedent,
    STATE(11), 1,
      sym_fn,
    STATE(18), 1,
      sym_command,
    STATE(3), 2,
      sym_expr,
      aux_sym_source_file_repeat1,
    STATE(26), 2,
      sym_statement,
      sym_flow_control,
    STATE(29), 2,
      sym_conf,
      sym_complex,
  [84] = 8,
    ACTIONS(15), 1,
      anon_sym_conf,
    ACTIONS(18), 1,
      sym_word,
    ACTIONS(21), 1,
      sym_dedent,
    STATE(11), 1,
      sym_fn,
    STATE(18), 1,
      sym_command,
    STATE(5), 2,
      sym_expr,
      aux_sym_source_file_repeat1,
    STATE(26), 2,
      sym_statement,
      sym_flow_control,
    STATE(29), 2,
      sym_conf,
      sym_complex,
  [112] = 8,
    ACTIONS(5), 1,
      anon_sym_conf,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(23), 1,
      sym_dedent,
    STATE(11), 1,
      sym_fn,
    STATE(18), 1,
      sym_command,
    STATE(5), 2,
      sym_expr,
      aux_sym_source_file_repeat1,
    STATE(26), 2,
      sym_statement,
      sym_flow_control,
    STATE(29), 2,
      sym_conf,
      sym_complex,
  [140] = 8,
    ACTIONS(15), 1,
      anon_sym_conf,
    ACTIONS(18), 1,
      sym_word,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_fn,
    STATE(16), 1,
      sym_command,
    STATE(7), 2,
      sym_expr,
      aux_sym_source_file_repeat1,
    STATE(22), 2,
      sym_statement,
      sym_flow_control,
    STATE(29), 2,
      sym_conf,
      sym_complex,
  [168] = 8,
    ACTIONS(5), 1,
      anon_sym_conf,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(25), 1,
      sym_dedent,
    STATE(11), 1,
      sym_fn,
    STATE(18), 1,
      sym_command,
    STATE(6), 2,
      sym_expr,
      aux_sym_source_file_repeat1,
    STATE(26), 2,
      sym_statement,
      sym_flow_control,
    STATE(29), 2,
      sym_conf,
      sym_complex,
  [196] = 3,
    ACTIONS(27), 1,
      sym_word,
    ACTIONS(29), 2,
      sym_indent,
      sym_newline,
    STATE(10), 2,
      sym_arg,
      aux_sym_complex_repeat1,
  [208] = 3,
    ACTIONS(31), 1,
      sym_word,
    ACTIONS(34), 2,
      sym_indent,
      sym_newline,
    STATE(10), 2,
      sym_arg,
      aux_sym_complex_repeat1,
  [220] = 3,
    ACTIONS(27), 1,
      sym_word,
    ACTIONS(36), 2,
      sym_indent,
      sym_newline,
    STATE(9), 2,
      sym_arg,
      aux_sym_complex_repeat1,
  [232] = 2,
    ACTIONS(38), 1,
      anon_sym_COLON,
    ACTIONS(40), 3,
      sym_indent,
      sym_newline,
      sym_word,
  [241] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 2,
      anon_sym_conf,
      sym_word,
  [249] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 2,
      anon_sym_conf,
      sym_word,
  [257] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 2,
      anon_sym_conf,
      sym_word,
  [265] = 3,
    ACTIONS(54), 1,
      sym_indent,
    ACTIONS(56), 1,
      sym_newline,
    STATE(13), 1,
      sym_block,
  [275] = 1,
    ACTIONS(58), 3,
      sym_indent,
      sym_newline,
      sym_word,
  [281] = 3,
    ACTIONS(60), 1,
      sym_indent,
    ACTIONS(62), 1,
      sym_newline,
    STATE(23), 1,
      sym_block,
  [291] = 2,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 2,
      anon_sym_conf,
      sym_word,
  [299] = 2,
    ACTIONS(46), 1,
      sym_dedent,
    ACTIONS(48), 2,
      anon_sym_conf,
      sym_word,
  [307] = 2,
    ACTIONS(64), 1,
      sym_dedent,
    ACTIONS(66), 2,
      anon_sym_conf,
      sym_word,
  [315] = 2,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 2,
      anon_sym_conf,
      sym_word,
  [323] = 2,
    ACTIONS(42), 1,
      sym_dedent,
    ACTIONS(44), 2,
      anon_sym_conf,
      sym_word,
  [331] = 2,
    ACTIONS(50), 1,
      sym_dedent,
    ACTIONS(52), 2,
      anon_sym_conf,
      sym_word,
  [339] = 1,
    ACTIONS(72), 3,
      sym_indent,
      sym_newline,
      sym_word,
  [345] = 2,
    ACTIONS(68), 1,
      sym_dedent,
    ACTIONS(70), 2,
      anon_sym_conf,
      sym_word,
  [353] = 1,
    ACTIONS(74), 2,
      sym_indent,
      sym_newline,
  [358] = 2,
    ACTIONS(76), 1,
      sym_word,
    STATE(30), 1,
      sym_var,
  [365] = 1,
    ACTIONS(78), 2,
      sym_indent,
      sym_newline,
  [370] = 1,
    ACTIONS(80), 1,
      anon_sym_EQ,
  [374] = 1,
    ACTIONS(82), 1,
      anon_sym_EQ,
  [378] = 1,
    ACTIONS(84), 1,
      sym_word,
  [382] = 1,
    ACTIONS(86), 1,
      sym_str,
  [386] = 1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 140,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 196,
  [SMALL_STATE(10)] = 208,
  [SMALL_STATE(11)] = 220,
  [SMALL_STATE(12)] = 232,
  [SMALL_STATE(13)] = 241,
  [SMALL_STATE(14)] = 249,
  [SMALL_STATE(15)] = 257,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 275,
  [SMALL_STATE(18)] = 281,
  [SMALL_STATE(19)] = 291,
  [SMALL_STATE(20)] = 299,
  [SMALL_STATE(21)] = 307,
  [SMALL_STATE(22)] = 315,
  [SMALL_STATE(23)] = 323,
  [SMALL_STATE(24)] = 331,
  [SMALL_STATE(25)] = 339,
  [SMALL_STATE(26)] = 345,
  [SMALL_STATE(27)] = 353,
  [SMALL_STATE(28)] = 358,
  [SMALL_STATE(29)] = 365,
  [SMALL_STATE(30)] = 370,
  [SMALL_STATE(31)] = 374,
  [SMALL_STATE(32)] = 378,
  [SMALL_STATE(33)] = 382,
  [SMALL_STATE(34)] = 386,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_complex_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_complex_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_control, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_control, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conf, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [88] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_indent = 0,
  ts_external_token_dedent = 1,
  ts_external_token_newline = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_indent] = sym_indent,
  [ts_external_token_dedent] = sym_dedent,
  [ts_external_token_newline] = sym_newline,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_indent] = true,
    [ts_external_token_dedent] = true,
    [ts_external_token_newline] = true,
  },
  [2] = {
    [ts_external_token_dedent] = true,
  },
  [3] = {
    [ts_external_token_indent] = true,
    [ts_external_token_newline] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_scenario_external_scanner_create(void);
void tree_sitter_scenario_external_scanner_destroy(void *);
bool tree_sitter_scenario_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_scenario_external_scanner_serialize(void *, char *);
void tree_sitter_scenario_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_scenario(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_scenario_external_scanner_create,
      tree_sitter_scenario_external_scanner_destroy,
      tree_sitter_scenario_external_scanner_scan,
      tree_sitter_scenario_external_scanner_serialize,
      tree_sitter_scenario_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
