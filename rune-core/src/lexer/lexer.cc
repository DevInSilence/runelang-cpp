#include "lexer/lexer.hh"

namespace rune::core {
Lexer::Lexer(std::string filename, std::string source)
    : filename_(filename), source_(source), index_(0) {}

std::vector<Token> Lexer::lex() { throw std::runtime_error("Not implemented"); }
}  // namespace rune::core