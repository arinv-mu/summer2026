# Simple Calculator Project - Semester 1 Milestone

**Duration**: Weeks 19-20 (Final project)
**Time Commitment**: 8-10 hours total
**Difficulty**: ★★★

---

## Project Overview

Build a **menu-driven calculator** that logs operations to a file.

### Final Deliverables
- Compiled executable
- Source code with functions
- calc.log file (operations log)
- README with usage instructions

---

## Requirements

### Core Features (Must Have)
1. ✅ **Menu system**
   - Add (+)
   - Subtract (-)
   - Multiply (*)
   - Divide (/)
   - Modulo (%)
   - View history
   - Exit

2. ✅ **Input validation**
   - Check for division by zero
   - Check for invalid operators
   - Handle invalid user input gracefully

3. ✅ **File logging**
   - Log each operation: "5 + 3 = 8"
   - Append to calc.log (don't overwrite)
   - Include timestamp (optional but impressive)

4. ✅ **History display**
   - Read and display calc.log
   - Show all previous operations
   - Allow user to continue or clear history

---

## Milestones & Timeline

### Milestone 1: Basic Operations (Week 19 - Day 1-2)
**Estimated Time**: 2-3 hours

**Goals:**
- [x] Create calculator.c and calculator.h
- [x] Implement add(), subtract(), multiply() functions
- [x] Compile without warnings
- [x] Test basic operations

**Code Structure:**
```c
// calculator.h
#ifndef CALCULATOR_H
#define CALCULATOR_H

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);

#endif
```

**Main Function (partial):**
```c
// calculator.c
int main() {
    float num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculate based on operator
    // Display result

    return 0;
}
```

**Testing:**
```bash
gcc -Wall -Wextra -std=c99 -o calc calculator.c
./calc
# Input: 5, +, 3
# Expected: 5 + 3 = 8
```

**Checklist:**
- [ ] Compiles with zero warnings
- [ ] All 3 operations work correctly
- [ ] Program doesn't crash on valid input

---

### Milestone 2: Complete Operations (Week 19 - Day 3-4)
**Estimated Time**: 2 hours

**Goals:**
- [x] Add division with zero-check
- [x] Add modulo operation
- [x] Implement menu loop
- [x] User can continue or exit

**New Functions:**
```c
float divide(float a, float b);
int modulo(int a, int b);
```

**Division Function (with error handling):**
```c
float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;  // or use error code
    }
    return a / b;
}
```

**Menu Loop:**
```c
int main() {
    float num1, num2, result;
    char operator, choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        // Get input
        // Calculate
        // Display result

        printf("\nContinue? (y/n): ");
        scanf(" %c", &choice);
    }

    return 0;
}
```

**Testing:**
```bash
make && make run
# Test divide by zero handling
# Test multiple operations
```

**Checklist:**
- [ ] Division by zero is caught
- [ ] Modulo works for integer inputs
- [ ] Menu loop works correctly
- [ ] Program handles multiple operations

---

### Milestone 3: File Logging (Week 19 - Day 5-7)
**Estimated Time**: 2-3 hours

**Goals:**
- [x] Implement log_operation() function
- [x] Open file in append mode
- [x] Write operation to file
- [x] Close file properly

**File I/O Function:**
```c
void log_operation(float a, char op, float b, float result) {
    FILE* file = fopen("calc.log", "a");  // Open in append mode

    if (file == NULL) {
        printf("Error opening log file\n");
        return;
    }

    fprintf(file, "%g %c %g = %g\n", a, op, b, result);
    fclose(file);
}
```

**Call in main():**
```c
// After calculating result
log_operation(num1, operator, num2, result);
```

**Optional: Add Timestamp**
```c
#include <time.h>

void log_operation(float a, char op, float b, float result) {
    FILE* file = fopen("calc.log", "a");
    time_t now = time(NULL);

    fprintf(file, "[%s] %g %c %g = %g\n",
            ctime(&now), a, op, b, result);
    fclose(file);
}
```

**Testing:**
```bash
make clean
make run
# Perform operations
cat calc.log  # View log file
```

**Checklist:**
- [ ] calc.log is created
- [ ] Operations are logged correctly
- [ ] File doesn't crash program
- [ ] Valgrind shows no memory errors

---

### Milestone 4: History Display (Week 20 - Day 1-3)
**Estimated Time**: 1-2 hours

**Goals:**
- [x] Implement display_history() function
- [x] Read from calc.log
- [x] Display all operations
- [x] Add history option to menu

**History Display Function:**
```c
void display_history(void) {
    FILE* file = fopen("calc.log", "r");

    if (file == NULL) {
        printf("No history file found.\n");
        return;
    }

    printf("\n=== Calculation History ===\n");

    char line[256];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);  // fgets includes newline
    }

    fclose(file);
    printf("========================\n");
}
```

**Updated Menu:**
```c
printf("\n=== Calculator ===\n");
printf("1. Add (+)\n");
printf("2. Subtract (-)\n");
printf("3. Multiply (*)\n");
printf("4. Divide (/)\n");
printf("5. Modulo (%%)\n");
printf("6. View history\n");
printf("7. Clear history\n");
printf("0. Exit\n");
printf("Enter choice: ");
```

**Clear History Function:**
```c
void clear_history(void) {
    if (remove("calc.log") == 0) {
        printf("History cleared.\n");
    } else {
        printf("Error clearing history.\n");
    }
}
```

**Testing:**
```bash
make run
# Perform several operations
# Select "View history" option
# Verify all operations are displayed
```

**Checklist:**
- [ ] History displays correctly
- [ ] Each operation shows in history
- [ ] Clear history works
- [ ] Program handles missing history file

---

## File Structure

```
simple-calculator/
├── calculator.c      (Main program + functions)
├── calculator.h      (Function declarations)
├── Makefile          (Build script)
├── calc.log          (Generated at runtime)
└── README.md         (Usage instructions)
```

---

## Compilation & Execution

### Setup
```bash
cd simple-calculator
cp ../../02-templates/01-Makefile.template Makefile
# Edit Makefile: set TARGET = calc, SOURCES = calculator.c
```

### Build & Run
```bash
make               # Compile
make run           # Run program
make debug         # Debug with GDB
make valgrind      # Check memory
make clean         # Clean build files
```

### Manual Compilation
```bash
gcc -Wall -Wextra -std=c99 -o calc calculator.c
./calc
```

---

## Sample Output

```
=== Calculator ===
Enter first number: 10
Enter operator (+, -, *, /, %): +
Enter second number: 5
Result: 10 + 5 = 15
Continue? (y/n): y

=== Calculator ===
Enter first number: 20
Enter operator (+, -, *, /, %): /
Enter second number: 4
Result: 20 / 4 = 5
Continue? (y/n): n
```

### calc.log Output
```
10 + 5 = 15
20 / 4 = 5
```

---

## Testing Checklist

### Basic Functionality
- [ ] Addition works
- [ ] Subtraction works
- [ ] Multiplication works
- [ ] Division works (positive numbers)
- [ ] Modulo works

### Edge Cases
- [ ] Division by zero handled gracefully
- [ ] Invalid operator caught and reported
- [ ] Floating point results displayed correctly
- [ ] Multiple operations in sequence work

### File I/O
- [ ] calc.log created on first operation
- [ ] calc.log appends (doesn't overwrite)
- [ ] History displays all operations
- [ ] Clear history removes file
- [ ] Program works even if history doesn't exist

### Code Quality
- [ ] Compiles with `-Wall -Wextra -Werror` (zero warnings)
- [ ] Valgrind shows zero memory leaks
- [ ] GDB can debug without issues
- [ ] Code is readable and commented

---

## Code Submission Checklist

Before committing to Git:

```bash
# 1. Compile with all warnings
gcc -Wall -Wextra -Werror -std=c99 -o calc calculator.c

# 2. Check for memory leaks
gcc -Wall -Wextra -std=c99 -g -o calc calculator.c
valgrind --leak-check=full ./calc

# 3. Test operations
./calc
# Test: 10 + 5, 20 / 4, 15 * 2, etc.

# 4. Verify log file
cat calc.log

# 5. Commit
git add calculator.c calculator.h Makefile README.md
git commit -m "[c-project] simple-calculator: complete implementation

- All arithmetic operations working
- File logging implemented
- History display functional
- Input validation complete
- Valgrind shows zero memory leaks
- Compiles with zero warnings"
```

---

## README.md Template

```markdown
# Simple Calculator

A menu-driven calculator application with file logging.

## Features
- Basic arithmetic: +, -, *, /, %
- Division by zero protection
- Operation logging to file
- View calculation history
- Clear history option

## Build & Run
\`\`\`bash
make           # Compile
make run       # Run
make clean     # Clean up
\`\`\`

## Usage
1. Run: `./calc`
2. Enter two numbers and an operator
3. View result
4. Option to continue or exit
5. View history from calc.log

## Files
- calculator.c: Main implementation
- calculator.h: Function declarations
- calc.log: Operation log (created at runtime)

## Testing
\`\`\`bash
make valgrind  # Check for memory leaks
\`\`\`

---
```

---

## Common Issues & Solutions

| Issue | Solution |
|-------|----------|
| "file not found" in calc.log | Program creates it on first operation |
| Division by zero crashes | Check for b==0 before division |
| scanf() skips input | Use `scanf(" %c", &operator)` with space |
| calc.log keeps growing | Use "a" mode (append) intentionally |
| Valgrind shows memory leak | Ensure file is closed with fclose() |

---

## Extension Ideas (Optional)

After completing core requirements:

1. **History limit** - Keep only last 100 operations
2. **Timestamp** - Add date/time to log entries
3. **Statistics** - Show min/max/average from history
4. **Input validation** - Handle negative numbers, decimals
5. **Menu system** - Allow choosing operation from menu
6. **Error logging** - Log errors to separate file

---

## Resources

- See: ../01-guides/01-LEARNING-GUIDE-C.md (Parts 3 & 4)
- See: ../01-guides/02-02-COMPILATION-REFERENCE.md
- See: ../01-guides/03-03-DEBUGGING-GUIDE.md
- File I/O: [GeeksforGeeks: File I/O](https://www.geeksforgeeks.org/c-file-input-output/)

---

**Good luck with your project! 🚀**

*Milestone-based approach ensures steady progress*
*Commit early and often to Git*
