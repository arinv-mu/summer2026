# C++ Semester 4: Learning Materials

Welcome to modern C++ and advanced OOP! This folder contains everything you need to learn C++ fundamentals, STL containers, templates, and concurrent programming.

## Quick Navigation

| Item | Purpose | Time |
|------|---------|------|
| [00-INDEX.md](01-guides/00-INDEX.md) | Start here - navigation hub | 5 min |
| [01-LEARNING-GUIDE.md](01-guides/01-LEARNING-GUIDE.md) | Full curriculum & learning path | 1-2 weeks |
| [02-COMPILATION-REFERENCE.md](01-guides/02-COMPILATION-REFERENCE.md) | CMake, clang++, compilation reference | As needed |
| [03-DEBUGGING-GUIDE.md](01-guides/03-DEBUGGING-GUIDE.md) | Debug common C++ errors | As needed |

## Folder Structure

```
04-LEARNING-MATERIALS/
├── README.md (this file)
├── 01-guides/          ← Start with 00-INDEX.md
│   ├── 00-INDEX.md (navigation)
│   ├── 01-LEARNING-GUIDE.md (curriculum)
│   ├── 02-COMPILATION-REFERENCE.md (CMake/clang++/execution)
│   └── 03-DEBUGGING-GUIDE.md (common errors)
├── 02-templates/       ← Copy these to get started
│   ├── 00-hello.cpp (first program)
│   ├── 01-CMakeLists.txt (CMake template)
│   └── multi-file/ (multi-file example with headers)
├── 03-exercises/       ← Practice by week
│   └── week-01-02/ through week-19-20/ (20 weeks of exercises)
└── 04-projects/        ← Build your semester project
    └── PROJECT-GUIDE.md
```

## Getting Started in 5 Minutes

1. **Read the navigation hub**: Open [01-guides/00-INDEX.md](01-guides/00-INDEX.md)
2. **Navigate to C++ folder**: Root workspace directory
3. **Build a program**: `cmake -B build -S . && make -C build`
4. **Run hello**: `./build/hello`

## Key Facts About This Learning Path

- **Duration**: 10 weeks (weeks 1-20)
- **Commitment**: 1-2 hours per week for exercises + projects
- **Standard**: C++17/C++20 (modern C++)
- **Topics**: Syntax → OOP → STL → Templates → Concurrency
- **Project**: Game engine or graphics renderer
- **Build System**: CMake
- **Testing**: Google Test framework
- **Compiler**: Apple clang++ (C++20 standard)

## Quick Commands

```bash
# Navigate to this semester
cd 04-semester-cpp

# Build with CMake
cmake -B build -S .
make -C build

# Run a program
./build/program_name

# Check compiler version
clang++ --version

# Compile a single file
clang++ -std=c++20 -o program program.cpp

# View CMake help
cmake --help

# Clean build directory
rm -rf build
```

---

**Ready?** Open [01-guides/00-INDEX.md](01-guides/00-INDEX.md) to begin! 🚀
