# C++ Setup on Linux

A simple "Hello World" C++ project using CMake and Ninja.

## Project Structure

```
HelloWorld/
├── src/Main.cpp      # Main source file
├── CMakeLists.txt    # CMake configuration
├── build.sh          # Build script
└── README.md         # This file
```

## Prerequisites

Install dependencies:
```bash
sudo apt update
sudo apt install cmake ninja-build build-essential
```

## Building

Run the build script:
```bash
./build.sh
```

Or manually:
```bash
mkdir -p build && cd build
cmake -G "Ninja" -DCMAKE_BUILD_TYPE=Debug ..
ninja
```

## Running

```bash
./build/Main
```

## Notes

- Uses Ninja for fast builds
- Build artifacts go in `build/` directory
- Clean with `rm -rf build/` or `ninja clean`
