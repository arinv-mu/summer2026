# Electronics Engineering Learning Repository

Welcome to your comprehensive multi-language learning repository! This workspace is structured for progression through 4 semesters, each focusing on a specific programming language.

## 📚 Repository Overview

This repository contains structured learning materials for:
- **Semester 1**: Python (Fundamentals, Web Scraping, Data Structures)
- **Semester 2**: Java (Fundamentals, Collections Framework, Streams API)
- **Semester 3**: C (Fundamentals, Pointers & Memory, Data Structures)
- **Semester 4**: C++ (Fundamentals, OOP, STL & Algorithms)

## 🚀 Quick Start

### 1. Repository Setup
```bash
cd /Users/arinvashistha/summer2026
git init
git add .
git commit -m "Initial semester-wise project structure"
```

### 2. Current Semester (Semester 1 - Python)
```bash
cd semester-1-python
python3 -m venv venv
source venv/bin/activate
pip install -r requirements.txt
```

### 3. Run Hello World
```bash
python3 coursework/fundamentals/hello.py
```

## 📂 Directory Structure

```
summer2026/
├── Plans/                          # Planning documents
│   ├── PLAN-1-Repository-Structure.md
│   ├── PLAN-2-VS-Code-Installation.md
│   └── PLAN-3-Learning-Journey.md
│
├── semester-1-python/              # Python (Semester 1)
│   ├── coursework/
│   ├── projects/
│   ├── exercises/
│   ├── requirements.txt
│   └── SETUP.md
│
├── semester-2-java/                # Java (Semester 2)
│   ├── coursework/
│   ├── projects/
│   ├── exercises/
│   ├── build.gradle
│   └── SETUP.md
│
├── semester-3-c/                   # C (Semester 3)
│   ├── coursework/
│   ├── projects/
│   ├── exercises/
│   ├── CMakeLists.txt
│   └── SETUP.md
│
├── semester-4-cpp/                 # C++ (Semester 4)
│   ├── coursework/
│   ├── projects/
│   ├── exercises/
│   ├── CMakeLists.txt
│   └── SETUP.md
│
├── .gitignore
├── README.md                       # This file
├── LANGUAGES.md                    # Language-specific info
├── SEMESTER-NOTES.md               # Progress tracking
└── .vscode/                        # VS Code configuration
```

## 🎯 Learning Path

### Semester 1 (Python)
- Focus: Fundamentals & practical scripting
- Topics: Variables, loops, functions, web scraping, data structures
- Commitment: 10-15 hours/week
- Start: See `semester-1-python/SETUP.md`

### Semester 2 (Java)
- Focus: Object-Oriented Programming
- Topics: Classes, inheritance, collections, streams
- Commitment: 10-15 hours/week
- Start: See `semester-2-java/SETUP.md`

### Semester 3 (C)
- Focus: Low-level programming & memory management
- Topics: Pointers, memory allocation, data structures, algorithms
- Commitment: 10-15 hours/week
- Start: See `semester-3-c/SETUP.md`

### Semester 4 (C++)
- Focus: Modern C++ & advanced features
- Topics: Classes, inheritance, STL, algorithms, template metaprogramming
- Commitment: 10-15 hours/week
- Start: See `semester-4-cpp/SETUP.md`

## 🔧 Development Environment

- **OS**: macOS (Mac Air)
- **IDE**: VS Code
- **Languages**: Python 3.12, Java 21, C (C17), C++ (C++20)
- **Build Tools**: pip, Gradle, CMake, Make

For detailed setup instructions, see `Plans/PLAN-2-VS-Code-Installation.md`

## 📝 Git Workflow

### Initial Commits
```bash
# Semester 1 start
git add semester-1-python/
git commit -m "Start Semester 1 - Python Fundamentals"

# After each major topic
git add semester-1-python/coursework/web-scraping/
git commit -m "Complete web scraping coursework"
```

### Commit Message Format
```
<Type>: <Short description>

<Detailed explanation if needed>

Semester: 1 (Python)
Topic: Web Scraping
```

Types: feat, fix, refactor, docs, test, chore

## 📊 Progress Tracking

See `SEMESTER-NOTES.md` for:
- Weekly progress logs
- Completed topics & projects
- Challenges & learnings
- Internship/portfolio preparation notes

## 🛠️ Building & Running

### Python
```bash
python3 filename.py
```

### Java
```bash
gradle build
gradle run
```

### C
```bash
cd semester-3-c && mkdir -p build && cd build && cmake .. && make
```

### C++
```bash
cd semester-4-cpp && mkdir -p build && cd build && cmake .. && make
```

## 🐛 Debugging

- **Python**: Use `ipdb` for debugging
- **Java**: VS Code debugger or add breakpoints in IDE
- **C**: Use `lldb` or `gdb` with `-g` flag
- **C++**: Use `lldb` or `gdb` with `-g` flag

For memory leak detection in C/C++:
```bash
valgrind ./executable
```

## ✅ Verification Checklist

- [ ] All semester folders created
- [ ] SETUP.md files present in each semester
- [ ] VS Code extensions installed
- [ ] Environment variables configured
- [ ] Hello World programs run successfully
- [ ] Git repository initialized
- [ ] First commit completed

## 📖 Additional Resources

- Python: [Python Docs](https://docs.python.org/3/)
- Java: [Oracle Java Docs](https://docs.oracle.com/javase/)
- C: [C Standard](https://en.cppreference.com/w/c)
- C++: [C++ Reference](https://en.cppreference.com/w/cpp)

## 🎓 Next Steps

1. Review `PLAN-1-Repository-Structure.md` for file organization details
2. Follow `PLAN-2-VS-Code-Installation.md` for environment setup
3. Read `PLAN-3-Learning-Journey.md` for the complete learning roadmap
4. Start with `semester-1-python/SETUP.md` for Python setup
5. Begin Semester 1 coursework: `semester-1-python/coursework/fundamentals/`

---

**Last Updated**: 2026-06-10  
**Current Focus**: Semester 1 - Python  
**Estimated Completion**: 4 semesters (~1 year)
