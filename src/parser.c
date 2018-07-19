#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 33
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH = 1,
  aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH = 2,
  aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH = 3,
  sym_eq_divider = 4,
  sym_dash_divider = 5,
  sym__newline = 6,
  sym_heading_name = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  sym_identifier = 10,
  sym_program = 11,
  sym_test = 12,
  sym_header = 13,
  sym_body = 14,
  sym_s_expresion = 15,
  sym__term = 16,
  sym_group = 17,
  aux_sym_program_repeat1 = 18,
  aux_sym_test_repeat1 = 19,
  aux_sym_body_repeat1 = 20,
  aux_sym_group_repeat1 = 21,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH] = "/[^\\n]/",
  [aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = "/\\n[^\\-]/",
  [aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH] = "/\\n\\-[^-]/",
  [sym_eq_divider] = "eq_divider",
  [sym_dash_divider] = "dash_divider",
  [sym__newline] = "_newline",
  [sym_heading_name] = "heading_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [sym_program] = "program",
  [sym_test] = "test",
  [sym_header] = "header",
  [sym_body] = "body",
  [sym_s_expresion] = "s_expresion",
  [sym__term] = "_term",
  [sym_group] = "group",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_test_repeat1] = "test_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_group_repeat1] = "group_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_eq_divider] = {
    .visible = true,
    .named = true,
  },
  [sym_dash_divider] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_heading_name] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_s_expresion] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if ((lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(10);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if ((lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(10);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_dash_divider);
      if (lookahead == '-')
        ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH);
      END_STATE();
    case 8:
      if (lookahead == '=')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_eq_divider);
      if (lookahead == '=')
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\r')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 13:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\r')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(11);
      END_STATE();
    case 14:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(14);
      END_STATE();
    case 15:
      if (lookahead == '\n')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == '\n')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(7);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(20);
      if (lookahead != 0 &&
          lookahead != '=')
        ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_heading_name);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_heading_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=')
        ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\r')
        ADVANCE(24);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(23);
      if (lookahead != 0 &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\r')
        ADVANCE(24);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(23);
      if (lookahead != 0 &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(10);
      END_STATE();
    case 25:
      if (lookahead == '\n')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(25);
      END_STATE();
    case 26:
      if (lookahead == '\n')
        ADVANCE(26);
      if (lookahead == '-')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(25);
      END_STATE();
    case 27:
      if (lookahead == '-')
        ADVANCE(6);
      END_STATE();
    case 28:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      if (lookahead != 0 &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(29);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 28},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH] = ACTIONS(1),
    [sym_eq_divider] = ACTIONS(1),
    [sym_dash_divider] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(3),
    [sym_test] = STATE(5),
    [sym_header] = STATE(4),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_eq_divider] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
  },
  [2] = {
    [sym__newline] = ACTIONS(9),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(11),
  },
  [4] = {
    [sym_body] = STATE(8),
    [aux_sym_body_repeat1] = STATE(9),
    [aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH] = ACTIONS(13),
    [aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(13),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH] = ACTIONS(13),
    [sym_dash_divider] = ACTIONS(15),
  },
  [5] = {
    [sym_test] = STATE(10),
    [sym_header] = STATE(4),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_eq_divider] = ACTIONS(5),
    [sym__newline] = ACTIONS(19),
  },
  [6] = {
    [sym_heading_name] = ACTIONS(21),
  },
  [7] = {
    [sym_s_expresion] = STATE(13),
    [sym__term] = STATE(14),
    [sym_group] = STATE(14),
    [aux_sym_test_repeat1] = STATE(15),
    [sym__newline] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
  },
  [8] = {
    [sym_dash_divider] = ACTIONS(29),
  },
  [9] = {
    [aux_sym_body_repeat1] = STATE(17),
    [aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH] = ACTIONS(31),
    [aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(31),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH] = ACTIONS(31),
    [sym_dash_divider] = ACTIONS(33),
  },
  [10] = {
    [sym_test] = STATE(10),
    [sym_header] = STATE(4),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_eq_divider] = ACTIONS(37),
    [sym__newline] = ACTIONS(40),
  },
  [11] = {
    [sym__newline] = ACTIONS(43),
  },
  [12] = {
    [sym__term] = STATE(21),
    [sym_group] = STATE(21),
    [aux_sym_group_repeat1] = STATE(21),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_eq_divider] = ACTIONS(53),
    [sym__newline] = ACTIONS(51),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_eq_divider] = ACTIONS(57),
    [sym__newline] = ACTIONS(55),
  },
  [15] = {
    [sym_s_expresion] = STATE(22),
    [sym__term] = STATE(14),
    [sym_group] = STATE(14),
    [aux_sym_test_repeat1] = STATE(23),
    [sym__newline] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
  },
  [16] = {
    [sym_s_expresion] = STATE(22),
    [sym__term] = STATE(14),
    [sym_group] = STATE(14),
    [aux_sym_test_repeat1] = STATE(24),
    [sym__newline] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
  },
  [17] = {
    [aux_sym_body_repeat1] = STATE(17),
    [aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH] = ACTIONS(63),
    [sym_dash_divider] = ACTIONS(66),
  },
  [18] = {
    [sym_eq_divider] = ACTIONS(68),
  },
  [19] = {
    [sym__term] = STATE(27),
    [sym_group] = STATE(27),
    [aux_sym_group_repeat1] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym_eq_divider] = ACTIONS(76),
    [sym__newline] = ACTIONS(74),
  },
  [21] = {
    [sym__term] = STATE(29),
    [sym_group] = STATE(29),
    [aux_sym_group_repeat1] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(78),
    [sym_identifier] = ACTIONS(80),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_eq_divider] = ACTIONS(84),
    [sym__newline] = ACTIONS(82),
  },
  [23] = {
    [aux_sym_test_repeat1] = STATE(23),
    [sym__newline] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(89),
    [sym_identifier] = ACTIONS(89),
  },
  [24] = {
    [sym_s_expresion] = STATE(30),
    [sym__term] = STATE(14),
    [sym_group] = STATE(14),
    [aux_sym_test_repeat1] = STATE(23),
    [sym__newline] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
  },
  [25] = {
    [sym__newline] = ACTIONS(91),
  },
  [26] = {
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_RPAREN] = ACTIONS(74),
    [sym_identifier] = ACTIONS(74),
  },
  [27] = {
    [sym__term] = STATE(29),
    [sym_group] = STATE(29),
    [aux_sym_group_repeat1] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(93),
    [sym_identifier] = ACTIONS(80),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_eq_divider] = ACTIONS(97),
    [sym__newline] = ACTIONS(95),
  },
  [29] = {
    [sym__term] = STATE(29),
    [sym_group] = STATE(29),
    [aux_sym_group_repeat1] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(102),
    [sym_identifier] = ACTIONS(104),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_eq_divider] = ACTIONS(109),
    [sym__newline] = ACTIONS(107),
  },
  [31] = {
    [aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH] = ACTIONS(111),
    [sym_dash_divider] = ACTIONS(111),
  },
  [32] = {
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [sym_identifier] = ACTIONS(95),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [13] = {.count = 1, .reusable = false}, SHIFT(9),
  [15] = {.count = 1, .reusable = false}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(15),
  [25] = {.count = 1, .reusable = false}, SHIFT(12),
  [27] = {.count = 1, .reusable = false}, SHIFT(14),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = false}, SHIFT(17),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym_body, 1),
  [35] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [37] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [43] = {.count = 1, .reusable = true}, SHIFT(18),
  [45] = {.count = 1, .reusable = true}, SHIFT(19),
  [47] = {.count = 1, .reusable = true}, SHIFT(20),
  [49] = {.count = 1, .reusable = true}, SHIFT(21),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_test, 3),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_test, 3),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_s_expresion, 1),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_s_expresion, 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(23),
  [61] = {.count = 1, .reusable = true}, SHIFT(24),
  [63] = {.count = 2, .reusable = false}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(17),
  [66] = {.count = 1, .reusable = false}, REDUCE(aux_sym_body_repeat1, 2),
  [68] = {.count = 1, .reusable = true}, SHIFT(25),
  [70] = {.count = 1, .reusable = true}, SHIFT(26),
  [72] = {.count = 1, .reusable = true}, SHIFT(27),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_group, 2),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym_group, 2),
  [78] = {.count = 1, .reusable = true}, SHIFT(28),
  [80] = {.count = 1, .reusable = true}, SHIFT(29),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_test, 4),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym_test, 4),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_test_repeat1, 2), SHIFT_REPEAT(23),
  [89] = {.count = 1, .reusable = false}, REDUCE(aux_sym_test_repeat1, 2),
  [91] = {.count = 1, .reusable = true}, SHIFT(31),
  [93] = {.count = 1, .reusable = true}, SHIFT(32),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_group, 3),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(19),
  [102] = {.count = 1, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(29),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_test, 5),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_test, 5),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_header, 6),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_test() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
