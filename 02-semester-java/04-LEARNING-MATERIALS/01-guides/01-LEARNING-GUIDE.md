# Java 10-Week Learning Curriculum

This guide provides a structured 10-week learning path for Java fundamentals, OOP, and Collections Framework. **Estimated 50 total hours** (5 hours per week).

## Part 1: Quick Start Setup

Before you code, ensure your environment is ready:

```bash
# Navigate to Java semester
cd ../..
cd 02-semester-java

# Verify Java and Gradle
java -version              # Should be 21.0+
javac -version             # Should be 21.0+
gradle --version           # Should be 8.0+

# Build test program
gradle build

# Run test program
gradle run
```

## Part 2: 10-Week Structured Learning Path

### Week 1-2: Java Basics & Syntax
**Topics**: Classes, main method, variables, types, operators, Scanner I/O
**Time**: 5 hours

**Learning Objectives**:
- [ ] Understand Java class structure
- [ ] Define and run main() method
- [ ] Work with primitive types (int, double, String, boolean)
- [ ] Use operators and expressions
- [ ] Read input with Scanner
- [ ] Print output to console

**Practice**:
1. Study `../02-templates/00-HelloWorld.java`
2. Create 3 programs in `../03-exercises/week-01-02/`:
   - Simple calculator (add, subtract)
   - Temperature converter (C to F)
   - Basic input/output programs

