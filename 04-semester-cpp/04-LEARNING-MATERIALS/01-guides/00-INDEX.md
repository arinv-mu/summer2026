# C++ Learning Materials: Navigation Hub

Welcome! This is your starting point for learning modern C++. Use this guide to navigate all resources organized for 10 weeks of structured learning.

## 🚀 Quick Start (Do This First)

Before diving into the curriculum, verify your environment:

```bash
# Navigate to C++ semester
cd 04-semester-cpp

# Verify compiler and tools
clang++ --version        # Should show Apple clang version
cmake --version          # Should show CMake 3.20+
make --version           # Should show GNU Make

# Build a program
cmake -B build -S .
make -C build

# Run the test program
./build/hello

# Clean build files
rm -rf build
```

## 📚 Learning Path by Week

| Week | Topics | Focus | Resource |
|------|--------|-------|----------|
| **Week 1-2** | Syntax, types, I/O | Fundamentals | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-1-2) |
| **Week 3-4** | Functions, pointers | Memory basics | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-3-4) |
| **Week 5-6** | Classes, constructors | OOP basics | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-5-6) |
| **Week 7-8** | Inheritance, polymorphism | OOP advanced | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-7-8) |
| **Week 9-10** | STL containers | Vector, Map, Set | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-9-10) |
| **Week 11-12** | STL algorithms | Iterators, sort, find | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-11-12) |
| **Week 13-14** | Templates | Generic programming | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-13-14) |
| **Week 15-16** | Smart pointers | Memory management | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-15-16) |
| **Week 17-18** | Concurrency, testing | Threading basics | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-17-18) |
| **Week 19-20** | Project capstone | Graphics or game engine | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-19-20) |

## 📖 Main Resources

### Getting Started
- **[01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md)** - Complete 10-week curriculum with milestones
- **[02-COMPILATION-REFERENCE.md](02-COMPILATION-REFERENCE.md)** - How to compile, CMake, debugging

### When You Get Stuck
- **[03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md)** - Common C++ errors and debugging techniques

### Code Examples
- **[../02-templates/00-hello.cpp](../02-templates/00-hello.cpp)** - Your first C++ program
- **[../02-templates/01-CMakeLists.txt](../02-templates/01-CMakeLists.txt)** - CMake configuration template
- **[../02-templates/multi-file/](../02-templates/multi-file/)** - Multi-file example with headers

### Practice Exercises
- **[../03-exercises/](../03-exercises/)** - 20 weeks of exercises (week-01-02 through week-19-20)

### Build Your Project
- **[../04-projects/PROJECT-GUIDE.md](../04-projects/PROJECT-GUIDE.md)** - Semester capstone project

## 🔧 Essential Commands

```bash
# Navigate to C++ semester
cd 04-semester-cpp

# Build with CMake
cmake -B build -S .      # Configure
make -C build            # Compile

# Run program
./build/program_name

# Clean build
rm -rf build

# Compile single file
clang++ -std=c++20 -o program program.cpp

# Compile multiple files
clang++ -std=c++20 -o program main.cpp utils.cpp

# Check compiler version
clang++ --version

# Debug with lldb (macOS)
lldb ./build/program
(lldb) run
(lldb) breakpoint set --file main.cpp --line 10
(lldb) continue
```

## 🎯 Learning Goals by Week

**Weeks 1-4**: Master C++ basics
- [ ] Understand syntax and types
- [ ] Write functions with pointers
- [ ] Manage memory with new/delete

**Weeks 5-8**: Object-oriented programming
- [ ] Create and use classes
- [ ] Use inheritance
- [ ] Practice polymorphism

**Weeks 9-12**: Standard Template Library
- [ ] Use vector, map, set
- [ ] Understand iterators
- [ ] Master STL algorithms

**Weeks 13-16**: Advanced C++
- [ ] Write generic templates
- [ ] Use smart pointers
- [ ] Understand move semantics

**Weeks 17-20**: Build a project
- [ ] Write with CMake
- [ ] Create graphics or game
- [ ] Test with Google Test

## 📁 File Organization

```
04-semester-cpp/
├── CMakeLists.txt      ← Build configuration
├── setup-env.sh        ← Environment setup
├── 01-coursework/      ← Follow along with structured lessons
├── 02-exercises/       ← Independent practice
├── 03-projects/        ← Build semester project
└── 04-LEARNING-MATERIALS/  ← You are here!
    ├── 01-guides/
    ├── 02-templates/
    ├── 03-exercises/
    └── 04-projects/
```

## 🆘 Getting Help

### If you get a compilation error:
1. Read the error message carefully
2. Search [03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md) for your error type
3. Check [02-COMPILATION-REFERENCE.md](02-COMPILATION-REFERENCE.md) for build help

### Recommended Practice Sites
- [cppreference.com](https://en.cppreference.com/) - C++ reference
- [cplusplus.com](https://www.cplusplus.com/) - C++ tutorials
- [Codeforces](https://codeforces.com/) - Competitive programming
- [HackerRank C++](https://www.hackerrank.com/domains/cpp)
- [LeetCode C++](https://leetcode.com/) (free tier)

## ✅ Verification Checklist

Before moving to week 3, confirm:
- [ ] Compiler installed: `clang++ --version`
- [ ] CMake installed: `cmake --version`
- [ ] Can build: `cmake -B build -S . && make -C build`
- [ ] Can run: `./build/hello` (produces output)

---

**Next Step**: Open [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md) to see the full curriculum! 📖
