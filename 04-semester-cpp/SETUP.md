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
cd /Users/arinvashistha/summer2026/04-semester-cpp
mkdir -p build
cd build
cmake ..
make
```

### 3. Folder Structure

```
04-semester-cpp/
├── 01-coursework/
│   ├── 01-fundamentals/       # Syntax, classes, inheritance
│   ├── 02-oop/                # Polymorphism, virtual functions
│   └── 03-stl-algorithms/     # Containers, algorithms, iterators
├── 02-exercises/
│   ├── 01-fundamentals/       # Practice problems
│   ├── 02-oop/                # OOP challenges
│   └── 03-stl-algorithms/     # STL exercises
├── 03-projects/
│   ├── 01-game-engine/        # Simple 2D game engine
│   └── 02-graphics-renderer/  # Graphics rendering project
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
clang++ -std=c++20 -Wall -Wextra 01-coursework/01-fundamentals/hello.cpp -o hello
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
1. **Week 1-2**: Fundamentals (01-coursework/01-fundamentals/)
2. **Week 3-4**: OOP (01-coursework/02-oop/)
3. **Week 5-6**: STL & Algorithms (01-coursework/03-stl-algorithms/)
4. **Week 7-8**: Projects (03-projects/)

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
