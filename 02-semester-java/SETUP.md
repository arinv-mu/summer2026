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
semester-2-java/
├── coursework/
│   ├── fundamentals/          # Classes, inheritance, interfaces
│   ├── collections-framework/ # Lists, Sets, Maps
│   └── streams-api/           # Functional programming, streams
├── projects/
│   ├── todo-app-cli/          # CLI task management
│   └── library-management/    # OOP project
├── exercises/
│   ├── fundamentals/          # Practice problems
│   ├── collections-framework/ # Collections challenges
│   └── streams-api/           # Streams exercises
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
cd /Users/arinvashistha/summer2026/semester-2-java
javac -d . coursework/fundamentals/HelloWorld.java
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
1. **Week 1-2**: Fundamentals (classes, OOP basics)
2. **Week 3-4**: Collections Framework (Lists, Sets, Maps)
3. **Week 5-6**: Streams API (functional programming)
4. **Week 7-8**: Projects (Todo app, Library management)

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
