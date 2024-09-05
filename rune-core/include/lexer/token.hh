#ifndef RUNE_TOKEN_HH
#define RUNE_TOKEN_HH

#include <string>

#include "kind.hh"
#include "lexer/location.hh"

namespace rune::core {
class Token {
 private:
  TokenKind kind_;
  std::string value_;
  Location location_;

 public:
  Token(TokenKind kind, std::string value, Location location);

  friend std::ostream &operator<<(std::ostream &os, Token token);
};
}  // namespace rune::core

#endif