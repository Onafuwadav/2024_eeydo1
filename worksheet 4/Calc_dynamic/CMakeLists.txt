cmake_minimum_required(VERSION 3.12 FATAL_ERROR)
project(calc)

# Create a shared (dynamic) library
add_library(maths SHARED adder.cpp)

# Ensure the library is linked correctly
target_include_directories(maths PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Define macro for DLL export/import
target_compile_definitions(maths PRIVATE BUILD_SHARED_LIBS)

# Create the executable
add_executable(calc calc.cpp)

# Link the executable with the shared library
target_link_libraries(calc PRIVATE maths)
