cmake_minimum_required(VERSION 3.5.0)
project(cmake-find VERSION 0.1.0 LANGUAGES C CXX)

# First locate module as module mode.
find_package(Git)
find_package(Python)
message(STATUS "Find git: ${GIT_FOUND}")
message(STATUS "Find python: ${PYTHON_FOUND}")

# Second locate module as config mode.
find_package(MathFunctions 1.0.0 REQUIRED)
if (MathFunctions_FOUND)
    message(STATUS "Find MathFunctions: ${MathFunctions_DIR}")
else()
    message("MathFunctions not found")
endif()

add_executable(cmake-find main.cpp)

# Use find library in target link.
target_link_libraries(
    cmake-find 
    PUBLIC 
    MathFunctions
)
