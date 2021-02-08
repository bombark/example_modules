project(linuxprocess)
cmake_minimum_required(VERSION 2.9)

add_executable(test src/main.c)
target_link_libraries(test drv_accelerometer)
