project(sensor)
cmake_minimum_required(VERSION 2.9)

# Compile the library
include_directories("./include")
add_library(sensor STATIC ./src/sensor.cpp)


# Propagation of include directories
target_include_directories(sensor PUBLIC "${CMAKE_CURRENT_LIST_DIR}/include")
