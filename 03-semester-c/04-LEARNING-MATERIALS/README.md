# C Language Learning Materials - Semester 1

**Complete resource package for learning C (Weeks 1-20)**

---

## 📁 Folder Structure

```
LEARNING-MATERIALS/
├── README.md                    ← START HERE
├── 01-guides/                   ← Learning guides
│   ├── 00-INDEX.md              (Navigation hub)
│   ├── 01-LEARNING-GUIDE-C.md   (15-week accelerated structured path)
│   ├── 02-COMPILATION-REFERENCE.md (Build & debug tools)
│   └── 03-DEBUGGING-GUIDE.md    (Troubleshooting)
├── 02-templates/                ← Reusable code templates
│   ├── 00-hello.c
│   ├── 01-Makefile.template
│   └── multi-file/
│       ├── 00-main.c
│       ├── 01-Makefile
│       ├── 02-utils.h
│       └── 03-utils.c
├── 03-exercises/                ← Exercise solutions & templates
│   ├── week-01-02/
│   ├── week-03-04/
│   ├── ...
│   └── week-19-20/
└── 04-projects/                 ← Project guides
    ├── simple-calculator/
    └── semester-project-guide.md
```

---

## 🚀 Quick Start

### 1. Read First
- Start with [01-guides/00-INDEX.md](01-guides/00-INDEX.md) for navigation
- Then [01-guides/01-LEARNING-GUIDE-C.md](01-guides/01-LEARNING-GUIDE-C.md) for the full curriculum

### 2. Set Up Environment
```bash
xcode-select --install
gcc --version
```

### 3. Create First Program
Use template: [02-templates/00-hello.c](02-templates/00-hello.c)
```bash
cd ~/summer2026/03-semester-c
gcc -Wall -Wextra -std=c99 -o hello 00-hello.c
./hello
```

### 4. Use Makefile for Projects
```bash
cp 02-templates/01-Makefile.template Makefile
make
make run
```

---

## 📚 Resource Guide

