project(linuxprocess)
cmake_minimum_required(VERSION 2.9)

add_executable(accelerometer src/main.c)
target_link_libraries(accelerometer czmq)
