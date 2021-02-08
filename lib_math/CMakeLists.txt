project(math)
cmake_minimum_required(VERSION 2.9)

include_directories(./include)
add_library(math STATIC src/math.c src/vetflt.c)
