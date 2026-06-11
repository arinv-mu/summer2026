# C Compilation Reference Card

Quick reference for compilation, debugging, and common commands.

---

## Basic Compilation

```bash
# Simple compilation (development)
gcc -Wall -Wextra -std=c99 -o program program.c

# Production (optimized)
gcc -Wall -Wextra -std=c99 -O2 -o program program.c

# With debugging symbols
gcc -Wall -Wextra -std=c99 -g -o program program.c
```

---

## Flag Meanings

| Flag | Purpose |
|------|---------|
| `-Wall` | Enable all common warnings |
| `-Wextra` | Enable extra warnings |
| `-std=c99` | Use C99 standard (recommended) |
| `-o name` | Output file name |
| `-g` | Include debug symbols (for GDB) |
| `-O0` | No optimization (default) |
| `-O1` | Basic optimization |
| `-O2` | Good optimization (use for production) |
| `-O3` | Aggressive optimization (may cause issues) |
| `-Werror` | Treat warnings as errors (enforce quality) |
| `-pedantic` | Check strict C standard compliance |

---

## Multi-File Projects

```bash
# Compile all .c files together
gcc -Wall -Wextra -std=c99 -o program *.c

# Or list files explicitly
gcc -Wall -Wextra -std=c99 -o program main.c utils.c helpers.c

# Separate compilation to object files
gcc -c -std=c99 main.c -o main.o
gcc -c -std=c99 utils.c -o utils.o
gcc -o program main.o utils.o
```

---

## Makefile Template

See: ../02-templates/Makefile.template

**Usage:**
```bash
make          # Compile
make run      # Compile and run
make clean    # Delete build files
make debug    # Compile with debug symbols
```

---

## Debugging Commands

### GDB (GNU Debugger)

```bash
# Start debugger
gdb ./program

# Inside GDB:
(gdb) break main              # Breakpoint at main function
(gdb) break program.c:15      # Breakpoint at line 15
(gdb) run                     # Start execution
(gdb) next                    # Step over (skip function calls)
(gdb) step                    # Step into (enter function calls)
(gdb) continue                # Continue until next breakpoint
(gdb) print variable_name     # Print variable value
(gdb) print &variable_name    # Print variable address
(gdb) watch variable_name     # Stop on variable change
(gdb) backtrace               # Show call stack
(gdb) quit                    # Exit debugger
```

### Valgrind (Memory Leak Detection)

```bash
# Compile with debug symbols
gcc -Wall -Wextra -std=c99 -g -o program program.c

# Run with Valgrind
valgrind --leak-check=full ./program

# Detailed output
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./program

# Output interpretation:
# LEAK SUMMARY: Total bytes lost/still reachable
# Still reachable: Memory allocated but not freed (usually OK)
# Definitely lost: Memory leak (FIX THIS)
# Invalid free/access: Using freed memory (critical)
```

---

## Compiler Warnings to Fix

| Warning | Meaning | Fix |
|---------|---------|-----|
| `unused variable` | Variable declared but never used | Remove or use the variable |
| `implicit function declaration` | Function used without `#include` | Add proper `#include` |
| `incompatible pointer` | Pointer type mismatch | Cast properly or fix type |
| `format specifier` | Wrong format in printf/scanf | Use correct `%d`, `%f`, etc. |
| `comparison with string literal` | Using `==` for string comparison | Use `strcmp()` instead |
| `control reaches end without return` | Function missing return statement | Add return statement |

---

## Common Compilation Errors & Solutions

| Error | Cause | Solution |
|-------|-------|----------|
| `undefined reference to 'function'` | Missing function definition | Define the function or add the source file |
| `syntax error before 'token'` | Typo or missing bracket/semicolon | Check punctuation carefully |
| `cannot open source file` | Misspelled filename | Check filename spelling |
| `too many arguments to function` | Calling function with wrong number of arguments | Check function signature |
| `no matching function for call` | Function signature mismatch | Check parameter types |

---

## Performance Compilation

```bash
# Compile with optimizations
gcc -Wall -Wextra -std=c99 -O2 -o program program.c

# Check compiled binary size
ls -lh program

# View assembly code (for optimization study)
gcc -S -std=c99 program.c  # Creates program.s

# Benchmark execution
time ./program
```

---

## Different Compilers

```bash
# GCC (most common)
gcc -Wall -Wextra -std=c99 -o program program.c

# Clang (better error messages)
clang -Wall -Wextra -std=c99 -o program program.c

# MSVC (Windows - if installed)
cl /W4 /std:c11 program.c

# Test on both (good practice)
gcc -Wall -Wextra -std=c99 -o program_gcc program.c
clang -Wall -Wextra -std=c99 -o program_clang program.c
./program_gcc
./program_clang
```

---

## C Standard Versions

| Standard | Year | Features | Use Case |
|----------|------|----------|----------|
| **C89/C90** | 1989 | Original standard | Legacy code only |
| **C99** | 1999 | inline, variable declarations, // comments | **RECOMMENDED** for learning |
| **C11** | 2011 | _Generic, _Noreturn, threading basics | Modern code |
| **C17** | 2017 | Minor updates to C11 | Newest standard |

**Recommendation:** Use `-std=c99` for learning, it's widely supported and has good features.

---

## Quick Command Summary

```bash
# Typical workflow
gcc -Wall -Wextra -std=c99 -o prog program.c    # Compile
./prog                                           # Run
gdb ./prog                                        # Debug
valgrind ./prog                                   # Check memory
```

---

**See: DEBUGGING-GUIDE.md for troubleshooting specific issues**
