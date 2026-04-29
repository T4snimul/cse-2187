#!/bin/sh

# Exit immediately if any command fails
set -e

# Create build directory if it doesn't exist
# This prevents you from manually creating it
mkdir -p build

# Change into the build directory
# CMake generates files here, keeping your source tree clean
cd build

# Run CMake to generate build files using the Ninja generator
# -G "Ninja": Use Ninja as the build system for faster builds
# -DCMAKE_BUILD_TYPE=Debug: Set the build type to Debug for debugging symbols
# ..: Point to the parent directory where CMakeLists.txt is located
cmake -G "Ninja" -DCMAKE_BUILD_TYPE=Debug ..

# Build the project using Ninja
# This compiles all source files and creates the executable
ninja
