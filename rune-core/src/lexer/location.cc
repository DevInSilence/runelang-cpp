#include "lexer/location.hh"

#include <ostream>

namespace rune::core {
Location::Location(std::size_t line, std::size_t column, std::size_t index,
                   std::size_t length)
    : line(line), column(column), index(index), length(length) {}

std::ostream &operator<<(std::ostream &os, Location location) {
  os << "Loc { line: " << location.line << ", column: " << location.column
     << ", index: " << location.index << ", length: " << location.length
     << " }";

  return os;
};
}  // namespace rune::core