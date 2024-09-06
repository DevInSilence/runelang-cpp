cmake_minimum_required(VERSION 3.10)
project(runelang)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(rune-core)
add_executable(runelang main.cc)
target_link_libraries(runelang rune-core)