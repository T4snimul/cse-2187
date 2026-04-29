# HelloWorld C++ Project

A simple "Hello World" C++ project demonstrating how to set up and build a C++ application using CMake and Ninja build system in a headless environment (VS Code Codespaces).

## Project Structure

```
HelloWorld/
├── src/
│   └── Main.cpp           # Main C++ source file
├── CMakeLists.txt         # CMake build configuration
├── build.sh               # Automated build script
└── README.md              # This file
```

## Prerequisites

Before you begin, ensure you have the following installed:

- **CMake** (version 3.10 or higher)
- **Ninja** build system
- **C++ Compiler** (GCC or Clang)

### Install Dependencies

```bash
# Update package manager
sudo apt update

# Install CMake
sudo apt install cmake

# Install Ninja build system
sudo apt install ninja-build

# Install C++ compiler (if not already installed)
sudo apt install build-essential
```

### Verify Installation

```bash
cmake --version
ninja --version
g++ --version
```

## Building the Project

### Option 1: Using the Build Script (Recommended)

This is the easiest way to build the project:

```bash
./build.sh
```

The script will:
1. Create a `build/` directory if it doesn't exist
2. Run CMake to generate build files using Ninja
3. Compile the project using Ninja

### Option 2: Manual Build

If you prefer to build manually:

```bash
# Create and enter build directory
mkdir -p build
cd build

# Configure the project with CMake
cmake -G "Ninja" -DCMAKE_BUILD_TYPE=Debug ..

# Build using Ninja
ninja
```

## Running the Executable

After building, run the compiled executable:

```bash
./build/src/Main
```

The program will print "Hello World!" and wait for you to press Enter before closing.

## Build System Overview

### CMake
CMake is a cross-platform build system generator that reads `CMakeLists.txt` and generates build files for various build systems.

**Key CMake Options:**
- `-G "Ninja"` - Use Ninja as the build system (faster than Make)
- `-DCMAKE_BUILD_TYPE=Debug` - Enable debugging symbols

### Ninja
Ninja is a high-performance build system designed for speed and simplicity.

**Common Ninja Commands:**
```bash
ninja              # Build the default target
ninja -j 4         # Build using 4 parallel jobs
ninja clean        # Clean all build artifacts
ninja -t list      # List all available targets
```

## Project Files Explained

### Main.cpp
The main source file containing the entry point of the program:
- Includes `<iostream>` for console input/output
- Defines the `main()` function
- Prints "Hello World!" to the console
- Waits for user input before exiting

### CMakeLists.txt
The CMake configuration file that defines:
- Project name and version
- Required CMake version
- C++ standard (C++11 or higher)
- Executable target and source files
- Include directories

### build.sh
An automated build script that:
- Creates the build directory automatically
- Configures CMake with appropriate flags
- Compiles the project using Ninja

## Cleaning the Project

To remove all build artifacts:

```bash
rm -rf build/
```

Or use Ninja's clean command:

```bash
cd build
ninja clean
cd ..
```

## Troubleshooting

### CMake not found
```bash
sudo apt install cmake
```

### Ninja not found
```bash
sudo apt install ninja-build
```

### Permission denied when running build.sh
```bash
chmod +x build.sh
./build.sh
```

### Build fails with compiler errors
Ensure your C++ compiler is properly installed:
```bash
sudo apt install build-essential
```

## Development Workflow

1. **Edit source files** in the `src/` directory
2. **Run build script** to compile changes
3. **Test the executable** in the `build/` directory
4. **Repeat** as needed

## Tips & Best Practices

- Keep source code in the `src/` directory
- Build artifacts are isolated in the `build/` directory, keeping your source tree clean
- Use Debug build type during development for better debugging support
- Use Release build type for production builds (add `-DCMAKE_BUILD_TYPE=Release` to CMake)
- The `build/` directory can be safely deleted and regenerated anytime

## Next Steps

- Modify `Main.cpp` to add your own C++ code
- Update `CMakeLists.txt` to add more source files or libraries
- Explore CMake features for more complex projects

## Resources

- [CMake Documentation](https://cmake.org/documentation/)
- [Ninja Build System](https://ninja-build.org/)
- [C++ Reference](https://en.cppreference.com/)
