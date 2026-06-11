# C++: Common Errors & Debugging Guide

## Compilation Errors (Won't Compile)

### 1. Syntax Errors

#### **error: expected ';'**
```
main.cpp:5:20: error: expected ';' after expression
    int x = 5
                   ^
```

**Cause**: Missing semicolon

**Fix**:
```cpp
// Wrong
int x = 5

// Right
int x = 5;
```

#### **error: expected unqualified-id**
```
error: expected unqualified-id
int*  // Incomplete
```

**Cause**: Missing variable name or incomplete statement

**Fix**:
```cpp
// Wrong - incomplete pointer
int* ;

// Right
int* ptr;
```

#### **error: use of undeclared identifier**
```
error: use of undeclared identifier 'cout'
```

**Cause**: Missing include or using declaration

**Fix**:
```cpp
// Wrong
cout << "Hello";

// Right - include header
#include <iostream>
using namespace std;

cout << "Hello";

// Or
#include <iostream>
std::cout << "Hello";
```

---

### 2. Include & Header Errors

#### **error: 'iostream' file not found**
```
error: 'iostream' file not found
#include <iostream>
         ^
```

**Cause**: Missing standard library

**Fix**: Ensure proper compiler flags
```bash
# Include path might be missing
clang++ -std=c++20 -I/usr/include -o program program.cpp

# Usually not needed with standard setup
```

#### **error: redefinition of class**
```
error: redefinition of 'class MyClass'
class MyClass { ... };
```

**Cause**: Header included multiple times

**Fix**: Use include guards
```cpp
// MyClass.h
#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
    // ...
};

#endif
```

---

### 3. Type Errors

#### **error: cannot initialize a variable of type 'int *' with rvalue of type 'int'**
```
int* ptr = 5;  // Wrong - int, not int*
```

**Fix**:
```cpp
// Wrong
int* ptr = 5;

// Right - get address
int x = 5;
int* ptr = &x;

// Or
int* ptr = new int(5);
```

#### **error: assignment of read-only variable**
```
error: assignment of read-only variable 'x'
const int x = 5;
x = 10;  // Can't change const
```

**Fix**:
```cpp
// Wrong
const int x = 5;
x = 10;

// Right
int x = 5;
x = 10;

// Or if you meant read-only
const int MAX = 5;
int value = 10;  // Different variable
```

---

### 4. Memory & Pointer Errors

#### **error: invalid operands to binary expression**
```
error: invalid operands to binary expression ('int' and 'int *')
int result = 5 + ptr;  // Can't add int and pointer
```

**Fix**:
```cpp
// Wrong
int result = 5 + ptr;

// Right - dereference pointer
int result = 5 + *ptr;
```

#### **Compilation OK, but Runtime: Segmentation Fault**
```
Segmentation fault: 11
```

**Cause**: Invalid memory access

**Common Issues**:
```cpp
// Accessing null pointer
int* ptr = nullptr;
cout << *ptr;  // Seg fault!

// Use after delete
int* ptr = new int(5);
delete ptr;
cout << *ptr;  // Seg fault! (use after free)

// Array out of bounds
int arr[3] = {1, 2, 3};
cout << arr[10];  // Seg fault!

// Stack overflow (infinite recursion)
void recursive() {
    recursive();  // No base case!
}
```

---

### 5. Linker Errors

#### **error: linker command failed with exit code 1**
```
undefined reference to `myFunction()'
```

**Cause**: Function declared but not defined

**Fix**:
```cpp
// Wrong - declared but not defined
void myFunction();

int main() {
    myFunction();
}
// Missing implementation!

// Right
void myFunction() {
    cout << "Hello\n";
}

int main() {
    myFunction();
}
```

#### **Multiple Definition Errors**
```
error: multiple definition of 'myFunction'
```

**Cause**: Function defined in header file (included multiple times)

**Fix**: Use inline or define in .cpp
```cpp
// MyFunctions.h - Use inline
inline void myFunction() {
    cout << "Hello\n";
}

// OR separate into .cpp
// MyFunctions.h
void myFunction();

// MyFunctions.cpp
#include "MyFunctions.h"
void myFunction() {
    cout << "Hello\n";
}
```

---

## Runtime Errors

### 1. Segmentation Fault (Access Violation)

#### **Cause: Null Pointer Dereference**
```cpp
// Wrong
int* ptr = nullptr;
*ptr = 5;  // Seg fault!

// Right
int* ptr = new int(5);
*ptr = 10;
delete ptr;
```

**Debug with LLDB**:
```bash
# Compile with debug symbols
clang++ -std=c++20 -g -o program program.cpp

