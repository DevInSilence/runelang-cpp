#include "lexer/location.hh"

#include <ostream>

namespace rune::core {
Location::Location(int line, int column, int index, int length)
    : line(line), column(column), index(index), length(length) {}

std::ostream &operator<<(std::ostream &os, Location location) {
  os << "Loc { line: " << location.line << ", column: " << location.column
     << ", index: " << location.index << ", length: " << location.length
     << " }";

  return os;
};
}  // namespace rune::core