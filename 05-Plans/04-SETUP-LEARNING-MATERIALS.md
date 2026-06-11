# Setup Learning Materials for All Languages

This document contains prompts and instructions for creating organized learning materials for Python, Java, and C++, following the same structure successfully implemented for C.

---

## 📋 Quick Reference: What Was Done for C

**Structure Created**:
```
03-semester-c/04-LEARNING-MATERIALS/
├── README.md
├── 01-guides/
│   ├── 00-INDEX.md (Navigation hub)
│   ├── 01-LEARNING-GUIDE-C.md (15-week curriculum, 5 phases, 69 hours)
│   ├── 02-COMPILATION-REFERENCE.md (Build reference)
│   └── 03-DEBUGGING-GUIDE.md (Troubleshooting)
├── 02-templates/
│   ├── 00-hello.c (First program)
│   ├── 01-Makefile.template (Build template)
│   └── multi-file/
├── 03-exercises/
│   ├── README.md
│   └── week-01/ through week-15/
└── 04-projects/
    ├── simple-calculator/
    └── PROJECT-GUIDE.md
```

**Key Principles**:
- ✅ Numerical prefixes enforce reading/learning order (not alphabetical)
- ✅ Guides progress from navigation → curriculum → build → debug
- ✅ Templates progress from hello.c → Makefile → multi-file examples
- ✅ Exercises organized by week matching the curriculum
- ✅ Projects include clear milestones and implementation guides

---

# 🐍 PYTHON - Setup Prompts

## Prompt 1: Create Python Learning Materials Structure

```
Create organized learning materials for Python (Semester 1) following the C language structure model.

TASK:
1. Create 01-semester-python/04-LEARNING-MATERIALS/ directory structure:
   - 01-guides/ (4 guide files with 00-03 prefixes)
   - 02-templates/ (3 template files: hello.py, requirements.txt template, multi-file example)
   - 03-exercises/ (README.md + week-01-02 through week-10 folders for 20-week plan)
   - 04-projects/ (Project guide for semester project)

2. Create 01-guides/ files:
   - 00-INDEX.md: Navigation hub for Python learning materials
     * Quick navigation sections for: getting started, learning by week, setting up venv, running tests, debugging
     * Resource guide pointing to official Python docs, tutorialspoint, real Python articles
     * Learning path by week matching Python fundamentals → OOP → libraries

   - 01-LEARNING-GUIDE.md: 10-week Python curriculum
     * Part 1: Quick Start - setup venv, install packages, run first program
     * Part 2: Structured Learning Path (table with weeks, topics, key concepts, practice links)
     * Part 3: Python-specific practices (venv usage, pip package management, virtual environments)
     * Part 4: Debugging setup (pdb debugger, logging, IDE debugging)
     * Part 5: Testing setup (pytest, unittest frameworks)
     * Part 6: Project milestones (simple program → OOP program → web scraper)
     * Part 7: Assessment checklist
     * Part 8: Resources (links to documentation, tutorials, practice sites)

   - 02-COMPILATION-REFERENCE.md: Python execution and package management
     * Python versions and version management (pyenv, conda)
     * Virtual environments (venv, virtualenv, pipenv)
     * pip commands and package installation
     * Running scripts and interactive REPL
     * Common debugging tools (pdb, print debugging, logging)
     * pytest command reference
     * black formatter usage

   - 03-DEBUGGING-GUIDE.md: Common Python debugging scenarios
     * 8-10 scenarios: ImportError, AttributeError, TypeError, NameError, IndexError, KeyError, common logic errors, library issues
     * Debugging tools covered: pdb debugger (breakpoint, list, step, continue, print)
     * Logging module setup and usage
     * Common pitfalls specific to Python

3. Create 02-templates/:
   - 00-hello.py (simple print statement program)
   - 01-requirements.txt (template for pip dependencies)
   - multi-file/ (package structure example with __init__.py, main.py, utils.py)

4. Create 03-exercises/:
   - README.md with week structure (week-01-02 through week-10) showing 3 exercises per week (A/B/C difficulty)
   - Create week-01-02 through week-10 folders

5. Create 04-projects/:
   - PROJECT-GUIDE.md: 4-milestone semester project (simple calculator → OOP calculator → web scraper → data analyzer)

COMPLETION CHECKLIST:
- [ ] All 4 guide files created with proper prefixes
- [ ] All 40+ file references in guides point to correct files
- [ ] All template files created
- [ ] All exercise week folders created (10 total for 20-week Python plan)
- [ ] PROJECT-GUIDE.md includes 4 clear milestones with deliverables
- [ ] Navigation works from 00-INDEX → other guides
- [ ] Cross-references between files all working
```

---

## Prompt 2: Verify Python Learning Materials

