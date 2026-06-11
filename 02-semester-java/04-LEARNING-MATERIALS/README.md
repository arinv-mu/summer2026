# Java Semester 2: Learning Materials

Welcome to Java and enterprise programming! This folder contains everything you need to learn Java fundamentals, OOP, Collections Framework, and Streams API.

## Quick Navigation

| Item | Purpose | Time |
|------|---------|------|
| [00-INDEX.md](01-guides/00-INDEX.md) | Start here - navigation hub | 5 min |
| [01-LEARNING-GUIDE.md](01-guides/01-LEARNING-GUIDE.md) | Full curriculum & learning path | 1-2 weeks |
| [02-COMPILATION-REFERENCE.md](01-guides/02-COMPILATION-REFERENCE.md) | Gradle, javac, execution reference | As needed |
| [03-DEBUGGING-GUIDE.md](01-guides/03-DEBUGGING-GUIDE.md) | Debug common Java errors | As needed |

## Folder Structure

```
04-LEARNING-MATERIALS/
├── README.md (this file)
├── 01-guides/          ← Start with 00-INDEX.md
│   ├── 00-INDEX.md (navigation)
│   ├── 01-LEARNING-GUIDE.md (curriculum)
│   ├── 02-COMPILATION-REFERENCE.md (Gradle/javac/execution)
│   └── 03-DEBUGGING-GUIDE.md (common errors)
├── 02-templates/       ← Copy these to get started
│   ├── 00-HelloWorld.java (first program)
│   ├── 01-build.gradle (Gradle template)
│   └── multi-file/ (package structure example)
├── 03-exercises/       ← Practice by week
│   └── week-01-02/ through week-19-20/ (20 weeks of exercises)
└── 04-projects/        ← Build your semester project
    └── PROJECT-GUIDE.md
```

## Getting Started in 5 Minutes

1. **Read the navigation hub**: Open [01-guides/00-INDEX.md](01-guides/00-INDEX.md)
2. **Navigate to Java folder**: `cd ../..` then `cd 02-semester-java`
3. **Build the test**: `gradle build`
4. **Run test program**: `gradle run`

## Key Facts About This Learning Path

- **Duration**: 10 weeks (weeks 1-20)
- **Commitment**: 1-2 hours per week for exercises + projects
- **Topics**: Syntax → OOP → Collections → Streams API → Testing
- **Project**: TODO App CLI with file I/O and Collections
- **Build System**: Gradle
- **Testing**: JUnit 5 framework
- **IDE**: VS Code with Java extension pack

## Quick Commands

```bash
# Build the project
gradle build

# Run the application
gradle run

# Run tests
gradle test

# Check Java version
java -version
javac -version

# Compile a single file
javac HelloWorld.java

# Run a compiled class
java HelloWorld

# Create a JAR file
gradle jar

# View Gradle tasks
gradle tasks
```

---

**Ready?** Open [01-guides/00-INDEX.md](01-guides/00-INDEX.md) to begin! 🚀
