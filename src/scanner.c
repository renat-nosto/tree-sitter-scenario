#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"

#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum TokenType {
  INDENT,
  DEDENT,
  NEWLINE,
};
typedef struct {
  int indent;
} Scanner;

void *tree_sitter_scenario_external_scanner_create(void) {
  Scanner *scanner = calloc(1, sizeof(Scanner));
  return scanner;
}

void tree_sitter_scenario_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  free(scanner);
}

unsigned tree_sitter_scenario_external_scanner_serialize(void *payload,
                                                         char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  memcpy(buffer, scanner, sizeof(Scanner));
  return sizeof(Scanner);
}

void tree_sitter_scenario_external_scanner_deserialize(void *payload,
                                                       const char *buffer,
                                                       unsigned length) {
  //assert(length == sizeof(Scanner));
  // printf("length: %d\n", length);
  // printf("size: %d\n", sizeof(Scanner));
  if(length >= sizeof(Scanner)) {
  Scanner *scanner = (Scanner *)payload;
  memcpy(scanner, buffer, sizeof(Scanner));
  }
}

bool tree_sitter_scenario_external_scanner_scan(void *payload, TSLexer *lexer,
                                                const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;
  lexer->mark_end(lexer);

  bool found_end_of_line = false;
  uint32_t indent_length = 0;
  for (;;) {
    if (lexer->lookahead == '\n') {
      found_end_of_line = true;
      indent_length = 0;
      lexer->advance(lexer, true);
    } else if (lexer->lookahead == ' ') {
      indent_length++;
      lexer->advance(lexer, true);
    } else if (lexer->eof(lexer)) {
      indent_length = 0;
      found_end_of_line = true;
      break;
    } else {
      break;
    }
  }
  if (found_end_of_line) {
    if (valid_symbols[INDENT] && indent_length > scanner->indent) {
      scanner->indent = indent_length;
      lexer->result_symbol = INDENT;
      return true;
    }
    if ((valid_symbols[DEDENT] && indent_length < scanner->indent) ||
        (valid_symbols[DEDENT] && indent_length == 0)) {
      scanner->indent = indent_length;
      lexer->result_symbol = DEDENT;
      return true;
    }
    if (valid_symbols[NEWLINE]) {
      lexer->result_symbol = NEWLINE;
      return true;
    }
  }
  return false;
}
