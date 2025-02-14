cmake_minimum_required(VERSION 3.12)
project(calc)

# Create a static library
add_library(maths STATIC adder.cpp)

# Define macro for static linking
target_compile_definitions(maths PRIVATE MATHS_STATIC)

# Create the executable
add_executable(calc calc.cpp)

# Link the library to the executable
target_link_libraries(calc maths)
