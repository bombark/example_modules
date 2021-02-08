project(drv_accelerometer)
cmake_minimum_required(VERSION 2.9)

add_library(drv_accelerometer STATIC src2virtual/accelerometer.c)
target_link_libraries(drv_accelerometer pthread czmq zmq)
target_include_directories(drv_accelerometer PUBLIC "${CMAKE_CURRENT_LIST_DIR}/include")
