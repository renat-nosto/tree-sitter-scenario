#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_conf = 2,
  anon_sym_EQ = 3,
  anon_sym_COLON = 4,
  sym_word = 5,
  sym_str = 6,
  sym_indent = 7,
  sym_dedent = 8,
  sym_newline = 9,
  sym_source_file = 10,
  sym_expr = 11,
  sym_statement = 12,
  sym_command = 13,
  sym_conf = 14,
  sym_var = 15,
  sym_fn = 16,
  sym_complex = 17,
  sym_arg = 18,
  sym_block = 19,
  sym_flow_control = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_complex_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
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
  [sym_comment] = sym_comment,
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
  [sym_comment] = {
    .visible = true,
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
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
  [19] = 14,
  [20] = 20,
  [21] = 16,
  [22] = 20,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
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
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(12);
      END_STATE();
    case 2:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_conf);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(12);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_str);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(13);
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
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1, .external_lex_state = 3},
  [24] = {.lex_state = 0, .external_lex_state = 3},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 1, .external_lex_state = 3},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0, .external_lex_state = 3},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_conf] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym_expr] = STATE(2),
    [sym_statement] = STATE(22),
    [sym_command] = STATE(24),
    [sym_conf] = STATE(28),
    [sym_fn] = STATE(10),
    [sym_complex] = STATE(28),
    [sym_flow_control] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_conf] = ACTIONS(7),
    [sym_word] = ACTIONS(9),
  },
  [2] = {
    [sym_expr] = STATE(7),
    [sym_statement] = STATE(22),
    [sym_command] = STATE(24),
    [sym_conf] = STATE(28),
    [sym_fn] = STATE(10),
    [sym_complex] = STATE(28),
    [sym_flow_control] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_comment] = ACTIONS(5),
    [anon_sym_conf] = ACTIONS(7),
    [sym_word] = ACTIONS(9),
  },
  [3] = {
    [sym_expr] = STATE(5),
    [sym_statement] = STATE(20),
    [sym_command] = STATE(25),
    [sym_conf] = STATE(28),
    [sym_fn] = STATE(10),
    [sym_complex] = STATE(28),
    [sym_flow_control] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(13),
    [anon_sym_conf] = ACTIONS(7),
    [sym_word] = ACTIONS(9),
    [sym_dedent] = ACTIONS(15),
  },
  [4] = {
    [sym_expr] = STATE(3),
    [sym_statement] = STATE(20),
    [sym_command] = STATE(25),
    [sym_conf] = STATE(28),
    [sym_fn] = STATE(10),
    [sym_complex] = STATE(28),
    [sym_flow_control] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(3),
    [sym_comment] = ACTIONS(13),
    [anon_sym_conf] = ACTIONS(7),
    [sym_word] = ACTIONS(9),
    [sym_dedent] = ACTIONS(17),
  },
  [5] = {
    [sym_expr] = STATE(5),
    [sym_statement] = STATE(20),
    [sym_command] = STATE(25),
    [sym_conf] = STATE(28),
    [sym_fn] = STATE(10),
    [sym_complex] = STATE(28),
    [sym_flow_control] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(19),
    [anon_sym_conf] = ACTIONS(22),
    [sym_word] = ACTIONS(25),
    [sym_dedent] = ACTIONS(28),
  },
  [6] = {
    [sym_expr] = STATE(5),
    [sym_statement] = STATE(20),
    [sym_command] = STATE(25),
    [sym_conf] = STATE(28),
    [sym_fn] = STATE(10),
    [sym_complex] = STATE(28),
    [sym_flow_control] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(13),
    [anon_sym_conf] = ACTIONS(7),
    [sym_word] = ACTIONS(9),
    [sym_dedent] = ACTIONS(30),
  },
  [7] = {
    [sym_expr] = STATE(7),
    [sym_statement] = STATE(22),
    [sym_command] = STATE(24),
    [sym_conf] = STATE(28),
    [sym_fn] = STATE(10),
    [sym_complex] = STATE(28),
    [sym_flow_control] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(28),
    [sym_comment] = ACTIONS(32),
    [anon_sym_conf] = ACTIONS(22),
    [sym_word] = ACTIONS(25),
  },
  [8] = {
    [sym_expr] = STATE(6),
    [sym_statement] = STATE(20),
    [sym_command] = STATE(25),
    [sym_conf] = STATE(28),
    [sym_fn] = STATE(10),
    [sym_complex] = STATE(28),
    [sym_flow_control] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(13),
    [anon_sym_conf] = ACTIONS(7),
    [sym_word] = ACTIONS(9),
    [sym_dedent] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(37), 1,
      sym_word,
    ACTIONS(39), 2,
      sym_indent,
      sym_newline,
    STATE(11), 2,
      sym_arg,
      aux_sym_complex_repeat1,
  [12] = 3,
    ACTIONS(37), 1,
      sym_word,
    ACTIONS(41), 2,
      sym_indent,
      sym_newline,
    STATE(9), 2,
      sym_arg,
      aux_sym_complex_repeat1,
  [24] = 3,
    ACTIONS(43), 1,
      sym_word,
    ACTIONS(46), 2,
      sym_indent,
      sym_newline,
    STATE(11), 2,
      sym_arg,
      aux_sym_complex_repeat1,
  [36] = 2,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(50), 2,
      anon_sym_conf,
      sym_word,
  [45] = 2,
    ACTIONS(48), 2,
      sym_dedent,
      sym_comment,
    ACTIONS(50), 2,
      anon_sym_conf,
      sym_word,
  [54] = 2,
    ACTIONS(52), 2,
      sym_dedent,
      sym_comment,
    ACTIONS(54), 2,
      anon_sym_conf,
      sym_word,
  [63] = 2,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(58), 2,
      anon_sym_conf,
      sym_word,
  [72] = 2,
    ACTIONS(60), 2,
      sym_dedent,
      sym_comment,
    ACTIONS(62), 2,
      anon_sym_conf,
      sym_word,
  [81] = 2,
    ACTIONS(64), 1,
      anon_sym_COLON,
    ACTIONS(66), 3,
      sym_indent,
      sym_newline,
      sym_word,
  [90] = 2,
    ACTIONS(56), 2,
      sym_dedent,
      sym_comment,
    ACTIONS(58), 2,
      anon_sym_conf,
      sym_word,
  [99] = 2,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(54), 2,
      anon_sym_conf,
      sym_word,
  [108] = 2,
    ACTIONS(68), 2,
      sym_dedent,
      sym_comment,
    ACTIONS(70), 2,
      anon_sym_conf,
      sym_word,
  [117] = 2,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(62), 2,
      anon_sym_conf,
      sym_word,
  [126] = 2,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(70), 2,
      anon_sym_conf,
      sym_word,
  [135] = 1,
    ACTIONS(72), 3,
      sym_indent,
      sym_newline,
      sym_word,
  [141] = 3,
    ACTIONS(74), 1,
      sym_indent,
    ACTIONS(76), 1,
      sym_newline,
    STATE(12), 1,
      sym_block,
  [151] = 3,
    ACTIONS(78), 1,
      sym_indent,
    ACTIONS(80), 1,
      sym_newline,
    STATE(13), 1,
      sym_block,
  [161] = 1,
    ACTIONS(82), 3,
      sym_indent,
      sym_newline,
      sym_word,
  [167] = 1,
    ACTIONS(84), 2,
      sym_indent,
      sym_newline,
  [172] = 1,
    ACTIONS(86), 2,
      sym_indent,
      sym_newline,
  [177] = 2,
    ACTIONS(88), 1,
      sym_word,
    STATE(34), 1,
      sym_var,
  [184] = 1,
    ACTIONS(90), 1,
      anon_sym_EQ,
  [188] = 1,
    ACTIONS(92), 1,
      sym_word,
  [192] = 1,
    ACTIONS(94), 1,
      sym_str,
  [196] = 1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
  [200] = 1,
    ACTIONS(98), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 12,
  [SMALL_STATE(11)] = 24,
  [SMALL_STATE(12)] = 36,
  [SMALL_STATE(13)] = 45,
  [SMALL_STATE(14)] = 54,
  [SMALL_STATE(15)] = 63,
  [SMALL_STATE(16)] = 72,
  [SMALL_STATE(17)] = 81,
  [SMALL_STATE(18)] = 90,
  [SMALL_STATE(19)] = 99,
  [SMALL_STATE(20)] = 108,
  [SMALL_STATE(21)] = 117,
  [SMALL_STATE(22)] = 126,
  [SMALL_STATE(23)] = 135,
  [SMALL_STATE(24)] = 141,
  [SMALL_STATE(25)] = 151,
  [SMALL_STATE(26)] = 161,
  [SMALL_STATE(27)] = 167,
  [SMALL_STATE(28)] = 172,
  [SMALL_STATE(29)] = 177,
  [SMALL_STATE(30)] = 184,
  [SMALL_STATE(31)] = 188,
  [SMALL_STATE(32)] = 192,
  [SMALL_STATE(33)] = 196,
  [SMALL_STATE(34)] = 200,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex, 1, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_complex_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_complex_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_control, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_control, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conf, 4, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [96] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
