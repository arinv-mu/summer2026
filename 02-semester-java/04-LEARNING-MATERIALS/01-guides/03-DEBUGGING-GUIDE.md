# Java: Common Errors & Debugging Guide

## Compilation Errors (Won't Compile)

### 1. Syntax Errors

#### **';' expected**
```
Main.java:5: error: ';' expected
    int x = 5
           ^
```

**Cause**: Missing semicolon at end of statement

**Fix**:
```java
// Wrong
int x = 5

// Right
int x = 5;
```

#### **class, interface, or enum expected**
```
error: class, interface, or enum expected
```

**Cause**: Syntax error outside class definition

**Fix**:
```java
// Wrong - method outside class
public void myMethod() {
    System.out.println("Hello");
}

// Right - method inside class
public class Main {
    public void myMethod() {
        System.out.println("Hello");
    }
}
```

---

### 2. Import/Package Errors

#### **error: package does not exist**
```
import com.nonexistent.*;
                       ^
error: package does not exist
```

**Fix**:
```java
// Check correct package name
import java.util.ArrayList;  // Correct
import java.io.*;             // Correct

// Make sure package exists or is in classpath
```

#### **error: cannot find symbol**
```
error: cannot find symbol
symbol: class Scanner
```

**Causes**:
- Missing import statement
- Class name typo
- Class not in classpath

**Fix**:
```java
// Add import
import java.util.Scanner;

// Or use full package name
java.util.Scanner scanner = new java.util.Scanner(System.in);

// Check for typos
Scanner scan = new Scanner(...);  // Correct spelling
```

---

### 3. Type Errors

#### **incompatible types: possible lossy conversion**
```
error: incompatible types: possible lossy conversion from double to int
int x = 3.14;
        ^
```

**Fix**:
```java
// Wrong - implicit conversion loses precision
int x = 3.14;

// Right - explicit cast
int x = (int) 3.14;
double x = 3.14;
```

#### **incompatible types: cannot convert X to Y**
```
error: incompatible types: cannot convert String to int
int x = "5";
        ^
```

**Fix**:
```java
// Wrong
int x = "5";

// Right
int x = Integer.parseInt("5");
String s = Integer.toString(5);
```

---

### 4. Variable & Scope Errors

#### **error: cannot find symbol - variable**
```
error: cannot find symbol
  symbol: variable x
  location: class Main
```

**Causes**:
- Typo in variable name
- Variable not declared
- Wrong scope

**Fix**:
```java
// Wrong - typo
int myVariable = 5;
System.out.println(myVaraible);  // Typo!

// Right
System.out.println(myVariable);

// Scope issue
{
    int local = 5;
}
System.out.println(local);  // Error - local not in scope

// Fix - move outside scope
int local = 5;
{
    System.out.println(local);  // OK
}
```

#### **error: variable might not have been initialized**
```
error: variable might not have been initialized
int x;
System.out.println(x);  // x not assigned a value
```

**Fix**:
```java
// Wrong
int x;
System.out.println(x);

// Right
int x = 0;
System.out.println(x);

// Or
int x;
x = 5;
System.out.println(x);
```

---

## Runtime Errors (Compile OK, Fails When Running)

### 1. NullPointerException (Very Common)

#### **java.lang.NullPointerException**
```
Exception in thread "main" java.lang.NullPointerException
    at Main.main(Main.java:10)
```

**Cause**: Calling method on null object

**Example**:
```java
// Wrong
String s = null;
System.out.println(s.length());  // NullPointerException!

// Right - check for null
if (s != null) {
    System.out.println(s.length());
}

// Or initialize
String s = "";
System.out.println(s.length());  // 0
```

### 2. ClassNotFoundException

#### **java.lang.ClassNotFoundException**
```
Exception in thread "main" java.lang.ClassNotFoundException: Main
    at java.lang.Class.forName(Class.java:259)
```

**Cause**: Class not found in classpath

**Fix**:
```bash
# Make sure compiled .class file exists
javac Main.java  # Creates Main.class

# Run with correct class name
java Main       # Runs Main.class

# With package
java com.example.Main  # Run com/example/Main.class
```

### 3. ArrayIndexOutOfBoundsException

#### **java.lang.ArrayIndexOutOfBoundsException**
```
Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: 5
```