# Run in debugger
lldb ./program
(lldb) run
(lldb) breakpoint set --file main.cpp --line 10
(lldb) continue
```

#### **Cause: Invalid Memory Access**
```cpp
// Wrong - array out of bounds
vector<int> vec = {1, 2, 3};
cout << vec[10];  // Undefined behavior!

// Right - check bounds
if (index < vec.size()) {
    cout << vec[index];
}
```

#### **Cause: Use After Delete**
```cpp
// Wrong
int* ptr = new int(5);
delete ptr;
cout << *ptr;  // Accessing freed memory!

// Right
int* ptr = new int(5);
cout << *ptr;
delete ptr;
ptr = nullptr;  // Good practice

// Better - use smart pointers
unique_ptr<int> ptr(new int(5));
cout << *ptr;
// Automatically freed when ptr goes out of scope
```

---

### 2. Stack Overflow (Infinite Recursion)

```cpp
// Wrong - no base case
void infinite() {
    infinite();  // Infinite recursion!
}

// Right - has base case
void countdown(int n) {
    if (n <= 0) return;  // Base case
    cout << n << "\n";
    countdown(n - 1);
}
```

---

### 3. Memory Leaks

**Detect with Address Sanitizer**:
```bash
# Compile with -fsanitize=address
clang++ -std=c++20 -fsanitize=address -g -o program program.cpp

# Run - will report leaks
./program
```

**Common Leak Pattern**:
```cpp
// Wrong - memory leak
void badFunction() {
    int* ptr = new int(5);
    // ... code ...
    return;  // Forgot to delete!
}

// Right - clean up
void goodFunction() {
    int* ptr = new int(5);
    // ... code ...
    delete ptr;
}

// Best - use smart pointers
void bestFunction() {
    unique_ptr<int> ptr(new int(5));
    // ... code ...
    // Automatically deleted!
}
```

---

### 4. Vector/Array Bounds Checking

```cpp
// Wrong - undefined behavior
vector<int> vec = {1, 2, 3};
cout << vec[10];  // Out of bounds!

// Right
if (index < vec.size()) {
    cout << vec[index];
}

// Or use .at() (throws exception)
try {
    cout << vec.at(10);
} catch (out_of_range& e) {
    cout << "Index out of bounds\n";
}
```

---

## Debugging Techniques

### 1. Print Debugging
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    cout << "DEBUG: x = " << x << "\n";

    for (int i = 0; i < 10; i++) {
        cout << "DEBUG: i = " << i << "\n";  // Track loop
    }

    return 0;
}
```

### 2. LLDB Debugging (macOS)
```bash
# Compile with debug symbols
clang++ -std=c++20 -g -o program program.cpp

# Start debugger
lldb ./program

# Key commands
(lldb) breakpoint set --file main.cpp --line 15
(lldb) run
(lldb) step           # Step into function
(lldb) next           # Step over
(lldb) continue       # Continue to next breakpoint
(lldb) print variable # Print variable value
(lldb) frame variable # Show all local variables
(lldb) bt             # Show call stack
(lldb) quit           # Exit
```

### 3. Assertions
```cpp
#include <cassert>

void withdraw(double amount) {
    assert(amount > 0);        // Check assumption
    assert(balance >= amount);
    balance -= amount;
}

// Run with assertions
// clang++ -g program.cpp
// ./a.out
```

### 4. Unit Testing (Google Test)
```cpp
#include <gtest/gtest.h>

TEST(MathTest, Addition) {
    EXPECT_EQ(4, 2 + 2);
}

TEST(MathTest, Subtraction) {
    EXPECT_EQ(2, 5 - 3);
}
```

---

## Quick Reference: Common Fixes

| Error | Likely Cause | Quick Fix |
|-------|-------------|----------|
| `undefined reference` | Function not defined | Define or link .cpp file |
| `error: expected ';'` | Missing semicolon | Add `;` at end of statements |
| `Segmentation fault` | Null pointer access | Check `nullptr` before use |
| `Cannot find include` | Missing header | Add `#include <header>` |
| `Use after delete` | Freed memory access | Don't use after `delete` |
| `Memory leak` | Not freeing memory | `delete` or use `unique_ptr` |
| `Array out of bounds` | Invalid index | Check `index < size()` |
| `Stack overflow` | Infinite recursion | Add base case to recursion |
| `Type error` | Type mismatch | Cast or convert types |
| `Redefinition error` | Include guard missing | Add `#ifndef` guards |

---

**Getting more help?** Check the compiler error message - it shows file and line number! 🔧
