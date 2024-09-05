#ifndef CORE_LOCATION_HH
#define CORE_LOCATION_HH

#include <iostream>

namespace rune::core {
struct Location {
  int line, column;
  int index, length;

  Location(int line, int column, int index, int length);

  friend std::ostream &operator<<(std::ostream &os, Location location);
};
}  // namespace rune::core
#endif