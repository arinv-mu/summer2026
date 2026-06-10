# Semester 3 - C Setup Guide

## Overview
This directory contains all C learning material for Semester 3. The focus is on fundamentals, pointers/memory management, and data structures.

## Prerequisites
- Xcode Command Line Tools with Apple Clang (C17 standard)
- CMake 3.20+ for build configuration
- Make build system
- VS Code with C/C++ extensions configured

## Quick Setup

### 1. Verify C Compiler
```bash
clang --version
cmake --version
make --version
```

### 2. Build with CMake
```bash
cd /Users/arinvashistha/summer2026/semester-3-c
mkdir -p build
cd build
cmake ..
make
```

### 3. Folder Structure

```
semester-3-c/
├── coursework/
│   ├── fundamentals/          # Syntax, functions, basic I/O
│   ├── pointers-memory/       # Pointers, malloc, free, valgrind
│   └── data-structures/       # Arrays, structs, linked lists
├── projects/
│   ├── shell-interpreter/     # Simple shell implementation
│   └── data-structures-lib/   # Reusable C library
├── exercises/
│   ├── fundamentals/          # Practice problems
│   ├── pointers-memory/       # Memory management challenges
│   └── data-structures/       # DS implementation
├── CMakeLists.txt             # CMake build configuration
├── build/                     # Build artifacts (gitignored)
└── SETUP.md                   # This file
```

## Build Configuration (CMakeLists.txt)
The CMakeLists.txt includes:
- C17 standard
- Compiler flags: -Wall -Wextra -g for debugging
- Include directories for reusable headers

## Common Commands

### Compile a single C file
```bash
clang -std=c17 -Wall -Wextra coursework/fundamentals/hello.c -o hello
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

### Check for memory leaks
```bash
valgrind ./build/executable_name
```

### Clean build
```bash
rm -rf build/
```

## Memory Management Checklist
- ✅ Allocate memory with malloc/calloc
- ✅ Store pointer to allocated memory
- ✅ Free memory when done: free(ptr)
- ✅ Set pointer to NULL after freeing
- ✅ Test with valgrind for leaks

## Learning Path
1. **Week 1-2**: Fundamentals (syntax, functions, I/O)
2. **Week 3-4**: Pointers & Memory (malloc, free, debugging)
3. **Week 5-6**: Data Structures (arrays, structs, linked lists)
4. **Week 7-8**: Projects (shell, DS library)

## Troubleshooting

### CMake not found
- Install: `brew install cmake`

### Compilation errors
- Check C standard: `clang -std=c17 ...`
- Increase warnings: Add `-Wall -Wextra` flags

### Memory leaks detected
- Install valgrind: `brew install valgrind`
- Run: `valgrind ./executable`
- Check for malloc without free

### Undefined reference errors
- Ensure all .c files are linked
- Check CMakeLists.txt includes all source files

## Next Steps
Start with coursework/fundamentals/ and follow the learning path sequentially.
