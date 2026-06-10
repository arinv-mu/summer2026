# PLAN 1: Git Repository Structure for Multi-Language Development

**Date**: June 10, 2026  
**Platform**: macOS (Mac Air)  
**Purpose**: Organized folder structure for Electronics Engineering coursework in C, C++, Java, and Python

---

## TL;DR

Organize the main `summer2026` repository by semester, with each semester focused on one primary language. Within each semester, organize by topic/subject, then by coursework type (coursework, projects, exercises). This approach supports multiple subjects per semester while maintaining clear separation and scalability.

---

## Complete Directory Structure

```
summer2026/
├── .gitignore                    # Combined patterns for all languages
├── README.md                     # Project overview and quick start
├── LANGUAGES.md                  # Guide: which language for what purpose
├── SEMESTER-NOTES.md             # Semester-wise learning progress tracker
├── .github/
│   └── workflows/               # Optional: CI/CD pipelines (future)
│
├── 01-semester-python/          # Semester 1: Python Focus
│   ├── SETUP.md                 # Python environment setup (venv, pip)
│   ├── 01-coursework/
│   │   ├── 01-fundamentals/
│   │   ├── 02-web-scraping/
│   │   └── 03-data-structures/
│   ├── 02-exercises/
│   │   ├── 01-fundamentals/
│   │   ├── 02-web-scraping/
│   │   └── 03-data-structures/
│   ├── 03-projects/
│   │   ├── 01-simple-calculator/
│   │   └── 02-web-scraper/
│   └── requirements.txt         # Python dependencies for semester
│
├── 02-semester-java/            # Semester 2: Java Focus
│   ├── SETUP.md                 # Java + Gradle setup instructions
│   ├── 01-coursework/
│   │   ├── 01-fundamentals/
│   │   ├── 02-collections-framework/
│   │   └── 03-streams-api/
│   ├── 02-exercises/
│   │   ├── 01-fundamentals/
│   │   ├── 02-collections-framework/
│   │   └── 03-streams-api/
│   ├── 03-projects/
│   │   ├── 01-todo-app-cli/
│   │   └── 02-library-management/
│   └── build.gradle             # Build configuration
│
├── 03-semester-c/               # Semester 3: C Focus
│   ├── SETUP.md                 # C build instructions (CMake/Make)
│   ├── 01-coursework/
│   │   ├── 01-fundamentals/
│   │   ├── 02-pointers-memory/
│   │   └── 03-data-structures/
│   ├── 02-exercises/
│   │   ├── 01-fundamentals/
│   │   ├── 02-pointers-memory/
│   │   └── 03-data-structures/
│   ├── 03-projects/
│   │   ├── 01-shell-interpreter/
│   │   └── 02-data-structures-lib/
│   └── CMakeLists.txt           # Build configuration
│
├── 04-semester-cpp/             # Semester 4: C++ Focus
│   ├── SETUP.md                 # C++ build instructions (CMake)
│   ├── 01-coursework/
│   │   ├── 01-fundamentals/
│   │   ├── 02-oop/
│   │   └── 03-stl-algorithms/
│   ├── 02-exercises/
│   │   ├── 01-fundamentals/
│   │   ├── 02-oop/
│   │   └── 03-stl-algorithms/
│   ├── 03-projects/
│   │   ├── 01-game-engine/
│   │   └── 02-graphics-renderer/
│   └── CMakeLists.txt           # Build configuration
│
└── Plans/                       # All planning documents
    ├── PLAN-1-Repository-Structure.md
    ├── PLAN-2-VS-Code-Installation.md
    └── PLAN-3-Learning-Journey.md
```

---

## Key Design Principles

### 1. Semester-First Organization
- Each top-level folder (`01-semester-python/`, `02-semester-java/`, `03-semester-c/`, `04-semester-cpp/`) represents one semester
- Numeric prefixes ensure correct display order in file tree and alphabetical sorting
- Clear focus: one primary language per semester
- Chronological learning progression follows university timeline
- Easy to reference: "In Semester 3, I learned C"

