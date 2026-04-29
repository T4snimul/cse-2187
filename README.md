# CSE 2187 ~ Software Engineering

## Overview

This repository contains coursework and projects for CSE 2187: Software Engineering. The course covers Object-Oriented Programming, Java fundamentals, software design principles, and software development methodologies.

## Projects

### HelloWorld C++ Project
A foundational C++ project demonstrating:
- **C++ Basics**: Console I/O, standard library usage
- **Build System**: CMake configuration and Ninja build system
- **Development Setup**: Headless environment configuration for VS Code Codespaces
- **Best Practices**: Clean build directory structure, automated build scripts

**[View Project Documentation →](Dev/HelloWorld/README.md)**

**Quick Start:**
```bash
cd Dev/HelloWorld
./build.sh
./build/src/Main
```

---

## Course Content & Topics

### 1. Object Oriented Programming (C++ & Java)
- [ ] Class and Object
- [ ] Inheritance
- [ ] Arrays of Objects
- [ ] Pointer to Objects
- [ ] C++ I/O Libraries
- [ ] C++ Streams
- [ ] Polymorphism
- [ ] OOP with C++

### 2. Java Fundamentals
- [ ] Introduction to Java
- [ ] Java Development Environment
- [ ] JVM (Java Virtual Machine)
- [ ] Advantages of Java over other programming languages
- [ ] Byte Codes
- [ ] Variables, Operators, and Data Types

### 3. Java Advanced Concepts
- [ ] Classes
- [ ] Threads
- [ ] Concept of Threading
- [ ] Execution of Java Programs in UNIX Operating System
- [ ] Introduction to Applets

### 4. Robotics Software
- [ ] Introduction to application software for Robot Programming

### 5. Software Design
- [ ] Software Life-cycle Models
- [ ] Software Requirements
- [ ] Object-Oriented Analysis and Design (UML)
- [ ] Software Integration and Testing
- [ ] Support Processes
- [ ] Software Quality

### 6. Software Development
- [ ] Software Specification
- [ ] Software Process
- [ ] Software Modularization
- [ ] Random Access File Systems
- [ ] Data Structures
  - [ ] Linked Lists
  - [ ] Queues
  - [ ] Stacks

## Environment Setup

This repository is configured for VS Code Codespaces with the following features:
- **Headless Build System**: Uses CMake and Ninja for CLI-based compilation
- **Automated Scripts**: Build scripts eliminate manual setup
- **Clean Architecture**: Organized project structure with isolated build directories

## Development Environment

- **OS**: Ubuntu 24.04.4 LTS (in dev container)
- **Build System**: CMake 3.28+
- **Build Generator**: Ninja
- **C++ Compiler**: GCC/G++
- **Editor**: VS Code with C/C++ extension

## Getting Started

1. Clone the repository
2. Navigate to a project directory (e.g., `Dev/HelloWorld/`)
3. Follow the project's README for setup instructions
4. Run the build script or build manually

## Resources

- [CMake Documentation](https://cmake.org/documentation/)
- [Ninja Build System](https://ninja-build.org/)
- [C++ Reference](https://en.cppreference.com/)
- [Java Documentation](https://docs.oracle.com/javase/)
