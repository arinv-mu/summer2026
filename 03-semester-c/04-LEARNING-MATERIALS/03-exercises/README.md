# Exercise Folder - Week by Week Practice

This folder contains exercise templates and problems organized by week.

---

## 📁 Organization

```
03-exercises/

Phase 1: Fast-Track Fundamentals (Weeks 1-3) ⚡
├── week-01/     (Variables, Data Types, Operators & I/O)
├── week-02/     (Decision Making & Conditionals)
├── week-03/     (Loops & Iteration)

Phase 2: Functions & Modularity (Weeks 4-6)
├── week-04/     (Functions: Basics)
├── week-05/     (Functions: Advanced)
├── week-06/     (Build Systems & Headers)

Phase 3: Collections (Weeks 7-8)
├── week-07/     (Arrays)
├── week-08/     (Strings)

Phase 4: Pointers & Memory Management (Weeks 9-12) 🔑 EXTENDED TIME
├── week-09/     (Pointer Fundamentals)
├── week-10/     (Pointer Applications)
├── week-11/     (Dynamic Memory)
├── week-12/     (Pointer-to-Pointer & Advanced Memory)

Phase 5: Data Structures & Capstone (Weeks 13-15)
├── week-13/     (Structures & Complex Types)
├── week-14/     (Structures with Pointers & Linked Lists)
└── week-15/     (File I/O & Wrap-up)
```

---

## 🎯 How to Use

### For Each Exercise

1. **Read problem** in `exercise-X.md` or `exercise-X.c`
2. **Implement** in new file (e.g., `my_solution.c`)
3. **Compile**: `gcc -Wall -Wextra -std=c99 -o solution my_solution.c`
4. **Test**: `./solution`
5. **Compare** with reference solution (if provided)
6. **Commit** to Git

### Structure of Each Exercise

Each week folder contains:
- `exercise-1.md` - Problem description
- `exercise-1-solution.c` - Reference solution (study)
- `exercise-1-hints.md` - Hints and tips (peek if stuck)

---

## ⏱️ Weekly Time Breakdown

| Phase | Week | Topic | Est. Time |
|-------|------|-------|-----------|
| 1 | 1-2 | Variables, Data Types & I/O | 5 hrs |
| 1 | 3-4 | Operators & Expressions | 4 hrs |
| 2 | 5-6 | Decision Making | 4 hrs |
| 2 | 7-8 | Loops | 5 hrs |
| 3 | 9 | Functions: Basics | 4 hrs |
| 3 | 10 | Functions: Advanced | 4 hrs |
| 3 | 11 | Build Systems & Headers | 4 hrs |
| 4 | 12 | Arrays | 5 hrs |
| 4 | 13 | Strings | 4 hrs |
| 5 | 14 | Pointer Fundamentals | 6 hrs |
| 5 | 15 | Dynamic Memory | 5 hrs |
| 5 | 16 | Advanced Pointers | 4 hrs |
| 6 | 17 | Structures & Complex Types | 5 hrs |
| 6 | 18 | File I/O & Wrap-up | 5 hrs |

---

## 📖 Exercise Categories

### Category A: Practice Problems
- Straightforward application of the week's concept
- Difficulty: ★☆☆
- Time: 30-45 minutes
- Example: Temperature converter (variables)

### Category B: Intermediate Problems
- Combines multiple concepts
- Difficulty: ★★☆
- Time: 45-90 minutes
- Example: Grade calculator (control flow + functions)

### Category C: Challenge Problems
- Requires problem-solving and planning
- Difficulty: ★★★
- Time: 90-150 minutes
- Example: Linked list basics (pointers + dynamic memory)

---

## 🎓 Learning Path

**Week 1-2 (Variables & Data Types)**
- Exercise 1: Temperature converter ★☆☆
- Exercise 2: BMI calculator ★☆☆
- Exercise 3: Age calculator ★★☆

**Week 3-4 (Operators)**
- Exercise 1: Arithmetic calculator ★☆☆
- Exercise 2: Bitwise operations ★★☆
- Exercise 3: Complex expressions ★★★