**Cause**: Array index too large

**Example**:
```java
// Wrong
int[] arr = {1, 2, 3};
System.out.println(arr[5]);  // Only 0,1,2 exist

// Right
if (index < arr.length) {
    System.out.println(arr[index]);
}

// Or use loop
for (int i = 0; i < arr.length; i++) {
    System.out.println(arr[i]);
}
```

### 4. IllegalArgumentException

#### **java.lang.IllegalArgumentException**
```
Exception in thread "main" java.lang.IllegalArgumentException
```

**Cause**: Invalid argument passed to method

**Example**:
```java
// Wrong
int age = -5;  // Doesn't make sense

// Right - validate
if (age >= 0) {
    Person p = new Person(age);
} else {
    throw new IllegalArgumentException("Age must be positive");
}
```

### 5. FileNotFoundException

#### **java.io.FileNotFoundException**
```
Exception in thread "main" java.io.FileNotFoundException: data.txt
```

**Fix**:
```java
// Wrong
FileReader fr = new FileReader("data.txt");

// Right - handle exception
try {
    FileReader fr = new FileReader("data.txt");
} catch (FileNotFoundException e) {
    System.out.println("File not found: " + e.getMessage());
}

// Or check first
import java.nio.file.Files;
if (Files.exists(Paths.get("data.txt"))) {
    FileReader fr = new FileReader("data.txt");
}
```

---

## Logic Errors (Wrong Output)

### Debugging Techniques

#### **1. Add Print Statements**
```java
public int calculateTotal(int[] prices) {
    int total = 0;
    for (int price : prices) {
        System.out.println("Adding: " + price);  // Debug
        total += price;
        System.out.println("Total now: " + total);  // Debug
    }
    return total;
}
```

#### **2. Use IDE Debugger**
```
In VS Code:
1. Click on line number to set breakpoint
2. Press F5 to start debugging
3. Step through code with F10 (next) or F11 (step in)
4. Inspect variables in the Debug panel
```

#### **3. Unit Tests**
```java
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class CalculatorTest {
    @Test
    public void testSum() {
        Calculator calc = new Calculator();
        assertEquals(5, calc.add(2, 3));
    }
}
```

#### **4. Assertions**
```java
public void withdraw(double amount) {
    assert amount > 0 : "Amount must be positive";
    assert balance >= amount : "Insufficient funds";
    balance -= amount;
}

// Run with assertions enabled
java -ea Main
```

---

## Common Exception Handling Patterns

### Try-Catch-Finally
```java
try {
    // Code that might throw exception
    int x = Integer.parseInt("abc");
} catch (NumberFormatException e) {
    // Handle specific exception
    System.out.println("Invalid number: " + e.getMessage());
} catch (Exception e) {
    // Catch all other exceptions
    System.out.println("Error: " + e);
} finally {
    // Always executed
    System.out.println("Finished");
}
```

### Try-With-Resources (Auto-Close)
```java
try (FileReader fr = new FileReader("file.txt")) {
    // File automatically closed after block
    int c = fr.read();
} catch (IOException e) {
    System.out.println("Error reading file: " + e);
}
```

### Custom Exceptions
```java
public class InvalidAgeException extends Exception {
    public InvalidAgeException(String message) {
        super(message);
    }
}

// Usage
if (age < 0) {
    throw new InvalidAgeException("Age cannot be negative");
}
```

---

## Quick Reference: Common Fixes

| Error | Likely Cause | Quick Fix |
|-------|-------------|----------|
| `NameError` | Typo in variable | Check spelling |
| `ClassNotFoundException` | Missing classpath | `javac` & `java` in correct dir |
| `NullPointerException` | null object | Check with `if (obj != null)` |
| `ArrayIndexOutOfBoundsException` | Invalid index | Check bounds with `.length` |
| `IllegalArgumentException` | Bad argument | Validate input before use |
| `FileNotFoundException` | Missing file | Check file path exists |
| `TypeError` | Wrong type | Cast with `(Type)` or convert |
| `SyntaxError` | Missing semicolon | Add `;` at end of statements |
| `StackOverflowError` | Infinite recursion | Add base case to recursive method |
| `OutOfMemoryError` | Too much memory | Check for memory leaks |

---

**Getting more help?** Read the full stack trace - it shows the exact line and method! ☕
