# 03-Semester-C Folder Structure - Accelerated 15-Week Summer Curriculum

**Last Updated**: June 11, 2026
**Curriculum**: 15-Week Accelerated Summer C Programming (5 Phases)
**Pace**: Fast-track fundamentals + extended pointer coverage
**Status**: Reorganized ✅ | Week-based ✅ | Summer-optimized ✅

---

## 📁 Complete Folder Tree

```
03-semester-c/
│
├── 00-SETUP.md                        (Environment setup & prerequisites)
├── setup-env.sh                       (Bash setup script)
├── CMakeLists.txt                     (CMake build configuration)
├── 05-FOLDER-STRUCTURE.md             (This file)
│
├── 01-coursework/                     (15 WEEKS OF COURSEWORK - YOUR WORK, SUMMER PACE)
│   ├── week-01/                          (Phase 1: Variables, Data Types, Operators & I/O)
│   │   ├── hello.c                        (First program)
│   │   └── [your-programs].c
│   ├── week-02/                          (Phase 1: Decision Making & Conditionals)
│   ├── week-03/                          (Phase 1: Loops & Iteration)
│   ├── week-04/                          (Phase 2: Functions - Basics)
│   ├── week-05/                          (Phase 2: Functions - Advanced)
│   ├── week-06/                          (Phase 2: Build Systems & Headers)
│   ├── week-07/                          (Phase 3: Arrays)
│   ├── week-08/                          (Phase 3: Strings)
│   ├── week-09/                          (Phase 4: Pointer Fundamentals)
│   ├── week-10/                          (Phase 4: Pointer Applications)
│   ├── week-11/                          (Phase 4: Dynamic Memory)
│   ├── week-12/                          (Phase 4: Pointer-to-Pointer & Advanced Memory)
│   ├── week-13/                          (Phase 5: Structures & Complex Types)
│   ├── week-14/                          (Phase 5: Structures with Pointers & Linked Lists)
│   └── week-15/                          (Phase 5: File I/O & Wrap-up)
│
├── 03-projects/                       (SEMESTER PROJECT IMPLEMENTATIONS)
│   ├── 01-shell-interpreter/
│   └── 02-data-structures-lib/
│
└── 04-LEARNING-MATERIALS/             ⭐ MASTER RESOURCE FOLDER
    │
    ├── README.md                      (Start here for learning)
    │
    ├── 01-guides/                     (4 navigation & reference guides)
    │   ├── 00-INDEX.md                   (Navigation hub - START HERE)
    │   ├── 01-LEARNING-GUIDE-C.md        (15-week accelerated curriculum guide)
    │   ├── 02-COMPILATION-REFERENCE.md   (Build & debug tools)
    │   └── 03-DEBUGGING-GUIDE.md         (8 debugging scenarios)
    │
    ├── 02-templates/                  (Reusable code templates)
    │   ├── 00-hello.c                    (Starter program)
    │   ├── 01-Makefile.template          (Build system template)
    │   └── multi-file/                   (Multi-file project example)
    │       ├── 00-main.c
    │       ├── 01-utils.h
    │       ├── 02-utils.c
    │       └── 03-Makefile
    │
    ├── 03-exercises/                  (15 WEEKS OF PRACTICE PROBLEMS - SUMMER PACE)
    │   ├── week-01/                      (Variables, Data Types, Operators & I/O)
    │   ├── week-02/                      (Decision Making & Conditionals)
    │   ├── week-03/                      (Loops & Iteration)
    │   ├── week-04/                      (Functions: Basics)
    │   ├── week-05/                      (Functions: Advanced)
    │   ├── week-06/                      (Build Systems & Headers)
    │   ├── week-07/                      (Arrays)
    │   ├── week-08/                      (Strings)
    │   ├── week-09/                      (Pointer Fundamentals) 🔑
    │   ├── week-10/                      (Pointer Applications) 🔑
    │   ├── week-11/                      (Dynamic Memory) 🔑
    │   ├── week-12/                      (Pointer-to-Pointer & Advanced Memory) 🔑
    │   ├── week-13/                      (Structures & Complex Types)
    │   ├── week-14/                      (Structures with Pointers & Linked Lists)
    │   └── week-15/                      (File I/O & Wrap-up)
    │
    └── 04-projects/                   (Semester project guides)
        └── simple-calculator/
            └── PROJECT-GUIDE.md
```

