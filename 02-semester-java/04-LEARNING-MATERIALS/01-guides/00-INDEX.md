# Java Learning Materials: Navigation Hub

Welcome! This is your starting point for learning Java. Use this guide to navigate all resources organized for 10 weeks of structured learning.

## 🚀 Quick Start (Do This First)

Before diving into the curriculum, verify your environment:

```bash
# Navigate to Java semester
cd 02-semester-java

# Verify Java and Gradle
java -version            # Should show OpenJDK 21
javac -version           # Should show OpenJDK 21
gradle --version         # Should show Gradle 8.0+

# Build the test program
gradle build

# Run the test program
gradle run

# View available tasks
gradle tasks
```

## 📚 Learning Path by Week

| Week | Topics | Focus | Resource |
|------|--------|-------|----------|
| **Week 1-2** | Syntax, types, classes | Fundamentals | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-1-2) |
| **Week 3-4** | Methods, objects, packages | OOP basics | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-3-4) |
| **Week 5-6** | Inheritance, polymorphism | OOP advanced | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-5-6) |
| **Week 7-8** | Collections Framework | Lists, Maps, Sets | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-7-8) |
| **Week 9-10** | Generics, advanced collections | Type safety | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-9-10) |
| **Week 11-12** | Streams API, functional | Modern Java | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-11-12) |
| **Week 13-14** | File I/O, exceptions | Robust code | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-13-14) |
| **Week 15-16** | Testing with JUnit 5 | Quality assurance | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-15-16) |
| **Week 17-18** | Gradle, project structure | Build systems | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-17-18) |
| **Week 19-20** | Project capstone | TODO App CLI | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-19-20) |

## 📖 Main Resources

### Getting Started
- **[01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md)** - Complete 10-week curriculum with milestones
- **[02-COMPILATION-REFERENCE.md](02-COMPILATION-REFERENCE.md)** - How to compile, build with Gradle

### When You Get Stuck
- **[03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md)** - Common Java errors and solutions

### Code Examples
- **[../02-templates/00-HelloWorld.java](../02-templates/00-HelloWorld.java)** - Your first Java program
- **[../02-templates/01-build.gradle](../02-templates/01-build.gradle)** - Gradle build template
- **[../02-templates/multi-file/](../02-templates/multi-file/)** - Package structure example

### Practice Exercises
- **[../03-exercises/](../03-exercises/)** - 20 weeks of exercises (week-01-02 through week-19-20)

### Build Your Project
- **[../04-projects/PROJECT-GUIDE.md](../04-projects/PROJECT-GUIDE.md)** - TODO App CLI project

## 🔧 Essential Commands

```bash
# Navigate to Java semester
cd 02-semester-java

# Build the project
gradle build

# Run the application
gradle run

# Run tests
gradle test

# Clean build files
gradle clean

# View all tasks
gradle tasks

# Compile a single file
javac HelloWorld.java

# Run compiled class
java HelloWorld

# Check Java version
java -version

# Check compiler version
javac -version
```

## 🎯 Learning Goals by Week

**Weeks 1-4**: Master Java basics
- [ ] Understand classes and objects
- [ ] Write methods and control flow
- [ ] Use Scanner for input

**Weeks 5-8**: OOP mastery
- [ ] Use inheritance effectively
- [ ] Implement polymorphism
- [ ] Organize code in packages

**Weeks 9-12**: Collections and modern Java
- [ ] Use ArrayList, HashMap, HashSet
- [ ] Understand generics
- [ ] Use Streams API

**Weeks 13-16**: Practical skills
- [ ] Read/write files
- [ ] Handle exceptions properly
- [ ] Write unit tests with JUnit 5

**Weeks 17-20**: Build a project
- [ ] Build with Gradle
- [ ] Complete TODO App CLI
- [ ] Deploy as JAR file

## 📁 File Organization

```
02-semester-java/
├── build.gradle        ← Gradle build configuration
├── setup-env.sh        ← Environment setup script
├── 01-coursework/      ← Follow along with structured lessons
├── 02-exercises/       ← Independent practice
├── 03-projects/        ← Build semester project
└── 04-LEARNING-MATERIALS/  ← You are here!
    ├── 01-guides/
    ├── 02-templates/
    ├── 03-exercises/
    └── 04-projects/
```

## 🆘 Getting Help

### If you get a compilation error:
1. Read the error message carefully
2. Search [03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md) for your error type
3. Check [02-COMPILATION-REFERENCE.md](02-COMPILATION-REFERENCE.md) for build help

### Recommended Practice Sites
- [HackerRank Java Challenges](https://www.hackerrank.com/domains/java)
- [LeetCode Java Problems](https://leetcode.com/) (free tier)
- [Java Official Docs](https://docs.oracle.com/en/java/javase/21/)
- [Baeldung Java Tutorials](https://www.baeldung.com/)
- [GeeksforGeeks Java](https://www.geeksforgeeks.org/java/)

## ✅ Verification Checklist

Before moving to week 3, confirm:
- [ ] Java installed: `java -version`
- [ ] Gradle installed: `gradle --version`
- [ ] Can build: `gradle build` (no errors)
- [ ] Can run: `gradle run` (produces output)

---

**Next Step**: Open [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md) to see the full curriculum! 📖
