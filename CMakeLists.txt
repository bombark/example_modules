project(sensor)
cmake_minimum_required(VERSION 2.9)

add_subdirectory(lib_math)
add_subdirectory(dev_accelerometer)
add_subdirectory(drv_accelerometer)
add_subdirectory(proc_test)


#file(COPY ${CMAKE_CURRENT_BINARY_DIR}/dev_accelerometer/accelerometer DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
#file(COPY ${CMAKE_CURRENT_BINARY_DIR}/proc_test/test DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
