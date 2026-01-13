cmake_minimum_required(VERSION 3.10)
project(MathTests C)

# Enable coverage flags for both compiler and linker
add_compile_options(--coverage -O0 -g)
add_link_options(--coverage)

# Define the executable
add_executable(test_runner math_utils.c test_main.c)

# Ensure headers in the current directory are accessible
target_include_directories(test_runner PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
