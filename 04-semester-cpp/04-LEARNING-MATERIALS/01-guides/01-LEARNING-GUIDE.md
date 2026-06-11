# C++ 10-Week Learning Curriculum

This guide provides a structured 10-week learning path for modern C++ (C++17/C++20) fundamentals, OOP, and STL. **Estimated 55 total hours** (5-6 hours per week).

## Part 1: Quick Start Setup

Before you code, ensure your environment is ready:

```bash
# Navigate to C++ semester
cd 04-semester-cpp

# Verify compiler and tools
clang++ --version          # Should show Apple clang version
cmake --version            # Should show CMake 3.20+
make --version             # Should show GNU Make

# Build and run test program
cmake -B build -S .
make -C build
./build/hello
```

## Part 2: 10-Week Structured Learning Path

### Week 1-2: C++ Basics & Modern Syntax
**Topics**: Variables, types, operators, I/O, std::cout/std::cin, strings
**Time**: 5 hours

**Learning Objectives**:
- [ ] Understand C++ syntax and compilation
- [ ] Use primitive types (int, double, bool, char)
- [ ] Understand type casting
- [ ] Use std::cout for output
- [ ] Use std::cin for input
- [ ] Understand std::string type
- [ ] Know difference from C (C++ features)

**Practice**:
1. Study `../02-templates/00-hello.cpp`
2. Create 3 programs in `../03-exercises/week-01-02/`:
   - Simple calculator (add, subtract)
   - Temperature converter (C to F)
   - String manipulation programs

