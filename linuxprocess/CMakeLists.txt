project(linuxprocess)
cmake_minimum_required(VERSION 2.9)

add_executable(linuxprocess src/main.cpp)
target_link_libraries(linuxprocess thread)