---

## 📋 Folder Purposes & What Goes Where

### Root Level (03-semester-c/)
- **00-SETUP.md**: C environment setup, prerequisites, compiler verification
- **setup-env.sh**: Automated environment setup script
- **CMakeLists.txt**: CMake build configuration
- **05-FOLDER-STRUCTURE.md**: This file (reference guide)

### 01-coursework/ (YOUR WORKING DIRECTORY - 15 WEEKS, SUMMER PACE)
**Purpose**: Your actual coursework, exercises, and practice programs

**Structure** (Week-based to match accelerated curriculum):
- `week-01/` - Variables, Data Types, Operators & I/O (Phase 1)
- `week-02/` - Decision Making & Conditionals (Phase 1)
- `week-03/` - Loops & Iteration (Phase 1)
- `week-04/` - Functions: Basics (Phase 2)
- `week-05/` - Functions: Advanced (Phase 2)
- `week-06/` - Build Systems & Headers (Phase 2)
- `week-07/` - Arrays (Phase 3)
- `week-08/` - Strings (Phase 3)
- `week-09/` - Pointer Fundamentals (Phase 4) 🔑 EXTENDED
- `week-10/` - Pointer Applications (Phase 4) 🔑 EXTENDED
- `week-11/` - Dynamic Memory (Phase 4) 🔑 EXTENDED
- `week-12/` - Pointer-to-Pointer & Advanced Memory (Phase 4) 🔑 EXTENDED
- `week-13/` - Structures & Complex Types (Phase 5)
- `week-14/` - Structures with Pointers & Linked Lists (Phase 5)
- `week-15/` - File I/O & Wrap-up (Phase 5)

**What goes here**:
- ✅ Your completed exercise solutions
- ✅ Your practice C programs
- ✅ Your Makefile(s) for projects
- ✅ Your hello.c and other coursework files
- ❌ NOT guide files (stay in LEARNING-MATERIALS)
- ❌ NOT project deliverables (go to 03-projects/)

### 03-projects/ (SEMESTER PROJECT IMPLEMENTATIONS)
**Purpose**: Your final semester project code

**Structure**:
- `01-shell-interpreter/` - Project 1 code
- `02-data-structures-lib/` - Project 2 code

**What goes here**:
- Your project source files
- Your project Makefile
- Your compiled executables (before cleanup)

### ⭐ 04-LEARNING-MATERIALS/ (MASTER EDUCATIONAL RESOURCES)
**Purpose**: Complete, professional learning package - guides, exercises, templates, and references

This is your single source of truth for learning C. Everything is organized, indexed, and cross-referenced.

**Subfolders**:

#### 01-guides/ (Your Learning Roadmaps)
- **00-INDEX.md** - START HERE for navigation hub and 15-week accelerated learning path
- **01-LEARNING-GUIDE-C.md** - Complete 15-week accelerated curriculum with 5 phases, resources, time estimates
- **02-COMPILATION-REFERENCE.md** - GCC/Clang flags, compilation commands, Makefile reference
- **03-DEBUGGING-GUIDE.md** - 8 debugging scenarios with solutions (crashes, leaks, logic errors)

