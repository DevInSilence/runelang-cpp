#include "lexer/kind.hh"

#include <ostream>

namespace rune::core {
std::ostream &operator<<(std::ostream &os, TokenKind kind) {
  switch (kind) {
    case TokenKind::kEof:
      os << "kEof";
      break;
  }
  return os;
}
}  // namespace rune::core