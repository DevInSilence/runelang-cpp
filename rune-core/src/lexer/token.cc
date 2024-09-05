#include "lexer/token.hh"

namespace rune::core {
Token::Token(TokenKind kind, std::string value, Location location)
    : kind_(kind), value_(value), location_(location) {}

std::ostream &operator<<(std::ostream &os, Token token) {
  os << "Token { kind: " << token.kind_ << ", value: " << token.value_
     << ", location: " << token.location_ << " }";

  return os;
}
}  // namespace rune::core