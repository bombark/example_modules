project(sensor)
cmake_minimum_required(VERSION 3.9)

add_library(thread STATIC src/main.cpp)
target_link_libraries(thread pthread sensor)
target_include_directories(thread PUBLIC "${CMAKE_CURRENT_LIST_DIR}/api")