**Resources**:
- [Oracle Java Tutorials](https://docs.oracle.com/javase/tutorial/)
- [GeeksforGeeks Java Basics](https://www.geeksforgeeks.org/java/)

---

### Week 3-4: Control Flow (if/else, loops)
**Topics**: Conditionals, for/while/do-while loops, switch statements
**Time**: 5 hours

**Learning Objectives**:
- [ ] Use if/else statements effectively
- [ ] Write for loops with various patterns
- [ ] Write while and do-while loops
- [ ] Use switch statements
- [ ] Understand nested loops

**Practice**:
1. Write 3 programs in `../03-exercises/week-03-04/`:
   - FizzBuzz (1-100, Fizz for 3, Buzz for 5, FizzBuzz for both)
   - Multiplication table generator
   - Number guessing game with loops

**Resources**:
- [Oracle: Conditional Statements](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/if.html)
- [Oracle: Loops](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/for.html)

---

### Week 5-6: Methods, Objects & Packages
**Topics**: Method declaration, parameters, return types, method overloading, packages
**Time**: 5 hours

**Learning Objectives**:
- [ ] Define methods with parameters and return values
- [ ] Use method overloading
- [ ] Understand access modifiers (public, private, protected)
- [ ] Organize code in packages
- [ ] Import classes and packages

**Practice**:
1. Refactor previous programs to use methods
2. Create 3 programs in `../03-exercises/week-05-06/`:
   - Calculator class with multiple methods
   - String utility class (reverse, count vowels)
   - Temperature utility class with multiple conversions

**Resources**:
- [Oracle: Defining Methods](https://docs.oracle.com/javase/tutorial/java/javaOO/methods.html)
- [Oracle: Classes and Objects](https://docs.oracle.com/javase/tutorial/java/javaOO/)

---

### Week 7-8: Object-Oriented Programming Basics
**Topics**: Classes, constructors, this keyword, instance variables, static members
**Time**: 5 hours

**Learning Objectives**:
- [ ] Create classes with constructors
- [ ] Use instance variables and methods
- [ ] Understand the this keyword
- [ ] Use static variables and methods
- [ ] Practice creating multiple objects

**Practice**:
1. Create 3 classes in `../03-exercises/week-07-08/`:
   - Person class (name, age, greet method)
   - BankAccount class (balance, deposit, withdraw)
   - Product class (name, price, inventory management)

**Resources**:
- [Oracle: Creating Objects](https://docs.oracle.com/javase/tutorial/java/javaOO/objects.html)
- [Oracle: More on Classes](https://docs.oracle.com/javase/tutorial/java/javaOO/more.html)

---

### Week 9-10: Inheritance & Polymorphism
**Topics**: Extends keyword, method overriding, super(), abstract classes
**Time**: 5 hours

**Learning Objectives**:
- [ ] Create class hierarchies with inheritance
- [ ] Override parent methods correctly
- [ ] Use super() to call parent methods
- [ ] Create and use abstract classes
- [ ] Understand polymorphic behavior

**Practice**:
1. Create class hierarchies in `../03-exercises/week-09-10/`:
   - Animal/Dog/Cat class hierarchy
   - Vehicle/Car/Motorcycle hierarchy
   - Shape/Rectangle/Circle hierarchy

**Resources**:
- [Oracle: Inheritance](https://docs.oracle.com/javase/tutorial/java/IandI/subclasses.html)
- [Oracle: Polymorphism](https://docs.oracle.com/javase/tutorial/java/IandI/polymorphism.html)

---

### Week 11-12: Collections Framework (ArrayList, HashMap, HashSet)
**Topics**: Collections interface, List, Map, Set, Generics
**Time**: 5 hours

**Learning Objectives**:
- [ ] Understand Collections hierarchy
- [ ] Use ArrayList for dynamic arrays
- [ ] Use HashMap for key-value pairs
- [ ] Use HashSet for unique elements
- [ ] Understand generics (type parameters)

**Practice**:
1. Write 3 programs in `../03-exercises/week-11-12/`:
   - Student roster using ArrayList
   - Student grades using HashMap<String, Double>
   - Unique word finder using HashSet

**Resources**:
- [Oracle: Collections](https://docs.oracle.com/javase/tutorial/collections/)
- [Baeldung: Java Collections](https://www.baeldung.com/java-collections)

---

### Week 13-14: Streams API & Functional Programming
**Topics**: Stream operations, lambda expressions, functional interfaces, map/filter/reduce
**Time**: 5 hours

**Learning Objectives**:
- [ ] Understand Stream API concepts
- [ ] Use lambda expressions
- [ ] Filter and map collections
- [ ] Use forEach and collect operations
- [ ] Understand functional interfaces

**Practice**:
1. Refactor week 11-12 programs using Streams
2. Write 2 Streams programs in `../03-exercises/week-13-14/`:
   - Filter students by grade threshold
   - Calculate statistics (sum, average, max) using streams

**Resources**:
- [Oracle: Streams](https://docs.oracle.com/javase/tutorial/collections/streams/)
- [Baeldung: Java Streams](https://www.baeldung.com/java-streams)

---

### Week 15-16: File I/O & Exception Handling
**Topics**: Reading/writing files, try-catch-finally, throwing exceptions, custom exceptions
**Time**: 5 hours

**Learning Objectives**:
- [ ] Read and write text files
- [ ] Handle exceptions properly
- [ ] Use try-catch-finally blocks
- [ ] Create custom exception classes
- [ ] Understand exception hierarchy

**Practice**:
1. Create 3 programs in `../03-exercises/week-15-16/`:
   - Read student data from file, process, write results
   - CSV file parser (read, process, write)
   - Configuration file reader with error handling

**Resources**:
- [Oracle: I/O Basics](https://docs.oracle.com/javase/tutorial/i18n/resbundle/propfile.html)
- [Oracle: Exceptions](https://docs.oracle.com/javase/tutorial/essential/exceptions/)

---

### Week 17-18: Testing with JUnit 5
**Topics**: Unit testing, assertions, test organization, mocking basics
**Time**: 4 hours

**Learning Objectives**:
- [ ] Understand unit testing concepts
- [ ] Write test methods with JUnit 5
- [ ] Use assertions (@Test, assertEquals, assertTrue)
- [ ] Organize tests in test classes
- [ ] Run tests with Gradle

**Practice**:
1. Write tests for previous classes:
   - Test Person/BankAccount classes
   - Test Calculator methods
   - Test Collections-based programs

**Resources**:
- [JUnit 5 Documentation](https://junit.org/junit5/docs/current/user-guide/)
- [Baeldung: JUnit 5](https://www.baeldung.com/junit-5)

---

### Week 19-20: Capstone Project - TODO App CLI
**Topics**: Combine all skills into a complete application
**Time**: 8 hours

**Project Goals**:
1. Build a command-line TODO application
2. Store tasks in ArrayList
3. Read/write tasks to file
4. Use proper OOP (Task class, TodoList class)
5. Write unit tests

**Features**:
- Add/remove/list tasks
- Mark tasks as complete
- Save/load from file
- Persistent storage between runs

**Project Structure**:
```
src/main/java/com/example/
├── App.java           (main entry point)
├── TodoList.java      (manages tasks)
└── Task.java          (task model)

src/test/java/com/example/
├── TodoListTest.java
└── TaskTest.java

build.gradle          (with JUnit dependency)
tasks.txt             (data file)
README.md             (documentation)
```

**Deliverables**:
- Compile: `gradle build`
- Run: `gradle run`
- Test: `gradle test` (all pass)
- Jar: `gradle jar` (executable)

---

## Part 3: Gradle Build System

### Basic build.gradle Structure
```gradle
plugins {
    id 'java'
    id 'application'
}

group = 'com.example'
version = '1.0'

sourceCompatibility = '21'

repositories {
    mavenCentral()
}

dependencies {
    testImplementation 'org.junit.jupiter:junit-jupiter-api:5.9.2'
    testRuntimeOnly 'org.junit.jupiter:junit-jupiter-engine:5.9.2'
}

application {
    mainClass = 'com.example.App'
}

tasks.named('test') {
    useJUnitPlatform()
}
```

### Common Gradle Commands
```bash
gradle build          # Compile and package
gradle run            # Run the application
gradle test           # Run all tests
gradle clean          # Delete build files
gradle jar            # Create JAR file
gradle tasks          # View available tasks
```

---

## Part 4: Assessment Checklist

**End of Week 20, you should be able to:**

- [ ] Write Java programs with proper class structure
- [ ] Use inheritance and polymorphism effectively
- [ ] Manage collections of data
- [ ] Use Streams API for data transformation
- [ ] Read and write files
- [ ] Handle exceptions properly
- [ ] Write unit tests with JUnit 5
- [ ] Build with Gradle
- [ ] Debug Java programs in IDE
- [ ] Create a complete application from requirements

---

## Part 5: Resources & References

### Official Documentation
- [Oracle Java Documentation](https://docs.oracle.com/javase/21/)
- [Java Language Specification](https://docs.oracle.com/javase/specs/)

### Learning & Tutorials
- [Oracle Java Tutorials](https://docs.oracle.com/javase/tutorial/)
- [Baeldung Java](https://www.baeldung.com/)
- [GeeksforGeeks Java](https://www.geeksforgeeks.org/java/)

### Practice Sites
- [HackerRank Java](https://www.hackerrank.com/domains/java)
- [LeetCode Java](https://leetcode.com/)
- [Codeforces](https://codeforces.com/)

### Build Tools
- [Gradle Documentation](https://gradle.org/guides/)
- [Maven Documentation](https://maven.apache.org/)

---

**Ready to code?** Start with week 1-2 exercises in `../03-exercises/week-01-02/`! 🚀
