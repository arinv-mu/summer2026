# Semester 4 - C++ Setup Guide

## Overview
This directory contains all C++ learning material for Semester 4. The focus is on fundamentals, object-oriented programming, and STL/algorithms.

## Prerequisites
- Xcode Command Line Tools with Apple Clang (C++20 standard)
- CMake 3.20+ for build configuration
- Make build system
- VS Code with C/C++ extensions configured

## Quick Setup

### 1. Verify C++ Compiler
```bash
clang++ --version
cmake --version
make --version
```

### 2. Build with CMake
```bash
cd /Users/arinvashistha/summer2026/semester-4-cpp
mkdir -p build
cd build
cmake ..
make
```

### 3. Folder Structure

```
semester-4-cpp/
├── coursework/
│   ├── fundamentals/          # Syntax, classes, inheritance
│   ├── oop/                   # Polymorphism, virtual functions
│   └── stl-algorithms/        # Containers, algorithms, iterators
├── projects/
│   ├── game-engine/           # Simple 2D game engine
│   └── graphics-renderer/     # Graphics rendering project
├── exercises/
│   ├── fundamentals/          # Practice problems
│   ├── oop/                   # OOP challenges
│   └── stl-algorithms/        # STL exercises
├── CMakeLists.txt             # CMake build configuration
├── build/                     # Build artifacts (gitignored)
└── SETUP.md                   # This file
```

## Build Configuration (CMakeLists.txt)
The CMakeLists.txt includes:
- C++20 standard
- Compiler flags: -Wall -Wextra -g for debugging
- Include directories for headers
- Optional: SFML for graphics projects

## Common Commands

### Compile a single C++ file
```bash
clang++ -std=c++20 -Wall -Wextra coursework/fundamentals/hello.cpp -o hello
```

### Run compiled executable
```bash
./hello
```

### Build entire project
```bash
cd build
cmake ..
make
```

### Build with verbose output
```bash
make VERBOSE=1
```

### Clean build
```bash
rm -rf build/
```

## C++ Standard Library Overview
- **Containers**: vector, list, deque, set, map, unordered_set, unordered_map
- **Algorithms**: sort, find, transform, accumulate, etc.
- **Iterators**: forward, bidirectional, random access
- **Utilities**: pair, tuple, optional, variant

## Learning Path
1. **Week 1-2**: Fundamentals (classes, inheritance, constructors)
2. **Week 3-4**: OOP (polymorphism, virtual functions, abstract classes)
3. **Week 5-6**: STL & Algorithms (containers, algorithms, iterators)
4. **Week 7-8**: Projects (game engine, graphics renderer)

## Memory Management in C++
- Use RAII (Resource Acquisition Is Initialization)
- Prefer smart pointers: std::unique_ptr, std::shared_ptr
- Avoid raw pointers when possible
- Use std::vector instead of manual memory allocation

## Troubleshooting

### CMake not found
- Install: `brew install cmake`

### Compilation errors with C++20 features
- Verify clang++ version: `clang++ --version`
- Update Xcode CLT: `xcode-select --install`

### Template compilation errors
- Ensure templates are in header files or explicitly instantiated
- Check include paths in CMakeLists.txt

### Linking errors
- Ensure all .cpp files are added to CMakeLists.txt
- Check for missing library dependencies

## Next Steps
Start with coursework/fundamentals/ and follow the learning path sequentially.
