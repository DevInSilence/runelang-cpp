#include "rune-core/include/lexer/lexer.hh"

int main() {
  rune::core::Lexer lexer("filename", "source");
  auto tokens = lexer.lex();
  return 0;
}