**Resources**:
- [cppreference.com](https://en.cppreference.com/) - C++ reference
- [cplusplus.com](https://www.cplusplus.com/) - C++ tutorials
- [C++ Primer](https://www.oreilly.com/library/view/c-primer-fifth/9780134284239/)

---

### Week 3-4: Functions & Pointers
**Topics**: Function declaration/definition, parameters, return types, pointers, references, pointer arithmetic
**Time**: 5 hours

**Learning Objectives**:
- [ ] Write functions with different signatures
- [ ] Understand pass-by-value vs pass-by-reference
- [ ] Use pointers effectively
- [ ] Understand pointer arithmetic
- [ ] Know when to use pointers vs references
- [ ] Use const correctly

**Practice**:
1. Write 3 programs in `../03-exercises/week-03-04/`:
   - Function-based calculator with separate operations
   - Pointer manipulation program (array access with pointers)
   - Swap function using references

**Resources**:
- [cppreference: Functions](https://en.cppreference.com/w/cpp/language/functions)
- [cppreference: Pointers](https://en.cppreference.com/w/cpp/language/pointer)

---

### Week 5-6: Classes & Objects (Part 1)
**Topics**: Class definition, constructors, destructors, member variables, member functions, access specifiers
**Time**: 5 hours

**Learning Objectives**:
- [ ] Define classes with public/private members
- [ ] Write constructors (default, parameterized)
- [ ] Understand destructors
- [ ] Use member functions
- [ ] Understand object lifecycle
- [ ] Know copy constructor basics

**Practice**:
1. Create 3 classes in `../03-exercises/week-05-06/`:
   - Person class (name, age, methods)
   - BankAccount class (balance, deposit/withdraw)
   - Rectangle class (width, height, area calculation)

**Resources**:
- [cppreference: Class Declaration](https://en.cppreference.com/w/cpp/language/class)
- [cppreference: Constructors and Destructors](https://en.cppreference.com/w/cpp/language/constructor)

---

### Week 7-8: Inheritance & Polymorphism
**Topics**: Class inheritance, virtual functions, method overriding, abstract classes, dynamic polymorphism
**Time**: 5 hours

**Learning Objectives**:
- [ ] Create class hierarchies with inheritance
- [ ] Override virtual functions
- [ ] Use virtual destructors
- [ ] Understand dynamic dispatch
- [ ] Practice polymorphism
- [ ] Use abstract base classes (pure virtual)

**Practice**:
1. Create hierarchies in `../03-exercises/week-07-08/`:
   - Animal/Dog/Cat with virtual speak() method
   - Shape/Rectangle/Circle with area() calculation
   - Vehicle/Car/Bicycle hierarchy

**Resources**:
- [cppreference: Virtual Function](https://en.cppreference.com/w/cpp/language/virtual)
- [cppreference: Inheritance](https://en.cppreference.com/w/cpp/language/derived_class)

---

### Week 9-10: STL Containers (Vector, Map, Set)
**Topics**: std::vector, std::map, std::set, std::unordered_map, iterators, container methods
**Time**: 5 hours

**Learning Objectives**:
- [ ] Understand STL container types
- [ ] Use std::vector for dynamic arrays
- [ ] Use std::map for key-value pairs
- [ ] Use std::set for unique elements
- [ ] Understand iterators
- [ ] Know time complexity of operations

**Practice**:
1. Write 3 programs in `../03-exercises/week-09-10/`:
   - Student roster using vector
   - Grade tracker using map<string, double>
   - Unique word counter using set

**Resources**:
- [cppreference: Containers](https://en.cppreference.com/w/cpp/container)
- [Baeldung: STL Containers](https://www.baeldung.com/cpp-standard-template-library)

---

### Week 11-12: STL Algorithms & Iterators
**Topics**: std::sort, std::find, std::transform, iterators, ranges, lambda functions
**Time**: 5 hours

**Learning Objectives**:
- [ ] Use STL algorithms (sort, find, count, etc.)
- [ ] Understand different iterator types
- [ ] Write lambda functions for algorithms
- [ ] Use std::transform and std::for_each
- [ ] Understand algorithm complexity

**Practice**:
1. Refactor week 9-10 programs using algorithms
2. Write 2 programs in `../03-exercises/week-11-12/`:
   - Sort students by grade using std::sort
   - Find students meeting criteria using std::find_if

**Resources**:
- [cppreference: Algorithms](https://en.cppreference.com/w/cpp/algorithm)
- [cppreference: Iterator](https://en.cppreference.com/w/cpp/iterator)

---

### Week 13-14: Templates & Generic Programming
**Topics**: Function templates, class templates, template specialization, type traits
**Time**: 5 hours

**Learning Objectives**:
- [ ] Write generic functions with templates
- [ ] Create template classes
- [ ] Understand template instantiation
- [ ] Use template specialization
- [ ] Avoid common template errors

**Practice**:
1. Write 3 template programs in `../03-exercises/week-13-14/`:
   - Generic Stack template
   - Generic Pair template
   - Generic Swap function

**Resources**:
- [cppreference: Templates](https://en.cppreference.com/w/cpp/language/templates)
- [C++ Templates: The Complete Guide](https://www.oreilly.com/library/view/c-templates-the/9781491923819/)

---

### Week 15-16: Smart Pointers & Memory Management
**Topics**: std::unique_ptr, std::shared_ptr, RAII, move semantics, move constructors
**Time**: 5 hours

**Learning Objectives**:
- [ ] Understand RAII principle
- [ ] Use unique_ptr for exclusive ownership
- [ ] Use shared_ptr for shared ownership
- [ ] Understand move semantics
- [ ] Write move constructors/assignment
- [ ] Avoid memory leaks

**Practice**:
1. Write 3 programs in `../03-exercises/week-15-16/`:
   - Refactor earlier classes to use smart pointers
   - Create vector of unique_ptr objects
   - Practice move semantics

**Resources**:
- [cppreference: unique_ptr](https://en.cppreference.com/w/cpp/memory/unique_ptr)
- [cppreference: shared_ptr](https://en.cppreference.com/w/cpp/memory/shared_ptr)
- [cppreference: Move Semantics](https://en.cppreference.com/w/cpp/language/move)

---

### Week 17-18: Testing & Debugging
**Topics**: Google Test framework, assertions, valgrind, address sanitizer, debugging tools
**Time**: 5 hours

**Learning Objectives**:
- [ ] Write unit tests with Google Test
- [ ] Use assertions and matchers
- [ ] Run tests with CMake
- [ ] Debug with lldb (macOS)
- [ ] Detect memory issues with Valgrind

**Practice**:
1. Write tests for previous classes:
   - Test Person/BankAccount classes
   - Test STL container programs
   - Test template implementations

**Resources**:
- [Google Test Documentation](https://google.github.io/googletest/)
- [Valgrind](https://valgrind.org/docs/manual/manual.html)

---

### Week 19-20: Capstone Project - Graphics or Game Engine
**Topics**: Combine all C++ skills into a project
**Time**: 10 hours

**Project Goals**:
1. Create graphics-based application or simple game engine
2. Use multiple classes with inheritance
3. Use STL containers and algorithms
4. Implement smart pointers
5. Write comprehensive tests

**Project Options**:
- **Option A**: Graphics Renderer (SDL2)
  - Window management
  - Shape drawing
  - Input handling

- **Option B**: Game Engine (2D game)
  - Game objects with inheritance
  - Collision detection
  - Input/update/render loop

**Suggested Project**: Simple Graphics App
```
src/
├── main.cpp            (entry point)
├── graphics.h/cpp      (graphics utilities)
├── shape.h/cpp         (Shape base class)
├── rectangle.h/cpp     (Rectangle class)
├── circle.h/cpp        (Circle class)
└── color.h             (Color class)

tests/
├── test_shape.cpp      (unit tests)
└── test_graphics.cpp

CMakeLists.txt         (build config)
README.md              (documentation)
```

**Deliverables**:
- Build: `cmake -B build -S . && make -C build`
- Run: `./build/app`
- Test: `./build/test_shape`
- Well-documented code with comments

---

## Part 3: CMake & Build System

### Basic CMakeLists.txt
```cmake
cmake_minimum_required(VERSION 3.20)
project(MyProject)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Main executable
add_executable(app src/main.cpp src/graphics.cpp)

# Testing
enable_testing()
find_package(GTest REQUIRED)
add_executable(test_app tests/test_shape.cpp src/graphics.cpp)
target_link_libraries(test_app GTest::GTest GTest::Main)
add_test(NAME test_app COMMAND test_app)
```

### Build Commands
```bash
# Configure and build
cmake -B build -S .
make -C build

# Clean
rm -rf build

# Build specific target
make -C build app

# Run tests
./build/test_app
```

---

## Part 4: Assessment Checklist

**End of Week 20, you should be able to:**

- [ ] Write modern C++ code (C++17/C++20)
- [ ] Use pointers and references correctly
- [ ] Design class hierarchies with inheritance
- [ ] Use STL containers effectively
- [ ] Write generic code with templates
- [ ] Manage memory with smart pointers
- [ ] Use STL algorithms
- [ ] Write unit tests
- [ ] Debug with CMake and lldb
- [ ] Build complete applications

---

## Part 5: Resources & References

### Official Documentation
- [cppreference.com](https://en.cppreference.com/) - C++ standard reference
- [C++ Standard](https://isocpp.org/std/the-standard)

### Books & Learning
- [C++ Primer](https://www.oreilly.com/library/view/c-primer-fifth/9780134284239/)
- [Effective Modern C++](https://www.oreilly.com/library/view/effective-modern-c/9781491927281/)

### Online Courses
- [Codeforces](https://codeforces.com/) - Competitive programming
- [HackerRank C++](https://www.hackerrank.com/domains/cpp)
- [LeetCode C++](https://leetcode.com/)

### Tools
- [CMake](https://cmake.org/cmake/help/latest/)
- [Google Test](https://google.github.io/googletest/)
- [Valgrind](https://valgrind.org/)

---

**Ready to code?** Start with week 1-2 exercises in `../03-exercises/week-01-02/`! 🚀
