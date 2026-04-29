# Specify the minimum version of CMake required
cmake_minimum_required(VERSION 3.5)

# Define the project name
project(HelloWorld)

# Set compiler flags for C++: enable all warnings, treat warnings as errors, use C++14 standard
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")

# Define the source directory path
set (source_dir "${PROJECT_SOURCE_DIR}/src/")

# Collect all .cpp files in the source directory
file (GLOB source_files "${source_dir}/*.cpp")

# Create an executable named HelloWorld from the collected source files
add_executable(HelloWorld ${source_files})
