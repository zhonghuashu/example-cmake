cmake_minimum_required(VERSION 3.5.0)
project(cmake-hello VERSION 0.1.0 LANGUAGES C CXX)

message(STATUS "CMake option setting: ${CMAKE_OPTION}")

if (CMAKE_OPTION)
    message(STATUS "CMake option is ON")
else()
    message(STATUS "CMake option is OFF")
endif()

add_executable(cmake-hello main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
