# Semester 2 - Java Setup Guide

## Overview
This directory contains all Java learning material for Semester 2. The focus is on fundamentals, collections framework, and streams API.

## Prerequisites
- OpenJDK 21 LTS installed via Homebrew
- Gradle build tool installed
- VS Code with Java extensions configured

## Quick Setup

### 1. Verify Java Installation
```bash
java -version
javac -version
gradle --version
```

### 2. Folder Structure

```
02-semester-java/
├── 01-coursework/
│   ├── 01-fundamentals/       # Classes, inheritance, interfaces
│   ├── 02-collections-framework/  # Lists, Sets, Maps
│   └── 03-streams-api/        # Functional programming, streams
├── 02-exercises/
│   ├── 01-fundamentals/       # Practice problems
│   ├── 02-collections-framework/  # Collections challenges
│   └── 03-streams-api/        # Streams exercises
├── 03-projects/
│   ├── 01-todo-app-cli/       # CLI task management
│   └── 02-library-management/ # OOP project
├── build.gradle               # Gradle build configuration
├── src/main/java/             # Source code directory
└── SETUP.md                   # This file
```

## Build Configuration (build.gradle)
The build.gradle file includes:
- Java compatibility: 21
- Dependencies: JUnit 5 for testing
- Source/target compatibility

## Common Commands

### Compile a single Java file
```bash
cd /Users/arinvashistha/summer2026/02-semester-java
javac -d . 01-coursework/01-fundamentals/HelloWorld.java
```

### Run compiled class
```bash
java coursework.fundamentals.HelloWorld
```

### Build with Gradle
```bash
gradle build
```

### Run tests
```bash
gradle test
```

### Clean build artifacts
```bash
gradle clean
```

## Project Structure Convention
```
src/main/java/
├── com/semester2/fundamentals/     # Package structure
├── com/semester2/collections/
└── com/semester2/streams/
```

## Learning Path
1. **Week 1-2**: Fundamentals (01-coursework/01-fundamentals/)
2. **Week 3-4**: Collections Framework (01-coursework/02-collections-framework/)
3. **Week 5-6**: Streams API (01-coursework/03-streams-api/)
4. **Week 7-8**: Projects (03-projects/)

## Troubleshooting

### Java not found
- Reinstall: `brew install openjdk@21`
- Set JAVA_HOME: `export JAVA_HOME=$(/usr/libexec/java_home -v 21)`

### Gradle build failures
- Check Java version: `gradle --version`
- Clean and rebuild: `gradle clean build`

### Classpath issues
- Ensure files are in correct package structure
- Compile from root: `javac -d . src/main/java/...`

## Next Steps
Start with coursework/fundamentals/ and follow the learning path sequentially.