#### 02-templates/ (Code Templates to Copy & Modify)
- **00-hello.c** - Your first C program (copy and edit)
- **01-Makefile.template** - Generic Makefile for single-file or multi-file projects
- **multi-file/** - Example project structure
  - 00-main.c, 01-utils.h, 02-utils.c, 03-Makefile

#### 03-exercises/ (15 Weeks of Practice Problems - Summer Pace)
- **README.md** - Exercise guide and how to use this folder
- **week-01/ through week-15/** - Week-based exercise sets
  - Each week contains multiple practice problems
  - Difficulty levels: Basic, Intermediate, Challenge
  - Exercise formats: problem description + hints + reference solutions
  - **Note**: Weeks 9-12 have extended exercises (pointer/memory emphasis)

#### 04-projects/ (Project Guides)
- **simple-calculator/** - Step-by-step project guide with milestones

---

## 🚀 How to Use This Structure

### For Learning (Start Here)
1. Go to: `LEARNING-MATERIALS/README.md`
2. Read: `LEARNING-MATERIALS/01-guides/00-INDEX.md` (navigation)
3. Follow: `LEARNING-MATERIALS/01-guides/01-LEARNING-GUIDE-C.md` (15-week accelerated path)

### For Creating Your Programs
1. Copy template: `LEARNING-MATERIALS/02-templates/00-hello.c`
2. Edit your code in: `01-coursework/week-XX/`
3. Compile: `gcc -Wall -Wextra -std=c99 -o program program.c`

### For Doing Exercises
1. Read problem: `LEARNING-MATERIALS/03-exercises/week-XX/`
2. Write solution: `01-coursework/week-XX/exercise.c`
3. Compare with: `LEARNING-MATERIALS/03-exercises/week-XX/` (reference solutions)

### For Building the Project
1. Read guide: `LEARNING-MATERIALS/04-projects/simple-calculator/PROJECT-GUIDE.md`
2. Create files: `03-projects/01-shell-interpreter/` (or similar)
3. Use template: `04-LEARNING-MATERIALS/02-templates/01-Makefile.template`

### When Stuck
1. **Compilation error**: See `04-LEARNING-MATERIALS/01-guides/02-COMPILATION-REFERENCE.md`
2. **Program crashes**: See `04-LEARNING-MATERIALS/01-guides/03-DEBUGGING-GUIDE.md`
3. **Logic error**: See exercise solutions in `04-LEARNING-MATERIALS/03-exercises/week-XX/`

---

## 📊 Cleanup Summary

### Removed (Duplicates)
- ❌ 01-coursework/02-COMPILATION-REFERENCE.md
- ❌ 01-coursework/03-DEBUGGING-GUIDE.md
- ❌ 01-coursework/00-INDEX.md
- ❌ 01-coursework/01-LEARNING-GUIDE-C.md
- ❌ 01-coursework/01-Makefile.template
- ❌ 01-coursework/Makefile (auto-generated)

### Kept (Master Copies)
- ✅ LEARNING-MATERIALS/01-guides/ (all 4 files)
- ✅ LEARNING-MATERIALS/02-templates/ (all files including multi-file example)
- ✅ LEARNING-MATERIALS/03-exercises/ (all practice problems)
- ✅ LEARNING-MATERIALS/04-projects/ (all project guides)
- ✅ LEARNING-MATERIALS/README.md (master orientation)

### Results
- 🎯 **Single source of truth** for learning materials
- 🎯 **Reduced clutter** - no duplicate files to maintain
- 🎯 **Clear separation** - guides ≠ your coursework
- 🎯 **Organized** - easy to navigate and find resources

---

## 📚 Resource Access Map

| Need | Location | File |
|------|----------|------|
| **Get started** | LEARNING-MATERIALS/ | README.md |
| **Navigate resources** | LEARNING-MATERIALS/01-guides/ | 00-INDEX.md |
| **Learn Week X** | LEARNING-MATERIALS/01-guides/ | 01-LEARNING-GUIDE-C.md |
| **Compile help** | LEARNING-MATERIALS/01-guides/ | 02-COMPILATION-REFERENCE.md |
| **Debug problem** | LEARNING-MATERIALS/01-guides/ | 03-DEBUGGING-GUIDE.md |
| **Code template** | LEARNING-MATERIALS/02-templates/ | 00-hello.c |
| **Build template** | LEARNING-MATERIALS/02-templates/ | 01-Makefile.template |
| **Practice problem** | LEARNING-MATERIALS/03-exercises/ | week-XX/README.md |
| **Project guide** | LEARNING-MATERIALS/04-projects/ | simple-calculator/PROJECT-GUIDE.md |
| **Your work** | 01-coursework/week-XX/ | [your-files].c |

---

## ✅ Next Steps

1. **Verify setup**: Run `source setup-env.sh` or `bash setup-env.sh`
2. **Start learning**: Read `LEARNING-MATERIALS/README.md`
3. **Create first program**: Copy from `LEARNING-MATERIALS/02-templates/00-hello.c`
4. **Store in coursework**: Put in `01-coursework/week-01/`
5. **Compile and test**: `gcc -Wall -Wextra -std=c99 -o hello 00-hello.c`
6. **Commit to Git**: Track your progress

---

## 🎓 5 Learning Phases - Accelerated 15-Week Curriculum

### **Phase 1: Fast-Track Fundamentals (Weeks 1-3) ⚡**
- **Duration**: 10 hours total (compressed due to Python/Java background)
- **Topics**: Variables, data types, operators, I/O, decision making, loops
- **Why Compressed**: Students already understand control flow from Python/Java; focus is on C syntax
- **Work Location**: `01-coursework/week-01/`, `week-02/`, `week-03/`
- **Exercises**: `03-exercises/week-01/`, `week-02/`, `week-03/`

### **Phase 2: Functions & Modularity (Weeks 4-6)**
- **Duration**: 12 hours
- **Topics**: Function definitions, parameters, return values, recursion, headers, build systems
- **Key Concept**: Modular program design in C
- **Work Location**: `01-coursework/week-04/`, `week-05/`, `week-06/`
- **Exercises**: `03-exercises/week-04/`, `week-05/`, `week-06/`

### **Phase 3: Collections (Weeks 7-8)**
- **Duration**: 7 hours
- **Topics**: Arrays (1D, 2D), strings, string functions, array manipulation
- **Key Concept**: Sequential data structures in C
- **Work Location**: `01-coursework/week-07/`, `week-08/`
- **Exercises**: `03-exercises/week-07/`, `week-08/`

### **Phase 4: Pointers & Memory Management (Weeks 9-12) 🔑 EXTENDED**
- **Duration**: 26 hours total (extended focus - most critical C concept)
- **Topics**:
  - Week 9: Pointer fundamentals (address-of, dereference, pointer arithmetic)
  - Week 10: Pointer applications (arrays via pointers, function pointers)
  - Week 11: Dynamic memory (malloc, calloc, free, memory leaks)
  - Week 12: Advanced pointers (pointer-to-pointer, void pointers, memory debugging)
- **Why Extended**: No direct equivalent in Python/Java; requires deep understanding of memory model
- **Work Location**: `01-coursework/week-09/`, `week-10/`, `week-11/`, `week-12/`
- **Exercises**: `03-exercises/week-09/`, `week-10/`, `week-11/`, `week-12/` (intensive practice)
- **Key Tool**: Valgrind for memory debugging

### **Phase 5: Data Structures & Capstone (Weeks 13-15)**
- **Duration**: 16 hours
- **Topics**: Structures, typedef, structures with pointers, linked lists, file I/O, project wrap-up
- **Key Concept**: Complex data types and file handling
- **Work Location**: `01-coursework/week-13/`, `week-14/`, `week-15/`
- **Exercises**: `03-exercises/week-13/`, `week-14/`, `week-15/`
- **Capstone**: Semester projects in `03-projects/`

**Total Time**: 69 hours + 10-12 hour flexibility buffer

---

## 📊 Pedagogical Design Rationale

**Why This Structure?**

1. **Accelerated Fundamentals (Phase 1: 10 hrs)** - Students already understand:
   - Variables and data types from Python/Java
   - Control flow (if/else, loops) from Python/Java
   - Function basics from Python/Java
   - Focus shifts to C-specific syntax rather than concepts

2. **Extended Pointers (Phase 4: 26 hrs)** - This is where C differs fundamentally:
   - No automatic memory management (unlike Java/Python)
   - Manual memory management is mandatory
   - Pointers are the foundation for all advanced C programming
   - Requires 4 weeks of intensive study with multiple reinforcing exercises

3. **Balanced Modularity & Collections** (Phases 2-3: 19 hrs) - Build solid foundations:
   - Functions teach code organization (essential for larger programs)
   - Arrays and strings provide practice with pointers (bridge to Phase 4)

4. **Real-World Capstone** (Phase 5: 16 hrs) - Apply all learning:
   - Structures combine all previous knowledge
   - File I/O enables real programs
   - Projects demonstrate practical C programming

---

## 🗂️ Folder Naming Convention

**Week-Based Organization** (NOT topic-based):
- ✅ Week-based (`week-01/`, `week-02/`, ...`week-15/`) matches the learning curriculum
- ✅ Aligns with `00-INDEX.md` week-by-week navigation
- ✅ Makes progress tracking intuitive ("I'm in Week 7")
- ❌ Topic-based (`01-fundamentals/`, `02-pointers/`) doesn't match learning progression

**Rationale**: Learning is sequential; week-based folders mirror the actual learning path.

---

**Happy learning! 🚀**

*This structure ensures clean organization, single source of truth for resources, and clear separation between learning materials and your actual coursework.*

