cmake_minimum_required(VERSION 3.10)
project(rune-core)

file(GLOB_RECURSE RUNE_CORE_SOURCES "src/*.cc")

add_library(rune-core ${RUNE_CORE_SOURCES})
target_include_directories(rune-core PUBLIC include)