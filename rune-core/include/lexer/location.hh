#ifndef CORE_LOCATION_HH
#define CORE_LOCATION_HH

#include <iostream>

namespace rune::core {
struct Location {
  std::size_t line, column;
  std::size_t index, length;

  Location(std::size_t line, std::size_t column, std::size_t index,
           std::size_t length);

  friend std::ostream &operator<<(std::ostream &os, Location location);
};
}  // namespace rune::core
#endif