| Folder | Purpose | When to Use |
|--------|---------|------------|
| **01-guides/** | Learning guides & references | Main resource for concepts |
| **02-templates/** | Ready-to-use code templates | Starting point for exercises |
| **03-exercises/** | Exercise problems & solutions | Practice & self-assessment |
| **04-projects/** | Semester project guides | Building substantial work |

---

## 📖 Main Resources

### [01-guides/01-LEARNING-GUIDE-C.md](01-guides/01-LEARNING-GUIDE-C.md)
- **20-week curriculum** with academic URLs
- **13 exercise templates** (4-6 hours each)
- **Simple calculator project** (milestone-based)
- **Assessment checklist** per week

### [01-guides/COMPILATION-REFERENCE.md](01-guides/COMPILATION-REFERENCE.md)
- **Compilation commands** (basic, debug, production)
- **GCC/Clang flags** explained
- **Makefile templates**
- **GDB & Valgrind** setup

### [01-guides/DEBUGGING-GUIDE.md](01-guides/DEBUGGING-GUIDE.md)
- **8 common debugging scenarios**
- **Memory leak detection**
- **String handling issues**
- **Troubleshooting workflows**

### [01-guides/INDEX.md](01-guides/INDEX.md)
- **Navigation hub** for all resources
- **Week-by-week learning path**
- **Quick command reference**

---

## 🎯 Weekly Learning Path

| Weeks | Topic | Time | Resources |
|-------|-------|------|-----------|
| 1-2 | Variables & Data Types | 4 hrs | [LEARNING-GUIDE-C](01-guides/01-LEARNING-GUIDE-C.md) + [Codecademy C](https://www.codecademy.com/learn/learn-c) |
| 3-4 | Operators | 3 hrs | [LEARNING-GUIDE-C](01-guides/01-LEARNING-GUIDE-C.md) + YouTube Tutorial |
| 5-6 | Control Flow | 4 hrs | [LEARNING-GUIDE-C](01-guides/01-LEARNING-GUIDE-C.md) + Practice |
| 7-8 | Loops | 4 hrs | [LEARNING-GUIDE-C](01-guides/01-LEARNING-GUIDE-C.md) + Coursera C |
| 9-10 | Functions | 5 hrs | [LEARNING-GUIDE-C](01-guides/01-LEARNING-GUIDE-C.md) + Practice |
| 11-12 | Arrays & Strings | 5 hrs | [LEARNING-GUIDE-C](01-guides/01-LEARNING-GUIDE-C.md) + YouTube |
| 13-14 | Pointers | 6 hrs | [LEARNING-GUIDE-C](01-guides/01-LEARNING-GUIDE-C.md) + Debug |
| 15-16 | Dynamic Memory | 5 hrs | [LEARNING-GUIDE-C](01-guides/01-LEARNING-GUIDE-C.md) + Valgrind |
| 17-18 | Structures | 4 hrs | [LEARNING-GUIDE-C](01-guides/01-LEARNING-GUIDE-C.md) + Practice |
| 19-20 | File I/O | 4 hrs | [LEARNING-GUIDE-C](01-guides/01-LEARNING-GUIDE-C.md) + **Project** |

---

## 📝 How to Use This Structure

### For Each Week

1. **Read:** Go to [01-guides/LEARNING-GUIDE.md](01-guides/LEARNING-GUIDE.md) and find your week
2. **Learn:** Follow the academic reading links
3. **Practice:** Use templates from [02-templates/](02-templates/) and practice problems
4. **Exercise:** Complete exercise from [03-exercises/week-XX/](03-exercises/)
5. **Debug:** If stuck, consult [01-guides/DEBUGGING-GUIDE.md](01-guides/DEBUGGING-GUIDE.md)
6. **Compile:** Use reference from [01-guides/COMPILATION-REFERENCE.md](01-guides/COMPILATION-REFERENCE.md)

### For Projects

- Follow guide in [04-projects/simple-calculator/](04-projects/simple-calculator/)
- Use Makefile from [02-templates/Makefile.template](02-templates/Makefile.template)
- Reference code structure in [02-templates/multi-file/](02-templates/multi-file/)

### For Debugging

1. **Problem description** → Find scenario in [01-guides/DEBUGGING-GUIDE.md](01-guides/DEBUGGING-GUIDE.md)
2. **Solution steps** → Follow the debugging workflow
3. **Tools needed** → Check [01-guides/COMPILATION-REFERENCE.md](01-guides/COMPILATION-REFERENCE.md)

---

## 🔧 Essential Commands

```bash
# Compilation
gcc -Wall -Wextra -std=c99 -o program program.c

# Debugging
gdb ./program
valgrind --leak-check=full ./program

# Build with Makefile
make && make run

# Version control
git add exercise.c
git commit -m "[c-week-X] topic: brief description"
```

---

## ✅ Assessment Checklist (Weekly)

- [ ] Understand core concepts (can explain from memory)
- [ ] Write code without copy-paste
- [ ] Compile with `-Wall -Wextra -Werror` (zero warnings)
- [ ] Solve 3-5 practice problems
- [ ] Debug errors using provided guides
- [ ] Commit code to Git
- [ ] Pass Valgrind checks (Weeks 13+)

---

## 🎓 Learning Resources

**Primary Learning Platforms:**

1. **Codecademy** - Interactive C Course
   - [Learn C on Codecademy](https://www.codecademy.com/learn/learn-c)
   - Hands-on exercises and instant feedback

2. **Coursera & Free Academic Resources**
   - [Duke University C Programming](https://www.coursera.org/learn/c-for-everyone)
   - [Programming Basics by University Courses](https://www.coursera.org/learn/programming-basics)
   - Access through Coursera's audit option (free)

3. **YouTube Channels**
   - Brian Will's C Programming Tutorials
   - The Cherno's C Series
   - Neso Academy C Programming

---

## 📚 Next Steps

1. **Read** [01-guides/INDEX.md](01-guides/INDEX.md)
2. **Follow** [01-guides/LEARNING-GUIDE.md](01-guides/LEARNING-GUIDE.md) Week 1-2
3. **Create** first program from [02-templates/hello.c](02-templates/hello.c)
4. **Practice** with [03-exercises/week-01-02/](03-exercises/week-01-02/)
5. **Commit** to Git with clear messages

---

**Happy learning! 🚀**

*Semester 1 Complete Resource Package (Weeks 1-20)*
*Last updated: June 11, 2026*
