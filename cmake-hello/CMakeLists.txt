cmake_minimum_required(VERSION 3.5.0)
project(cmake-hello VERSION 0.1.0 LANGUAGES C CXX)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

set(CMAKE_C_FLAGS_RELEASE "-O2 -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG")

message(STATUS "CMake Debug flags: ${CMAKE_CXX_FLAGS_DEBUG}")
message(STATUS "CMake Release flags (C++): ${CMAKE_CXX_FLAGS_RELEASE}")
message(STATUS "CMake Release flags (C): ${CMAKE_C_FLAGS_RELEASE}")
message(STATUS "CMake RelWithDebInfo flags: ${CMAKE_CXX_FLAGS_RELWITHDEBINFO}")
message(STATUS "CMake MinSizeRel flags: ${CMAKE_CXX_FLAGS_MINSIZEREL}")
message(STATUS "Current CMake build type: ${CMAKE_BUILD_TYPE}")

message(STATUS "CMake option setting: ${CMAKE_OPTION}")
if (CMAKE_OPTION)
    message(STATUS "CMake option is ON")
else()
    message(STATUS "CMake option is OFF")
endif()

# Add definition for time accuracy bits, e.g, cmake .. -DIEE_TIME_ACCURACY_BITS=7
if (IEE_TIME_ACCURACY_BITS)
    message(STATUS "Time accuracy bits: ${IEE_TIME_ACCURACY_BITS}")
    add_definitions(-DIEE_TIME_ACCURACY_BITS=${IEE_TIME_ACCURACY_BITS})
else()
    add_definitions(-DIEE_TIME_ACCURACY_BITS=10)
endif()

# Add custom compiler options, e.g, cmake .. -DCUSTOM_OPTIONS="-DIEE_MMS_FOPER_DIS;-Dxxx"
set(CUSTOM_OPTIONS "" CACHE STRING "Custom compiler options")
if (CUSTOM_OPTIONS)
    message(STATUS "Custom compiler options: ${CUSTOM_OPTIONS}")
    add_definitions(${CUSTOM_OPTIONS})
endif()

add_executable(cmake-hello main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