### 2. Topic-Based Sub-Organization
Within each semester folder, organize by subject/topic with numeric prefixes:
- **01-coursework/**: University assignments organized by topic/subject
- **02-exercises/**: Weekly practice organized by topic
- **03-projects/**: Semester-long projects (one or more per semester)
- Numeric prefixes (01, 02, 03) ensure correct display order in file tree
- Allows multiple subjects per semester to be studied concurrently
- Scalable: Add new topics as needed without restructuring

**Example - 01-semester-python/**:
- `01-coursework/01-fundamentals/` → Syntax, variables, operators
- `01-coursework/02-web-scraping/` → Network requests, HTML parsing
- `01-coursework/03-data-structures/` → Lists, dicts, comprehensions
- `02-exercises/01-fundamentals/`, etc.
- `03-projects/01-simple-calculator/`, `03-projects/02-web-scraper/`

**Example - 02-semester-java/**:
- `01-coursework/01-fundamentals/` → Syntax, classes, packages
- `01-coursework/02-collections-framework/` → ArrayList, HashMap, generics
- `01-coursework/03-streams-api/` → Functional programming, lambdas
- `02-exercises/` (same structure)
- `03-projects/01-todo-app-cli/`, `03-projects/02-library-management/`

### 3. Build Configuration Isolation
Each semester maintains its own build system:

**Python (Semester 1)**:
- `semester-1-python/requirements.txt` for dependencies
- `.venv/` virtual environment (ignored by git)
- Per-project structure: `src/`, `tests/`

**Java (Semester 2)**:
- `semester-2-java/build.gradle` or `pom.xml` in project root
- Standard Maven structure: `src/main/java/`, `src/test/java/`
- `build/` and `.gradle/` directories (ignored by git)

**C (Semester 3)**:
- `semester-3-c/CMakeLists.txt` or `Makefile` in project root
- `build/` directory for compiled objects (ignored by git)
- `include/` and `src/` subdirectories per project

**C++ (Semester 4)**:
- `semester-4-cpp/CMakeLists.txt` in project root
- `build/` directory (ignored by git)
- `include/`, `src/`, `tests/` subdirectories

### 4. Semester-Specific SETUP.md
Each semester includes `SETUP.md` documenting:
- Language toolchain version and setup
- Build commands for that semester's projects
- Testing and debugging procedures
- IDE/editor configuration specific to the language

### 5. Topic-Based Progress Tracking
- `coursework/[topic]/` contains numbered or dated assignments
- `exercises/[topic]/week-X/` organizes practice by topic and week
- `SEMESTER-NOTES.md` at root tracks overall progress and milestones

### 6. Single Root .gitignore
Combined `.gitignore` at repository root excludes:
- **Python**: `__pycache__/`, `*.pyc`, `.venv/`, `env/`, `.pytest_cache/`
- **Java**: `target/`, `build/`, `.gradle/`, `*.jar`, `.classpath`, `.project`
- **C**: `*.o`, `*.a`, `*.out`, `build/`, `CMakeFiles/`, `cmake_install.cmake`
- **C++**: `*.o`, `*.a`, `*.so`, `build/`, `CMakeFiles/`, `cmake_install.cmake`
- **General**: `.DS_Store`, `.vscode/settings.json`, `.idea/`

---

## Build Configuration File Examples

### Python Project (Semester 1): `semester-1-python/requirements.txt`
```
requests==2.31.0
beautifulsoup4==4.12.2
numpy==1.24.3
pandas==2.0.3
matplotlib==3.7.2
pytest==7.4.0
```

### Java Project (Semester 2): `semester-2-java/build.gradle`
```gradle
plugins {
    id 'java'
    id 'application'
}

repositories {
    mavenCentral()
}

dependencies {
    testImplementation 'junit:junit:4.13.2'
}

application {
    mainClass = 'com.example.Main'
}
```

### C Project (Semester 3): `semester-3-c/CMakeLists.txt`
```cmake
cmake_minimum_required(VERSION 3.10)
project(SemesterThree)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Sub-project for ds-library
add_subdirectory(projects/ds-library)

# Exercises
add_executable(week1-exercise projects/exercises/data-structures/week-1/main.c)
```

### C++ Project (Semester 4): `semester-4-cpp/CMakeLists.txt`
```cmake
cmake_minimum_required(VERSION 3.10)
project(SemesterFour)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Sub-project for thread-pool
add_subdirectory(projects/thread-pool)

# Exercises
add_executable(week1-oop projects/exercises/oop-design/week-1/main.cpp)
```

---

## Root .gitignore (Comprehensive)

```gitignore
# C/C++
*.o
*.a
*.so
*.out
*.app
build/
CMakeFiles/
cmake_install.cmake
CMakeCache.txt
.cmake/

# Java
target/
build/
.gradle/
.classpath
.project
.settings/
.factorypath
*.jar
*.class

# Python
__pycache__/
*.py[cod]
*$py.class
.venv/
env/
venv/
.pytest_cache/
.coverage
htmlcov/
*.egg-info/
dist/
*.pyc

# macOS
.DS_Store
.AppleDouble
.LSOverride
._*

# IDE
.vscode/settings.json
.idea/
*.swp
*.swo
*~

# Other
.cache/
*.log
```

---

## Verification Checklist

- [ ] Directory structure matches the semester-wise layout above
- [ ] Each semester folder (semester-1-python through semester-4-cpp) created
- [ ] Each semester has `SETUP.md` with language-specific build instructions
- [ ] Each semester has `coursework/`, `projects/`, and `exercises/` subdirectories
- [ ] Topic-based folders exist within `coursework/` and `exercises/`
- [ ] Root `.gitignore` exists with combined patterns for all languages
- [ ] Root `README.md` exists with project overview and learning path
- [ ] Root `LANGUAGES.md` exists with language guidance
- [ ] Root `SEMESTER-NOTES.md` created for progress tracking
- [ ] Run `git status` and verify no build artifacts are staged
- [ ] `.github/workflows/` folder created (empty for now, for future CI/CD)
- [ ] All paths are absolute: `/Users/arinvashistha/summer2026/semester-1-python/`, etc.

---

## Next: Implementation Order

1. Create semester folders: `semester-1-python/`, `semester-2-java/`, `semester-3-c/`, `semester-4-cpp/`
2. Within each semester, create: `coursework/`, `projects/`, `exercises/` folders
3. Create topic-based subfolders within `coursework/` and `exercises/`
4. Create root files: `.gitignore`, `README.md`, `LANGUAGES.md`, `SEMESTER-NOTES.md`
5. Create `SETUP.md` in each semester folder
6. Initialize git repository: `git init`
7. Make initial commit: "Initial semester-wise project structure"

---

## Topic Examples per Semester

**Semester 1 (Python)**: Fundamentals, Web-Scraping, Data-Structures  
**Semester 2 (Java)**: Fundamentals, Collections-Framework, Streams-API  
**Semester 3 (C)**: Pointers-Memory, Data-Structures, File-IO-Systems  
**Semester 4 (C++)**: OOP-Design, STL-Templates, Concurrency

---

## Notes

- Each coursework topic can have multiple assignments organized by date or number
- Projects scale from simple (Semester 1) to complex (Semester 4)
- Exercises within each topic are organized by week
- Build artifacts are never committed; only source code and build configuration
- New topics can be added mid-semester without restructuring
- Progress tracked in `SEMESTER-NOTES.md` with monthly milestones
