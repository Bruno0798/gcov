cmake_minimum_required(VERSION 3.10)
project(MathTests C)

# 1. Add coverage flags to the compiler
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --coverage")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} --coverage")

# 2. Define the executable
add_executable(test_runner math_utils.c test_main.c)

# 3. Ensure the header file can be found
target_include_directories(test_runner PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
