#ifndef CORE_KIND_HH
#define CORE_KIND_HH

#include <iostream>

namespace rune::core {
enum class TokenKind {
  kEof,
};

std::ostream &operator<<(std::ostream &os, TokenKind kind);
}  // namespace rune::core

#endif