**Week 5-6 (Control Flow)**
- Exercise 1: Grade calculator ★★☆
- Exercise 2: Number classifier ★★☆
- Exercise 3: Leap year checker ★★★

**Week 7-8 (Loops)**
- Exercise 1: Multiplication table ★☆☆
- Exercise 2: FizzBuzz ★★☆
- Exercise 3: Prime number checker ★★★

**Week 9-10 (Functions)**
- Exercise 1: Power function ★★☆
- Exercise 2: GCD/LCM ★★★
- Exercise 3: Fibonacci sequence ★★★

**Week 11-12 (Arrays & Strings)**
- Exercise 1: Array statistics ★★☆
- Exercise 2: String reversal ★★☆
- Exercise 3: Palindrome checker ★★★

**Week 13-14 (Pointers)**
- Exercise 1: Swap using pointers ★★☆
- Exercise 2: Pointer arithmetic ★★★
- Exercise 3: Array of pointers ★★★

**Week 15-16 (Dynamic Memory)**
- Exercise 1: Dynamic array ★★☆
- Exercise 2: String concatenation ★★★
- Exercise 3: 2D dynamic array ★★★

**Week 17-18 (Structures)**
- Exercise 1: Student record ★★☆
- Exercise 2: Book library ★★★
- Exercise 3: Date arithmetic ★★★

**Week 19-20 (File I/O)**
- Exercise 1: Read/write file ★★☆
- Exercise 2: CSV processing ★★★
- Exercise 3: Data filtering ★★★

---

## 💡 Tips for Success

1. **Read the problem carefully** - Understand requirements before coding
2. **Plan first** - Sketch algorithm on paper
3. **Write pseudocode** - Outline logic before C code
4. **Start simple** - Get basic version working first
5. **Test edge cases** - Boundary values, empty input, etc.
6. **Compare solutions** - Study reference implementation
7. **Refactor** - Clean up code after it works
8. **Commit to Git** - Save progress regularly

---

## 🐛 Debugging Tips

```bash
# Compile with debug symbols
gcc -Wall -Wextra -std=c99 -g -o solution solution.c

# Run with GDB
gdb ./solution

# Check memory with Valgrind
valgrind --leak-check=full ./solution

# Add debug prints
printf("DEBUG: variable = %d\n", variable);
```

---

## 📝 Exercise Template

```c
/*
 * Exercise X: [Problem Title]
 *
 * Problem:
 * [Description of what to implement]
 *
 * Input: [What user provides]
 * Output: [What program should output]
 *
 * Example:
 * Input: 5, +, 3
 * Output: 5 + 3 = 8
 *
 * Difficulty: ★★☆
 * Time: ~45 minutes
 */

#include <stdio.h>

int main() {
    // Your code here

    return 0;
}
```

---

## ✅ Completion Checklist (Per Week)

- [ ] Read all problem descriptions
- [ ] Attempt all 3 exercises
- [ ] Compile with zero warnings
- [ ] Test with sample inputs
- [ ] Compare with reference solutions
- [ ] Commit to Git
- [ ] Understand any mistakes

---

## 🚀 After Completing Exercises

1. Review reference solutions - learn better approaches
2. Note patterns and best practices
3. Refactor your code for clarity
4. Add comments explaining your logic
5. Consider edge cases you missed
6. Try extending the problem (see hints for ideas)

---

## 📚 Resources

- **Learning Guide**: See ../01-guides/01-LEARNING-GUIDE-C.md for weekly topics
- **Compilation**: See ../01-guides/02-02-COMPILATION-REFERENCE.md
- **Debugging**: See ../01-guides/03-03-DEBUGGING-GUIDE.md
- **Practice Online**: HackerRank, GeeksforGeeks (links in 01-LEARNING-GUIDE-C.md)

---

## 🎯 Success Metrics

By week's end, you should:
- ✅ Understand all 3 exercises thoroughly
- ✅ Explain your solutions to someone else
- ✅ Identify where your approach differs from reference
- ✅ Know which exercise was most challenging
- ✅ Feel confident about the week's topic

---

**Remember: The goal is understanding, not just getting it working!**

*Study others' solutions. Learn from their code. Become a better programmer.*

---

*Last updated: June 11, 2026*
