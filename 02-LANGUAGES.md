# Language Reference Guide

Quick reference for all languages in this repository.

## Python (Semester 1)

### Version & Installation
- **Version**: 3.12 LTS
- **Install**: `brew install python@3.12`
- **Check**: `python3 --version`

### Environment Management
- **Create venv**: `python3 -m venv venv`
- **Activate**: `source venv/bin/activate`
- **Deactivate**: `deactivate`
- **Install deps**: `pip install -r requirements.txt`

### Common Commands
- **Run**: `python3 script.py`
- **Interactive**: `python3`
- **Install package**: `pip install package-name`
- **List packages**: `pip list`
- **Debug**: `ipdb` or `pdb`

### File Extensions
- `.py` - Python source files
- `.pyc` - Compiled bytecode (auto-generated)
- `__pycache__/` - Cache directory (gitignored)

### Key Tools
- `pytest` - Testing framework
- `pylint` - Code quality
- `black` - Code formatter
- `ipython` - Interactive shell
- `ipdb` - Debugger

---

## Java (Semester 2)

### Version & Installation
- **Version**: OpenJDK 21 LTS
- **Install**: `brew install openjdk@21`
- **Check**: `java -version` and `javac -version`

### Build Tool: Gradle
- **Version**: 8.x+
- **Install**: `brew install gradle`
- **Check**: `gradle --version`

### Common Commands
- **Compile**: `gradle compileJava` or `javac *.java`
- **Build**: `gradle build`
- **Run**: `gradle run` or `java ClassName`
- **Test**: `gradle test`
- **Clean**: `gradle clean`

### Project Structure (Maven Convention)
```
src/
├── main/java/
│   └── com/semester2/
└── test/java/
    └── com/semester2/
```

### File Extensions
- `.java` - Source files
- `.class` - Compiled bytecode
- `.jar` - Java archive (packaged code)
- `build/` - Build artifacts

### Key Tools
- `gradle` - Build and dependency management
- `JUnit 5` - Testing framework
- `Log4j/Logback` - Logging
- `Maven` - Alternative build tool (not used here)

---

## C (Semester 3)

### Version & Installation
- **Standard**: C17
- **Compiler**: Apple Clang (via Xcode CLT)
- **Install**: `xcode-select --install`
- **Check**: `clang --version`

### Build Tools
- **CMake**: Build configuration
- **Make**: Build automation
- **Valgrind**: Memory leak detection

### Common Commands
- **Compile**: `clang -std=c17 -Wall -Wextra file.c -o executable`
- **Run**: `./executable`
- **CMake build**: `mkdir build && cd build && cmake .. && make`
- **Memory check**: `valgrind ./executable`
- **Debug**: `lldb ./executable` or `gdb ./executable`

### File Extensions
- `.c` - Source files
- `.h` - Header files
- `.o` - Object files (intermediate)
- `.a` - Static library
- `.so/.dylib` - Shared library (macOS)

### Memory Management Checklist
- ✅ `malloc()` / `calloc()` for allocation
- ✅ Store pointer in variable
- ✅ `free()` when done
- ✅ Set `ptr = NULL` after freeing
- ✅ Use `valgrind` to verify

### Key Concepts
- Pointers and memory addresses
- Stack vs heap allocation
- String manipulation (char arrays)
- Structs for data organization
- File I/O operations

---

## C++ (Semester 4)

### Version & Installation
- **Standard**: C++20
- **Compiler**: Apple Clang (via Xcode CLT)
- **Install**: `xcode-select --install`
- **Check**: `clang++ --version`

### Build Tools
- **CMake**: Build configuration
- **Make**: Build automation
- **Valgrind**: Memory leak detection

### Common Commands
- **Compile**: `clang++ -std=c++20 -Wall -Wextra file.cpp -o executable`
- **Run**: `./executable`
- **CMake build**: `mkdir build && cd build && cmake .. && make`
- **Memory check**: `valgrind ./executable`
- **Debug**: `lldb ./executable` or `gdb ./executable`

### File Extensions
- `.cpp` - Source files (implementation)
- `.cc` - Alternative source extension
- `.h` / `.hpp` - Header files
- `.o` - Object files (intermediate)
- `.a` - Static library
- `.so/.dylib` - Shared library (macOS)

### STL Containers
```cpp
#include <vector>       // Dynamic array
#include <list>         // Linked list
#include <map>          // Key-value pairs
#include <set>          // Unique elements
#include <queue>        // FIFO queue
#include <stack>        // LIFO stack
#include <deque>        // Double-ended queue
```

### STL Algorithms
```cpp
#include <algorithm>
// sort, find, transform, accumulate, count, etc.
```

### Key Concepts
- Classes and objects (OOP)
- Inheritance and polymorphism
- Operator overloading
- Smart pointers (unique_ptr, shared_ptr)
- RAII (Resource Acquisition Is Initialization)
- Templates and generic programming

---

## Comparison Table

| Aspect | Python | Java | C | C++ |
|--------|--------|------|---|-----|
| Type | Interpreted | Compiled (JIT) | Compiled | Compiled |
| Memory | Automatic (GC) | Automatic (GC) | Manual | Manual (smart ptrs) |
| Speed | Slower | Medium | Fast | Fast |
| Use Case | Scripting, ML | Enterprise | Systems | Systems, Games |
| Learning Curve | Easy | Medium | Hard | Hard |

---

## Environment Variable Setup

### Set JAVA_HOME (if needed)
```bash
export JAVA_HOME=$(/usr/libexec/java_home -v 21)
```

### Add to .zshrc or .bash_profile
```bash
# Java
export JAVA_HOME=$(/usr/libexec/java_home -v 21)
export PATH="$JAVA_HOME/bin:$PATH"

# Gradle
export PATH="$HOME/.gradle/bin:$PATH"
```

---

## IDE Extensions (VS Code)

- **Python**: Python, Pylance
- **Java**: Extension Pack for Java, Maven for Java
- **C/C++**: C/C++, CMake, CMake Tools
- **General**: Git Graph, Code Runner, Debugger for Chrome

---

## Troubleshooting

### Python
- Virtual env not found? → Recreate: `rm -rf venv && python3 -m venv venv`
- Import errors? → Check venv is active: `which python3`

### Java
- Cannot find jdk? → Set JAVA_HOME environment variable
- Build fails? → Clean first: `gradle clean build`

### C/C++
- CMake not found? → Install: `brew install cmake`
- Compilation fails? → Check include paths and linker flags

---

## Version Verification Checklist

Run this to verify all languages are installed:

```bash
python3 --version          # Should show 3.12.x
java -version              # Should show OpenJDK 21
javac -version             # Should show javac 21
clang --version            # Should show Apple Clang
clang++ --version          # Should show Apple Clang
cmake --version            # Should show 3.20+
make --version             # Should be present
gradle --version           # Should show 8.x+
valgrind --version         # Optional: memory checking
```

---

Last Updated: 2026-06-10