```
Verify that Python learning materials are complete and well-organized.

CHECKLIST:
1. Structure verification:
   - [ ] 04-LEARNING-MATERIALS/ exists with README.md
   - [ ] 01-guides/ has exactly 4 files: 00-INDEX.md, 01-LEARNING-GUIDE.md, 02-COMPILATION-REFERENCE.md, 03-DEBUGGING-GUIDE.md
   - [ ] 02-templates/ has: 00-hello.py, 01-requirements.txt, multi-file/
   - [ ] multi-file/ has: __init__.py, main.py, utils.py
   - [ ] 03-exercises/ has README.md + 10 week folders
   - [ ] 04-projects/ has PROJECT-GUIDE.md

2. Content verification:
   - [ ] 00-INDEX.md includes "venv setup" section
   - [ ] 01-LEARNING-GUIDE.md includes "venv usage" and "pip" sections
   - [ ] 02-COMPILATION-REFERENCE.md covers venv, pip, pdb, pytest, black
   - [ ] 03-DEBUGGING-GUIDE.md covers ImportError, AttributeError, TypeError, NameError, etc.
   - [ ] 00-hello.py contains valid Python code
   - [ ] 01-requirements.txt has template format

3. Cross-reference verification:
   - [ ] 00-INDEX.md links work to other guides
   - [ ] 01-LEARNING-GUIDE.md links to templates and debugging guide
   - [ ] 02-COMPILATION-REFERENCE.md includes practice site links
   - [ ] All paths use new prefixed filenames

4. Display order verification:
   - [ ] File explorer shows: 00-INDEX → 01-LEARNING-GUIDE → 02-COMPILATION → 03-DEBUGGING (not alphabetical)
   - [ ] week-01-02 through week-10 show in order (not alphabetical by content)
```

---

# ☕ JAVA - Setup Prompts

## Prompt 3: Create Java Learning Materials Structure

```
Create organized learning materials for Java (Semester 2) following the C language structure model.

TASK:
1. Create 02-semester-java/04-LEARNING-MATERIALS/ directory structure:
   - 01-guides/ (4 guide files with 00-03 prefixes)
   - 02-templates/ (3 template files: HelloWorld.java, build.gradle template, multi-file example)
   - 03-exercises/ (README.md + week-01-02 through week-10 folders for 20-week plan)
   - 04-projects/ (Project guide for semester project)

2. Create 01-guides/ files:
   - 00-INDEX.md: Navigation hub for Java learning materials
     * Quick navigation sections for: getting started, learning by week, setting up Gradle, running tests, debugging
     * Resource guide pointing to Java docs, baeldung, HackerRank, LeetCode
     * Learning path by week matching Java basics → OOP → Collections → Streams

   - 01-LEARNING-GUIDE.md: 10-week Java curriculum
     * Part 1: Quick Start - JDK setup, Gradle build, run first program
     * Part 2: Structured Learning Path (table with weeks, topics, key concepts, practice links)
     * Part 3: Java-specific practices (package structure, Maven/Gradle, unit testing)
     * Part 4: Debugging setup (IDE debugger, breakpoints, variable inspection)
     * Part 5: Testing setup (JUnit 5, Mockito frameworks)
     * Part 6: Project milestones (console app → GUI app → REST API → full application)
     * Part 7: Assessment checklist
     * Part 8: Resources (docs, tutorials, practice sites)

   - 02-COMPILATION-REFERENCE.md: Java compilation and build management
     * JDK installation and version management
     * javac compilation (single file, multiple files, classpath)
     * Java execution (java command, arguments, classpath)
     * Gradle basics (build.gradle structure, tasks, dependencies)
     * Maven basics (pom.xml, alternatives)
     * JAR file creation and execution
     * IDE compilation vs command-line
     * Common compiler flags and options
     * Debugging with IDE and command-line tools

   - 03-DEBUGGING-GUIDE.md: Common Java debugging scenarios
     * 8-10 scenarios: ClassNotFoundException, NullPointerException, ArrayIndexOutOfBoundsException,
       IllegalArgumentException, concurrent issues, memory leaks, wrong output, logic errors
     * Debugging tools: IDE debugger (breakpoint, step, variable watch), System.out.println, logging frameworks
     * JVM debugging concepts
     * Common pitfalls specific to Java

3. Create 02-templates/:
   - 00-HelloWorld.java (simple public class with main method)
   - 01-build.gradle (template for Gradle build file with common dependencies)
   - multi-file/ (package structure example with App.java, Utils.java, separate files)

4. Create 03-exercises/:
   - README.md with week structure (week-01-02 through week-10) showing 3 exercises per week (A/B/C difficulty)
   - Create week-01-02 through week-10 folders

5. Create 04-projects/:
   - PROJECT-GUIDE.md: 4-milestone semester project (calculator → GUI calculator → data app → final project)

COMPLETION CHECKLIST:
- [ ] All 4 guide files created with proper prefixes
- [ ] 00-INDEX.md references Gradle setup and JUnit
- [ ] 01-LEARNING-GUIDE.md includes Maven/Gradle sections
- [ ] 02-COMPILATION-REFERENCE.md covers javac, gradle, JAR files
- [ ] 03-DEBUGGING-GUIDE.md covers Java-specific exceptions
- [ ] 00-HelloWorld.java follows Java conventions (public class)
- [ ] 01-build.gradle includes common dependencies (JUnit 5, etc.)
- [ ] multi-file example shows package structure and class organization
- [ ] All 10 week folders created and in order
- [ ] Cross-references between all files working
```

