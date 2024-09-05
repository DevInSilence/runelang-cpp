#ifndef CORE_LEXER_HH
#define CORE_LEXER_HH

#include <cstddef>
#include <vector>

#include "lexer/token.hh"
namespace rune::core {
class Lexer {
 private:
  std::vector<Token> tokens_;
  std::string source_;
  std::string filename_;
  std::size_t index_;

 public:
  Lexer(std::string source, std::string filename);

  std::vector<Token> lex();
};
}  // namespace rune::core

#endif