# C Learning Materials - Navigation Index

Complete guide to navigate LEARNING-MATERIALS package.

---

## 📁 Organization Overview

```
LEARNING-MATERIALS/
├── README.md                    ← Start here
├── 01-guides/                   ← You are here
│   ├── 00-INDEX.md              (This file)
│   ├── 01-LEARNING-GUIDE-C.md   (15-week accelerated curriculum)
│   ├── 02-COMPILATION-REFERENCE.md (Build tools)
│   └── 03-DEBUGGING-GUIDE.md    (Troubleshooting)
├── 02-templates/                ← Code templates
│   ├── 00-hello.c
│   ├── 01-Makefile.template
│   └── multi-file/
├── 03-exercises/                ← Practice problems
│   ├── week-01-02/
│   └── ...week-19-20/
└── 04-projects/                 ← Projects
    ├── simple-calculator/
    └── semester-project-guide.md
```

---

## 🎯 Quick Navigation

### For Getting Started
**Goal:** Set up and run first C program
**Read:** [../README.md](../README.md) → [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#part-1-quick-start---setup--first-program)
**Do:** Copy hello.c from `../02-templates/00-hello.c`, compile and run

### For Learning This Week
**Goal:** Learn new topic based on week number
**Read:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#part-2-structured-learning-path) (look at your week in the table)
**Links:** Find Codecademy, Coursera, and YouTube resources in the table
**Practice:** Complete exercises from those platforms

### For Compiling Your Code
**Goal:** Understand compilation flags and commands
**Read:** [02-COMPILATION-REFERENCE.md](02-COMPILATION-REFERENCE.md)
**Quick:** `gcc -Wall -Wextra -std=c99 -o program program.c`
**Advanced:** See Makefile.template at `../02-templates/01-Makefile.template`

### For When Your Program Crashes
**Goal:** Debug segmentation fault or crash
**Read:** [03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md#scenario-1-program-crashes-immediately)
**Tools:** Valgrind (`valgrind --leak-check=full ./program`)

### For Wrong Output
**Goal:** Find logic errors
**Read:** [03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md#scenario-2-wrong-output-or-logic-errors)
**Tool:** GDB (`gdb ./program`)

### For Memory Leaks
**Goal:** Find and fix memory leaks
**Read:** [03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md#scenario-3-memory-leaks)
**Tool:** Valgrind with detailed output

### For Practice Exercises
**Goal:** Practice this week's topic
**Go to:** `../03-exercises/week-XX/`
**Solutions:** Reference implementations available

### For Project Work
**Goal:** Build semester project
**Go to:** `../04-projects/`
**Reference:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#part-6-project-milestone---simple-calculator-with-logging)

---

## 📚 Resource Guide by Purpose

| Purpose | Main File | Key Sections |
|---------|-----------|--------------|
| **Learn new topic** | [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md) | Part 2 (15-week table) |
| **Compile code** | [02-COMPILATION-REFERENCE.md](02-COMPILATION-REFERENCE.md) | Basic Compilation, Flags |
| **Debug problems** | [03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md) | 8 Scenarios (choose yours) |
| **Set up first time** | [../README.md](../README.md) | Quick Start section |
| **Code templates** | `../02-templates/` | 00-hello.c, 01-Makefile.template |
| **Practice problems** | `../03-exercises/` | week-XX folders |
| **Project guide** | `../04-projects/simple-calculator/` | Milestone breakdown |

---

## 🗓️ Accelerated 15-Week Summer Learning Path

### **Phase 1: Fast-Track Fundamentals (Weeks 1-3) ⚡**

**Week 1: Variables, Data Types, Operators & I/O**
- **Read:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#phase-1-fast-track-fundamentals-weeks-1-3) Phase 1
- **Learn from:** [Codecademy: C Basics](https://www.codecademy.com/learn/learn-c)
- **Practice:** [YouTube: C Basics & Operators](https://www.youtube.com/)
- **Exercises:** See `../03-exercises/week-01/`
- **Coursework:** Write programs in `../../01-coursework/week-01/`
- **Time:** 3 hours

**Week 2: Decision Making & Conditionals**
- **Read:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#phase-1-fast-track-fundamentals-weeks-1-3) Phase 1
- **Learn from:** [Codecademy: Conditional Statements](https://www.codecademy.com/learn/learn-c)
- **Practice:** [YouTube: If/Else Tutorial](https://www.youtube.com/)
- **Exercises:** See `../03-exercises/week-02/`
- **Coursework:** `../../01-coursework/week-02/`
- **Time:** 3 hours

**Week 3: Loops & Iteration**
- **Read:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#phase-1-fast-track-fundamentals-weeks-1-3) Phase 1
- **Learn from:** [Coursera: Loops in C](https://www.coursera.org/learn/c-for-everyone)
- **Practice:** [Codecademy: C Loops](https://www.codecademy.com/learn/learn-c)
- **Exercises:** See `../03-exercises/week-03/`
- **Coursework:** `../../01-coursework/week-03/`
- **Time:** 4 hours

---

### **Phase 2: Functions & Modularity (Weeks 4-6)**

**Week 4: Functions - Basics**
- **Read:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#phase-2-functions--modularity-weeks-4-6) Phase 2
- **Learn from:** [Codecademy: Functions](https://www.codecademy.com/learn/learn-c)
- **Practice:** [YouTube: C Functions](https://www.youtube.com/)
- **Exercises:** See `../03-exercises/week-04/`
- **Coursework:** `../../01-coursework/week-04/`
- **Time:** 4 hours

**Week 5: Functions - Advanced**
- **Read:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#phase-2-functions--modularity-weeks-4-6) Phase 2
- **Learn from:** [Coursera: Advanced Functions](https://www.coursera.org/learn/c-for-everyone)
- **Practice:** [YouTube: Recursion & Function Pointers](https://www.youtube.com/)
- **Exercises:** See `../03-exercises/week-05/`
- **Coursework:** `../../01-coursework/week-05/`
- **Time:** 4 hours

**Week 6: Build Systems & Headers**
- **Read:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#phase-2-functions--modularity-weeks-4-6) Phase 2
- **Build reference:** [02-COMPILATION-REFERENCE.md](02-COMPILATION-REFERENCE.md)
- **Templates:** See `../02-templates/01-Makefile.template`
- **Exercises:** See `../03-exercises/week-06/`
- **Coursework:** `../../01-coursework/week-06/`
- **Time:** 4 hours

---

### **Phase 3: Collections (Weeks 7-8)**

**Week 7: Arrays**
- **Read:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#phase-3-collections-weeks-7-8) Phase 3
- **Learn from:** [Codecademy: Arrays](https://www.codecademy.com/learn/learn-c)
- **Practice:** [YouTube: Arrays Tutorial](https://www.youtube.com/)
- **Exercises:** See `../03-exercises/week-07/`
- **Coursework:** `../../01-coursework/week-07/`
- **Debug help:** [Array bounds](03-DEBUGGING-GUIDE.md#scenario-5-array-out-of-bounds)
- **Time:** 4 hours

**Week 8: Strings**
- **Read:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#phase-3-collections-weeks-7-8) Phase 3
- **Learn from:** [Codecademy: Strings](https://www.codecademy.com/learn/learn-c)
- **Practice:** [YouTube: String Handling](https://www.youtube.com/)
- **Exercises:** See `../03-exercises/week-08/`
- **Coursework:** `../../01-coursework/week-08/`
- **Debug help:** [String handling](03-DEBUGGING-GUIDE.md#scenario-4-string-handling-issues)
- **Time:** 3 hours

---

### **Phase 4: Pointers & Memory Management (Weeks 9-12) 🔑 EXTENDED TIME**

**Week 9: Pointer Fundamentals**
- **Read:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#phase-4-pointers--memory-management-weeks-9-12--extended-time) Phase 4
- **Learn from:** [Codecademy: Pointers](https://www.codecademy.com/learn/learn-c)
- **Practice:** [YouTube: Pointers Explained](https://www.youtube.com/)
- **Exercises:** See `../03-exercises/week-09/`
- **Coursework:** `../../01-coursework/week-09/`
- **Debug help:** [Program crashes](03-DEBUGGING-GUIDE.md#scenario-1-program-crashes-immediately)
- **Time:** 7 hours

**Week 10: Pointer Applications**
- **Read:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#phase-4-pointers--memory-management-weeks-9-12--extended-time) Phase 4
- **Learn from:** [Coursera: Pointer Patterns](https://www.coursera.org/learn/c-for-everyone)
- **Practice:** [YouTube: Advanced Pointer Usage](https://www.youtube.com/)
- **Exercises:** See `../03-exercises/week-10/`
- **Coursework:** `../../01-coursework/week-10/`
- **Time:** 6 hours

**Week 11: Dynamic Memory**
- **Read:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#phase-4-pointers--memory-management-weeks-9-12--extended-time) Phase 4
- **Learn from:** [Coursera: Memory Management](https://www.coursera.org/learn/c-for-everyone)
- **Practice:** [YouTube: Dynamic Memory](https://www.youtube.com/)
- **Exercises:** See `../03-exercises/week-11/`
- **Coursework:** `../../01-coursework/week-11/`
- **Memory check:** `valgrind --leak-check=full ./program`
- **Debug help:** [Memory leaks](03-DEBUGGING-GUIDE.md#scenario-3-memory-leaks)
- **Time:** 7 hours

**Week 12: Pointer-to-Pointer & Advanced Memory**
- **Read:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#phase-4-pointers--memory-management-weeks-9-12--extended-time) Phase 4
- **Learn from:** [Codecademy: Advanced Pointers](https://www.codecademy.com/learn/learn-c)
- **Practice:** [YouTube: Debugging Memory](https://www.youtube.com/)
- **Exercises:** See `../03-exercises/week-12/`
- **Coursework:** `../../01-coursework/week-12/`
- **Time:** 6 hours

---

### **Phase 5: Data Structures & Capstone (Weeks 13-15)**

**Week 13: Structures & Complex Types**
- **Read:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#phase-5-data-structures--advanced-topics-weeks-13-15) Phase 5
- **Learn from:** [Codecademy: Structures](https://www.codecademy.com/learn/learn-c)
- **Practice:** [YouTube: C Structs](https://www.youtube.com/)
- **Exercises:** See `../03-exercises/week-13/`
- **Coursework:** `../../01-coursework/week-13/`
- **Time:** 5 hours

**Week 14: Structures with Pointers**
- **Read:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#phase-5-data-structures--advanced-topics-weeks-13-15) Phase 5
- **Learn from:** [Coursera: Struct Patterns](https://www.coursera.org/learn/c-for-everyone)
- **Practice:** [YouTube: Linked Lists](https://www.youtube.com/)
- **Exercises:** See `../03-exercises/week-14/`
- **Coursework:** `../../01-coursework/week-14/`
- **Time:** 6 hours

**Week 15: File I/O & Wrap-up**
- **Read:** [01-LEARNING-GUIDE-C.md](01-LEARNING-GUIDE-C.md#phase-5-data-structures--advanced-topics-weeks-13-15) Phase 5
- **Learn from:** [Coursera: File I/O](https://www.coursera.org/learn/c-for-everyone)
- **Practice:** [YouTube: File I/O](https://www.youtube.com/)
- **Exercises:** See `../03-exercises/week-15/`
- **Coursework:** `../../01-coursework/week-15/`
- **Final project:** [04-projects/simple-calculator/](../04-projects/simple-calculator/)
- **Time:** 5 hours

---

## 🔧 Compilation & Debugging Quick Reference

```bash
# Compile single file
gcc -Wall -Wextra -std=c99 -o program program.c

# Compile with debug symbols
gcc -Wall -Wextra -std=c99 -g -o program program.c

# Run debugger
gdb ./program

# Check for memory leaks
valgrind --leak-check=full ./program

# Build with Makefile
make && make run
```

---

## ❓ Common Questions - Where to Find Answers

| Question | Answer Location |
|----------|-----------------|
| How do I compile? | [02-COMPILATION-REFERENCE.md](COMPILATION-REFERENCE.md#basic-compilation) |
| My program crashes | [03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md#scenario-1-program-crashes-immediately) |
| Memory leaks detected | [03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md#scenario-3-memory-leaks) |
| Wrong output | [03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md#scenario-2-wrong-output-or-logic-errors) |
| String handling problems | [03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md#scenario-4-string-handling-issues) |
| What's my next topic? | [01-LEARNING-GUIDE-C.md](LEARNING-GUIDE.md#part-2-structured-learning-path) (Week table) |
| How to use Makefile? | [02-COMPILATION-REFERENCE.md](COMPILATION-REFERENCE.md#makefile-template) |
| Practice problems | [../03-exercises/](../03-exercises/) (organized by week) |
| Project structure | [../04-projects/simple-calculator/](../04-projects/simple-calculator/) |
| Academic resources | [01-LEARNING-GUIDE-C.md](LEARNING-GUIDE.md#part-8-recommended-resources-academic--industry-standard) |

---

## 📋 Assessment Checklist (Weekly)

After each week, verify you can:

- [ ] Explain core concepts in your own words
- [ ] Write code without copy-paste
- [ ] Compile with zero warnings (`-Wall -Wextra -Werror`)
- [ ] Solve 3-5 practice problems
- [ ] Debug errors using GDB or Valgrind
- [ ] Commit working code to Git
- [ ] Pass Valgrind memory checks (weeks 13+)

---

## 🚀 Next Steps

**First Time Using This Package:**
1. Read [../README.md](../README.md)
2. Read [01-LEARNING-GUIDE-C.md](LEARNING-GUIDE.md#part-1-quick-start---setup--first-program)
3. Set up: `xcode-select --install`
4. Create first program from `../02-templates/hello.c`
5. Compile and run
6. Come back to [01-LEARNING-GUIDE-C.md](LEARNING-GUIDE.md#part-2-structured-learning-path) for Week 1-2

**For Each Week:**
1. Find your week in [01-LEARNING-GUIDE-C.md](LEARNING-GUIDE.md#part-2-structured-learning-path) table
2. Follow reading link
3. Practice on HackerRank
4. Do exercises from `../03-exercises/week-XX/`
5. Check [02-COMPILATION-REFERENCE.md](COMPILATION-REFERENCE.md) for build commands
6. Use [03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md) if stuck
7. Commit to Git

---

**Questions? Check the table above or search the relevant guide file.**

*Last updated: June 11, 2026*
*See: ../README.md for folder overview*