---

## Prompt 4: Verify Java Learning Materials

```
Verify that Java learning materials are complete and well-organized.

CHECKLIST:
1. Structure verification:
   - [ ] 04-LEARNING-MATERIALS/ exists with README.md
   - [ ] 01-guides/ has exactly 4 files: 00-INDEX.md, 01-LEARNING-GUIDE.md, 02-COMPILATION-REFERENCE.md, 03-DEBUGGING-GUIDE.md
   - [ ] 02-templates/ has: 00-HelloWorld.java, 01-build.gradle, multi-file/
   - [ ] multi-file/ has Java package structure (App.java, Utils.java, etc.)
   - [ ] 03-exercises/ has README.md + 10 week folders
   - [ ] 04-projects/ has PROJECT-GUIDE.md

2. Content verification:
   - [ ] 00-INDEX.md includes Gradle and JUnit references
   - [ ] 01-LEARNING-GUIDE.md includes Gradle/Maven and testing sections
   - [ ] 02-COMPILATION-REFERENCE.md covers javac, gradle, classpath, JAR files
   - [ ] 03-DEBUGGING-GUIDE.md covers NullPointerException, ClassNotFoundException, etc.
   - [ ] 00-HelloWorld.java has valid Java syntax (public class)
   - [ ] 01-build.gradle has proper Gradle syntax with plugins and dependencies

3. Cross-reference verification:
   - [ ] 00-INDEX.md links work to other guides
   - [ ] 01-LEARNING-GUIDE.md references templates and build system
   - [ ] 02-COMPILATION-REFERENCE.md includes practice site links
   - [ ] All paths use new prefixed filenames

4. Display order verification:
   - [ ] File explorer shows: 00-INDEX → 01-LEARNING-GUIDE → 02-COMPILATION → 03-DEBUGGING (not alphabetical)
   - [ ] week-01-02 through week-10 show in order
```

---

# 🚀 C++ - Setup Prompts

## Prompt 5: Create C++ Learning Materials Structure

```
Create organized learning materials for C++ (Semester 4) following the C language structure model.

TASK:
1. Create 04-semester-cpp/04-LEARNING-MATERIALS/ directory structure:
   - 01-guides/ (4 guide files with 00-03 prefixes)
   - 02-templates/ (3 template files: hello.cpp, CMakeLists.txt template, multi-file example)
   - 03-exercises/ (README.md + week-01-02 through week-10 folders for 20-week plan)
   - 04-projects/ (Project guide for semester project)

2. Create 01-guides/ files:
   - 00-INDEX.md: Navigation hub for C++ learning materials
     * Quick navigation sections for: getting started, learning by week, setting up build, running tests, debugging
     * Resource guide pointing to cppreference, cplusplus.com, HackerRank, competitive programming sites
     * Learning path by week matching C++ basics → OOP → STL → advanced features

   - 01-LEARNING-GUIDE.md: 10-week C++ curriculum
     * Part 1: Quick Start - compiler setup, CMake build, run first program
     * Part 2: Structured Learning Path (table with weeks, topics, key concepts, practice links)
     * Part 3: C++-specific practices (modern C++ standards, build systems, memory management)
     * Part 4: Debugging setup (gdb commands, IDE debugger, lldb on macOS)
     * Part 5: Testing setup (Google Test, Catch2 frameworks)
     * Part 6: Project milestones (console program → graphics → game → full application)
     * Part 7: Assessment checklist
     * Part 8: Resources (cppreference, tutorials, practice sites)

   - 02-COMPILATION-REFERENCE.md: C++ compilation and build management
     * C++ standards (C++11, C++17, C++20) and when to use
     * Compiler setup (clang++, g++, MSVC)
     * Compilation flags (optimization, warnings, standard selection)
     * Multi-file compilation and linking
     * CMake basics (CMakeLists.txt structure, targets, dependencies)
     * Make and Makefiles for C++
     * Object files and linking process
     * GDB commands (break, run, step, print, backtrace)
     * Valgrind for memory analysis
     * IDE compilation vs command-line

   - 03-DEBUGGING-GUIDE.md: Common C++ debugging scenarios
     * 8-10 scenarios: segmentation faults, dangling pointers, memory leaks, vector out of bounds,
       undefined behavior, linking errors, template compilation errors, logic errors
     * Debugging tools: gdb (macOS: lldb), Valgrind, Address Sanitizer, assertions
     * Debug flags (-g, -fsanitize)
     * Common pitfalls specific to C++ (RAII, move semantics, template errors)

3. Create 02-templates/:
   - 00-hello.cpp (simple std::cout program with proper includes)
   - 01-CMakeLists.txt (template for CMake build file with C++ settings)
   - multi-file/ (namespace and class structure example with main.cpp, utils.hpp, utils.cpp)

4. Create 03-exercises/:
   - README.md with week structure (week-01-02 through week-10) showing 3 exercises per week (A/B/C difficulty)
   - Create week-01-02 through week-10 folders

5. Create 04-projects/:
   - PROJECT-GUIDE.md: 4-milestone semester project (game engine milestone 1-4 with graphics, physics, etc.)

COMPLETION CHECKLIST:
- [ ] All 4 guide files created with proper prefixes
- [ ] 00-INDEX.md references C++ standards and cppreference
- [ ] 01-LEARNING-GUIDE.md includes CMake and modern C++ sections
- [ ] 02-COMPILATION-REFERENCE.md covers C++ standards, CMake, GDB, Valgrind
- [ ] 03-DEBUGGING-GUIDE.md covers segfaults, dangling pointers, memory leaks, UB
- [ ] 00-hello.cpp uses std::cout and proper C++ syntax
- [ ] 01-CMakeLists.txt includes C++ standard setting (C++20 or C++17)
- [ ] multi-file example shows namespace structure and header/implementation separation
- [ ] All 10 week folders created and in order
- [ ] Cross-references between all files working
```

