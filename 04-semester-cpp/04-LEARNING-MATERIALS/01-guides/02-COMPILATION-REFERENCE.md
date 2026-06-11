# C++: Compilation, Build & Execution Reference

## Compiler & Environment Setup

### Check Installation
```bash
# Check compiler version
clang++ --version

# Check CMake
cmake --version

# Check Make
make --version

# Find compiler
which clang++
which clang
```

## Direct Compilation (Without CMake)

### Compile Single File
```bash
# Basic compilation with C++20
clang++ -std=c++20 -o program program.cpp

# With optimization
clang++ -std=c++20 -O2 -o program program.cpp

# With debug symbols
clang++ -std=c++20 -g -o program program.cpp

# Treat warnings as errors
clang++ -std=c++20 -Werror -Wall -Wextra -o program program.cpp
```

### Compile Multiple Files
```bash
# Compile and link multiple files
clang++ -std=c++20 -o program main.cpp utils.cpp graphics.cpp

# Compile to object files, then link
clang++ -std=c++20 -c main.cpp     # Produces main.o
clang++ -std=c++20 -c utils.cpp    # Produces utils.o
clang++ -o program main.o utils.o

# With headers
clang++ -std=c++20 -I./include -o program src/*.cpp
```

## CMake Build System

### Basic CMake Workflow
```bash
# Configure build (generates Makefile)
cmake -B build -S .

# Build project
make -C build
# OR
cmake --build build

# Run program
./build/program_name

# Clean
rm -rf build
```

### CMakeLists.txt Essentials

**Minimal Example**:
```cmake
cmake_minimum_required(VERSION 3.20)
project(MyApp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create executable
add_executable(myapp main.cpp utils.cpp)

# Include directories
target_include_directories(myapp PRIVATE include)

# Compiler flags
target_compile_options(myapp PRIVATE -Wall -Wextra -Werror)
```

**With Dependencies**:
```cmake
cmake_minimum_required(VERSION 3.20)
project(MyApp)

set(CMAKE_CXX_STANDARD 20)

# Find external libraries
find_package(Threads REQUIRED)

# Create executable
add_executable(myapp main.cpp)

# Link libraries
target_link_libraries(myapp PRIVATE Threads::Threads)
```

## Compilation Flags Reference

### C++ Standard Versions
```bash
# C++11 (legacy)
-std=c++11

# C++17 (widely supported)
clang++ -std=c++17 -o program program.cpp

# C++20 (modern, recommended)
clang++ -std=c++20 -o program program.cpp
```

### Optimization Flags
```bash
# No optimization (for debugging)
-O0

# Basic optimization
-O1

# Standard optimization
-O2

# Aggressive optimization
-O3

# Optimize for size
-Os
```

### Warning Flags
```bash
# Enable basic warnings
-Wall

# Enable extra warnings
-Wextra

# Treat all warnings as errors
-Werror

# Warn about deprecated features
-Wdeprecated

# Warn about unused variables
-Wunused

# All warnings
-Wall -Wextra -Wpedantic
```

### Debug Flags
```bash
# Include debug symbols
-g

# With debug info and no optimization
-g -O0

# Address sanitizer (detect memory bugs)
-fsanitize=address -g

# Undefined behavior sanitizer
-fsanitize=undefined -g

# Both sanitizers
-fsanitize=address,undefined -g
```

## Execution

### Run Compiled Program
```bash
# Basic execution
./program

# With arguments
./program arg1 arg2

# With input redirection
./program < input.txt

# With output redirection
./program > output.txt

# Debug with lldb (macOS)
lldb ./program
(lldb) run
(lldb) breakpoint set --file main.cpp --line 10
```

## Debugging with LLDB (macOS)

### Basic Commands
```bash
# Start debugger
lldb ./program

# Useful commands within LLDB:
(lldb) run                          # Start program
(lldb) run arg1 arg2                # Run with arguments
(lldb) breakpoint set --file main.cpp --line 10
(lldb) breakpoint set --name function_name
(lldb) continue                     # Resume execution
(lldb) next                         # Step over
(lldb) step                         # Step into
(lldb) finish                       # Step out
(lldb) print variable_name          # Print variable
(lldb) po variable_name             # Pretty print object
(lldb) frame variable               # Show local variables
(lldb) bt                           # Show backtrace
(lldb) quit                         # Exit debugger
```

### Example Debug Session
```bash
# Compile with debug symbols
clang++ -std=c++20 -g -o myapp main.cpp

# Start debugging
lldb ./myapp

# Set breakpoint at line 15
(lldb) breakpoint set --file main.cpp --line 15

# Run program
(lldb) run

# When it stops at breakpoint
(lldb) frame variable           # See local variables
(lldb) print x                  # Check variable x
(lldb) next                     # Execute next line
(lldb) continue                 # Continue to next breakpoint
```

## Memory Debugging

### Valgrind (Linux-based, not available on macOS easily)
```bash
# Check for memory leaks
valgrind ./program

# Detailed leak report
valgrind --leak-check=full --show-leak-kinds=all ./program

# Generate suppression file
valgrind --gen-suppressions=all ./program
```

### Address Sanitizer (macOS compatible)
```bash
# Compile with address sanitizer
clang++ -std=c++20 -fsanitize=address -g -o program program.cpp

# Run (will report memory issues)
./program

# With output to file
./program 2> asan.log
cat asan.log
```

## Building Libraries

### Static Library (*.a)
```bash
# Compile object files
clang++ -c -std=c++20 utils.cpp -o utils.o
clang++ -c -std=c++20 graphics.cpp -o graphics.o

# Create static library
ar rcs libmylib.a utils.o graphics.o

# Link against it
clang++ -std=c++20 -o program main.cpp -L. -lmylib

# Or with explicit path
clang++ -std=c++20 -o program main.cpp ./libmylib.a
```

### Shared Library (*.dylib on macOS)
```bash
# Compile with position-independent code
clang++ -fPIC -std=c++20 -c utils.cpp

# Create shared library
clang++ -dynamiclib -std=c++20 utils.o -o libmylib.dylib

# Link against it
clang++ -std=c++20 -o program main.cpp -L. -lmylib
```

## CMake Build Management

### Clean Build
```bash
# Remove build directory
rm -rf build

# Reconfigure
cmake -B build -S .
make -C build
```

### Build Specific Target
```bash
# View available targets
cmake --build build --target help

# Build specific executable
make -C build myapp

# Build only tests
make -C build test
```

### Verbose Build Output
```bash
# See actual compiler commands
make -C build VERBOSE=1

# Or with CMake
cmake --build build --verbose

# Or change config
cmake -DCMAKE_VERBOSE_MAKEFILE=ON -B build -S .
```

## Project Structure

### Single-Executable Project
```
project/
├── CMakeLists.txt
├── include/
│   └── utils.h
├── src/
│   ├── main.cpp
│   └── utils.cpp
├── tests/
│   └── test_utils.cpp
└── README.md
```

### Multi-Target Project
```
project/
├── CMakeLists.txt
├── src/
│   └── CMakeLists.txt (defines library)
├── apps/
│   └── CMakeLists.txt (defines executables)
├── tests/
│   └── CMakeLists.txt (defines tests)
└── include/
    └── mylib/
        └── utils.h
```

---

**Next**: When you encounter compiler errors, check [03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md)!