---

## Prompt 6: Verify C++ Learning Materials

```
Verify that C++ learning materials are complete and well-organized.

CHECKLIST:
1. Structure verification:
   - [ ] 04-LEARNING-MATERIALS/ exists with README.md
   - [ ] 01-guides/ has exactly 4 files: 00-INDEX.md, 01-LEARNING-GUIDE.md, 02-COMPILATION-REFERENCE.md, 03-DEBUGGING-GUIDE.md
   - [ ] 02-templates/ has: 00-hello.cpp, 01-CMakeLists.txt, multi-file/
   - [ ] multi-file/ has C++ structure (main.cpp, utils.hpp, utils.cpp with namespace)
   - [ ] 03-exercises/ has README.md + 10 week folders
   - [ ] 04-projects/ has PROJECT-GUIDE.md

2. Content verification:
   - [ ] 00-INDEX.md includes C++ standards and cppreference references
   - [ ] 01-LEARNING-GUIDE.md includes CMake and modern C++ sections
   - [ ] 02-COMPILATION-REFERENCE.md covers C++ standards, CMake, GDB, lldb, Valgrind
   - [ ] 03-DEBUGGING-GUIDE.md covers segmentation faults, memory leaks, undefined behavior
   - [ ] 00-hello.cpp uses std::cout and includes iostream
   - [ ] 01-CMakeLists.txt has proper C++ settings (set(CMAKE_CXX_STANDARD 20))

3. Cross-reference verification:
   - [ ] 00-INDEX.md links work to other guides
   - [ ] 01-LEARNING-GUIDE.md references templates and build system
   - [ ] 02-COMPILATION-REFERENCE.md includes cppreference links
   - [ ] All paths use new prefixed filenames

4. Display order verification:
   - [ ] File explorer shows: 00-INDEX → 01-LEARNING-GUIDE → 02-COMPILATION → 03-DEBUGGING (not alphabetical)
   - [ ] week-01-02 through week-10 show in order
```

---

# 🎯 Summary: Next Steps

After creating learning materials for all languages, you'll have:

**Python (Semester 1)**
- Structured venv and pip-focused guides
- Web scraping and data analysis project focus
- 10-week curriculum with practical exercises

**Java (Semester 2)**
- Gradle-focused build system guides
- GUI and REST API project focus
- 10-week curriculum with OOP emphasis

**C++ (Semester 4)**
- CMake and modern C++ guides
- Game engine and graphics project focus
- 10-week curriculum with STL and OOP

**All Languages**
- Consistent directory structure with 00-03 prefix ordering
- 4 guides: navigation hub → curriculum → build reference → debugging
- Templates for first programs and build files
- Multi-file examples showing best practices
- 10 weeks of exercises (3 per week: easy/medium/hard)
- Project guides with clear milestones

---

# 📝 Notes

- Use the C learning materials as the **reference template** for structure
- Adapt language-specific content (Python = venv/pip, Java = Gradle, C++ = CMake)
- Maintain consistent file naming with numerical prefixes
- Ensure all cross-references point to correct files with new prefixes
- Keep exercise and project structures parallel across all languages for learning consistency
