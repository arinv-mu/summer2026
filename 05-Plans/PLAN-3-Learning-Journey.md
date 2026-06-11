# PLAN 3: Structured 4-Semester Learning Roadmap

**Date**: June 10, 2026  
**Duration**: 12 months (4 semesters × 3 months each)  
**Target**: Electronics Engineering student mastering C, C++, Java, Python  
**Commitment**: 10-15 hours/week

---

## TL;DR - Learning Path

| Semester | Months | Primary Language | Theme | Key Topics |
|----------|--------|------------------|-------|-----------|
| **1** | 1-3 | Python | Fundamentals & Rapid Prototyping | Syntax, data structures, web-scraping, basics |
| **2** | 4-6 | Java | Collections & Enterprise | OOP, Collections Framework, Streams API, generics |
| **3** | 7-9 | C | Systems & Data Structures | Pointers, memory management, linked lists, file I/O |
| **4** | 10-12 | C++ | Advanced OOP & Concurrency | Classes, STL containers, templates, multithreading |

---

## Semester 1: Foundations (Months 1-3)

**Theme**: Master fundamentals in all languages simultaneously

---

### C: Basic Systems Programming

**Location**: `c/coursework/semester-1/`

**Topics & Breakdown** (4 weeks each):

1. **Basics** (Week 1-4)
   - Variables, types (int, float, char, arrays)
   - Operators (arithmetic, logical, bitwise)
   - I/O: printf, scanf
   - **Outcome**: Write simple input/output programs

2. **Control Flow** (Week 5-8)
   - if/else, switch statements
   - for, while, do-while loops
   - break, continue
   - **Outcome**: Write programs with complex logic

3. **Functions & Scope** (Week 9-12)
   - Function declaration, definition, calls
   - Scope rules, static variables
   - Pass by value
   - **Outcome**: Write modular code

4. **Arrays & Strings** (Week 13-16)
   - Single and multidimensional arrays
   - String manipulation (strcpy, strlen, etc.)
   - **Outcome**: Manage collections of data

5. **Pointers Basics** (Week 17-20)
   - Pointer declaration and dereferencing
   - Address-of and dereference operators
   - Pointer arithmetic (introduction)
   - **Outcome**: Understand memory addresses

**Project**: `c/projects/simple-calculator/`
- Implement: Addition, subtraction, multiplication, division, modulo
- Use: Functions, loops for menu, input validation
- Deliverable: Compiled executable + README with usage instructions
- Estimated time: 4-5 hours

**Exercises**: `c/exercises/week-1/` through `week-20/` (2-3 problems per week)
- FizzBuzz, prime numbers, factorial
- String reversal, palindrome checker
- Simple sorting (bubble, selection)
- **Time commitment**: 30 min - 1 hour per exercise

**Milestone**: By end of Semester 1, print "Hello C" program compiles and runs

---

### C++: Object-Oriented Programming

**Location**: `cpp/coursework/semester-1/`

**Topics & Breakdown** (parallel with C, adapted for OOP):

1. **Syntax Basics** (Week 1-4)
   - Variables, types, operators (same as C, but with `std::cout`, `std::cin`)
   - Introduction to `std::string`
   - I/O: iostream
   - **Outcome**: Write C++ "Hello World" and I/O programs

2. **Classes & Objects** (Week 5-8)
   - Class definition, members (public, private)
   - Constructors and destructors
   - This pointer
   - **Outcome**: Design simple classes

3. **Inheritance** (Week 9-12)
   - Single inheritance
   - Base class, derived class
   - Access specifiers (public, protected, private)
   - **Outcome**: Build class hierarchies

4. **Operator Overloading** (Week 13-16)
   - Overload +, -, ==, < operators
   - Member vs. friend functions
   - **Outcome**: Write intuitive operators for custom types

5. **Pointers & References** (Week 17-20)
   - Pointer operations
   - Reference semantics
   - Dynamic memory (new, delete basics)
   - **Outcome**: Manage memory explicitly

**Project**: `cpp/projects/bank-system/`
- Classes: Account, Customer
- Features: Deposit, withdraw, check balance
- Operator overloading: == for account comparison
- Deliverable: Compiled executable + UML class diagram
- Estimated time: 5-6 hours

**Exercises**: `cpp/exercises/week-1/` through `week-20/` (2-3 problems per week)
- Person class, Bank account class
- Shape hierarchy (Circle, Square, Triangle)
- Simple calculator using classes
- **Time commitment**: 45 min - 1.5 hours per exercise

**Milestone**: By end of Semester 1, bank system project compiles and runs

---

### Java: Enterprise Language Basics

**Location**: `java/coursework/semester-1/`

**Topics & Breakdown** (parallel with C and C++):

1. **Syntax & Types** (Week 1-4)
   - Variables, primitive types, operators
   - String type and manipulation
   - I/O: Scanner, System.out
   - **Outcome**: Write basic console programs

2. **Classes & Objects** (Week 5-8)
   - Class definition, constructors
   - Methods, instance variables
   - Static keyword
   - **Outcome**: Understand OOP principles

3. **Packages & Imports** (Week 9-12)
   - Organizing code into packages
   - Import statements
   - Access modifiers (public, private, protected)
   - **Outcome**: Structure larger projects

4. **Exception Handling** (Week 13-16)
   - Try-catch-finally
   - Throwing exceptions
   - Custom exceptions
   - **Outcome**: Write robust error handling

5. **Inheritance & Polymorphism** (Week 17-20)
   - Extends keyword
   - Method overriding
   - Polymorphic behavior
   - **Outcome**: Leverage OOP inheritance

**Project**: `java/projects/todo-app-cli/`
- Classes: Task, TodoList
- Features: Add, remove, mark complete, save to file
- Use: File I/O, Collections (ArrayList)
- Deliverable: JAR file + Gradle build script
- Build command: `gradle build`
- Run command: `java -cp build/libs/*.jar com.example.TodoApp`
- Estimated time: 5-6 hours

**Exercises**: `java/exercises/week-1/` through `week-20/` (2-3 problems per week)
- Animal class hierarchy
- Vehicle class with polymorphic methods
- Exception handling scenarios
- **Time commitment**: 45 min - 1.5 hours per exercise

**Milestone**: By end of Semester 1, TODO app runs via Gradle

---

### Python: Rapid Prototyping & Data

**Location**: `python/coursework/semester-1/`

**Topics & Breakdown** (parallel, but faster due to simplicity):

1. **Syntax & Data Types** (Week 1-4)
   - Variables, dynamic typing
   - Strings, lists, tuples, dictionaries, sets
   - I/O: input(), print()
   - **Outcome**: Write Pythonic code

2. **Control Flow** (Week 5-8)
   - if/elif/else
   - for, while loops
   - List comprehensions
   - **Outcome**: Master Python idioms

3. **Functions & Lambda** (Week 9-12)
   - Function definition, arguments (default, *args, **kwargs)
   - Lambda expressions
   - Map, filter, reduce
   - **Outcome**: Write functional Python code

4. **Modules & Packages** (Week 13-16)
   - Import statements
   - Standard library: os, sys, random, math
   - **Outcome**: Leverage Python ecosystem

5. **File I/O & Data Structures** (Week 17-20)
   - Reading/writing files
   - JSON, CSV parsing
   - Dictionary manipulation
   - **Outcome**: Process real data

**Project**: `python/projects/web-scraper-starter/`
- Libraries: requests, BeautifulSoup
- Task: Scrape simple data from website (e.g., weather, news headlines)
- Parse HTML, extract data, save to CSV
- Deliverable: Python script + CSV output sample
- Estimated time: 4-5 hours

**Exercises**: `python/exercises/week-1/` through `week-20/` (2-3 problems per week)
- Sorting, searching algorithms
- String manipulation (palindromes, anagrams)
- Data transformation with lists/dicts
- **Time commitment**: 30-45 min per exercise

**Milestone**: By end of Semester 1, web scraper outputs CSV file

---

### Semester 1 Summary & Milestones

**By End of Month 1:**
- [ ] All 4 languages: "Hello World" compiles and runs
- [ ] All 4 languages: IntelliSense works in VS Code
- [ ] All 4 languages: Completed first 4 weeks of coursework

**By End of Month 2:**
- [ ] All 4 languages: Completed control flow and functions
- [ ] All 4 languages: Written 5-7 exercises each
- [ ] All 4 languages: Projects 50% complete

**By End of Month 3:**
- [ ] All 4 languages: Completed all Semester 1 coursework
- [ ] All 4 languages: Projects complete and tested
- [ ] Git repo: 20-30 commits across all languages
- [ ] Create README documenting what was learned

---

## Semester 2: Data Structures & Algorithms (Months 4-6)

**Theme**: Deep dive into DS&A across languages; start competitive programming

---

### C: Dynamic Memory & Data Structures

**Location**: `c/coursework/semester-2/`

**Focus Areas:**
- Dynamic memory allocation (malloc, calloc, realloc, free)
- Linked lists: insertion, deletion, traversal
- Stacks and queues using arrays and linked lists
- Introduction to binary search trees
- Valgrind for memory leak detection

**Project**: `c/projects/ds-library/`
- Implement: Linked list, stack, queue as reusable libraries
- Files: header files (.h), implementation (.c), test suite
- Deliverable: Compiled library + test programs + memory test report (valgrind)
- Estimated time: 8-10 hours

**Exercises**: Convert LeetCode easy problems from Python to C
- Array manipulation (rotate, flatten)
- String processing (longest substring, pattern matching)

**Competitive Programming**: `c/exercises/coding-challenges/`
- Participate in: HackerRank easy problems
- Time commitment: 1-2 hours/week

---

### C++: STL & Templates

**Location**: `cpp/coursework/semester-2/`

**Focus Areas:**
- STL containers: vector, list, deque, map, set, unordered_map
- STL algorithms: sort, find, accumulate, transform
- Function templates and class templates
- Iterators and ranges
- Performance: Big-O analysis of STL operations

**Project**: `cpp/projects/ds-visualizer/`
- Implement: Graph data structure (adjacency list)
- Visualize: DFS and BFS traversals (console output or file)
- Use: Templates for generic nodes
- Deliverable: Executable + demo output showing traversals
- Estimated time: 8-10 hours

**Exercises**: Codeforces educational rounds (Div. 2 A/B)
- Sorting and searching problems
- Greedy algorithm introduction

**Competitive Programming**: `cpp/exercises/competitive-programming/`
- Participate in: Codeforces weekly rounds
- Time commitment: 1-2 hours/week

---

### Java: Collections Framework & Streams

**Location**: `java/coursework/semester-2/`

**Focus Areas:**
- Collections Framework: ArrayList, LinkedList, HashMap, HashSet, TreeMap
- Generics and type parameters
- Streams API, lambda expressions, functional interfaces
- File I/O advanced (reading/writing objects)
- Unit testing with JUnit

**Project**: `java/projects/library-management/`
- Classes: Book, Member, Library
- Features: Add/remove books, borrow/return, search by title/author
- Use: HashMap for O(1) lookups, Streams for filtering
- Testing: JUnit test suite
- Build: Gradle with test task
- Deliverable: JAR file + test report
- Estimated time: 8-10 hours

**Exercises**: LeetCode + HackerRank problems
- Array and string problems (medium difficulty)
- Using Java Collections

**Competitive Programming**: `java/exercises/coding-challenges/`
- Participate in: LeetCode bi-weekly contests
- Time commitment: 1-2 hours/week

---

### Python: Data Science Stack

**Location**: `python/coursework/semester-2/`

**Focus Areas:**
- NumPy: array operations, linear algebra basics
- Pandas: DataFrames, data manipulation, groupby, merge
- Matplotlib: plotting, visualization
- Algorithms: sorting, searching, implement classic DS&A in Python

**Project**: `python/projects/data-analysis-project/`
- Dataset: Download CSV (weather, stock prices, or university dataset)
- Analysis: 
  - Load and explore data (shape, dtypes, missing values)
  - Calculate statistics (mean, median, correlation)
  - Visualize trends (line plots, scatter plots, histograms)
- Deliverable: Jupyter notebook + exported charts (PNG)
- Estimated time: 6-8 hours

**Exercises**: Implement classic algorithms in Python
- Bubble sort, quicksort, merge sort
- Binary search, depth-first search
- Implement linked list in Python

**Competitive Programming**: `python/exercises/algorithms/`
- Participate in: Project Euler problems
- Time commitment: 1 hour/week

---

### Semester 2 Summary & Milestones

**By End of Month 4:**
- [ ] All languages: Completed dynamic memory / collections coursework
- [ ] All languages: Started competitive programming
- [ ] All languages: Projects 50% complete

**By End of Month 5:**
- [ ] C: Valgrind shows 0 memory errors
- [ ] C++: All STL containers understood
- [ ] Java: Collections and Streams mastered
- [ ] Python: Can analyze datasets with Pandas

**By End of Month 6:**
- [ ] All languages: Projects complete and tested
- [ ] All languages: 5-10 competitive programming problems solved each
- [ ] Git repo: 30-50 total commits
- [ ] Participate in 1 online programming contest

---

## Semester 3: Systems Programming & Concurrency (Months 7-9)

**Theme**: Build meaningful projects; explore systems-level and concurrent programming

---

### C: File I/O & System Calls

**Location**: `c/coursework/semester-3/`

**Topics:**
- File operations: fopen, fclose, fread, fwrite
- Command-line arguments and environment variables
- Process creation (fork, exec basics)
- Signal handling introduction
- Error handling with errno

**Project**: `c/projects/file-processor/`
- Read configuration file (INI or JSON-like format)
- Process data according to config
- Write results to output file
- Error handling: meaningful error messages
- Deliverable: Executable + sample config files + output
- Estimated time: 8-10 hours

---

### C++: Multithreading & Design Patterns

**Location**: `cpp/coursework/semester-3/`

**Topics:**
- Thread creation and management (std::thread)
- Synchronization: mutex, lock_guard, condition_variable
- Design patterns: Singleton, Factory, Observer
- Performance measurement and profiling

**Project**: `cpp/projects/thread-pool/`
- Implement: Thread pool for parallel task execution
- Features: Task queue, worker threads, job scheduling
- Benchmark: Performance with 1, 2, 4, 8 threads
- Deliverable: Executable + benchmark results + design documentation
- Estimated time: 10-12 hours

---

### Java: Networking & Multithreading

**Location**: `java/coursework/semester-3/`

**Topics:**
- Multithreading: Thread class, Runnable, Thread pools (ExecutorService)
- Socket programming: ServerSocket, Socket, network communication
- Reflection API for dynamic class introspection
- Database basics: JDBC (if interested)

**Project**: `java/projects/chat-application/`
- Architecture: Client-server (TCP sockets)
- Server: Multi-threaded, handles concurrent clients
- Client: Connect, send/receive messages
- Features: User list, broadcast messages, private messaging
- Deliverable: Client JAR + Server JAR + design document
- Estimated time: 12-15 hours

---

### Python: Asynchronous Programming

**Location**: `python/coursework/semester-3/`

**Topics:**
- Asyncio: async/await, event loops
- Decorators and metaprogramming
- Concurrency patterns: producer-consumer, thread pools
- Performance: asyncio vs threading

**Project**: `python/projects/async-downloader/`
- Download multiple files concurrently using asyncio
- Features: Progress tracking, rate limiting, retry logic
- Error handling: graceful failures
- Deliverable: Python script + sample log output
- Estimated time: 6-8 hours

---

## Semester 4: Integration & Specialization (Months 10-12)

**Theme**: Real-world projects combining multiple languages; Electronics focus

---

### Cross-Language Integration Project

**Goal**: Build a system where different components interact:
- **Example Architecture**:
  - Python backend: Data collection and analysis (NumPy/Pandas)
  - C++: Performance-critical algorithm (signal processing, matrix operations)
  - Java: Web service layer (REST API, database)
  - C: Embedded system simulator (sensor data generation)

**Deliverable**: 
- Architecture diagram showing component interactions
- Compiled executables/libraries for each language
- Integration test demonstrating data flow
- Documentation of interfaces between components

---

### Electronics-Specific Projects

**Project 1: Embedded Systems (C)**
- **Topic**: Temperature/humidity logger with circular buffer
- **Simulate**: Reading sensor data at fixed intervals
- **Features**: 
  - Circular buffer to store last N readings
  - Statistics: min, max, average temperature
  - Data persistence: save to file
- **Deliverable**: Executable + sample data file

**Project 2: Signal Processing (Python)**
- **Topic**: Audio frequency analysis tool
- **Features**:
  - Load WAV file with scipy
  - Apply FFT to extract frequency components
  - Visualize magnitude spectrum
  - Detect dominant frequencies
- **Deliverable**: Python script + sample analysis output

**Project 3: Real-Time Systems (Java)**
- **Topic**: Robot control system simulator
- **Features**:
  - Event-driven architecture (sensors → commands → actuators)
  - Concurrent threads for sensor polling, decision-making
  - Safety: deadlock prevention, resource limits
- **Deliverable**: Simulator executable + test scenarios

**Project 4: Hardware Interface (C)**
- **Topic**: I2C/SPI protocol simulator
- **Features**:
  - Simulate I2C master-slave communication
  - Implement basic I2C protocol state machine
  - Read/write registers on simulated slave device
- **Deliverable**: Executable + protocol trace output

---

## Weekly Learning Routine (Recommended 10-15 hours/week)

| Day | Activity | Duration | Location | Goal |
|-----|----------|----------|----------|------|
| **Mon** | Theory/Lecture | 1.5-2 hrs | coursework/ | Understand new concept |
| **Tue** | Exercises (Language 1) | 1.5 hrs | exercises/ | Apply concept |
| **Wed** | Exercises (Language 2) | 1.5 hrs | exercises/ | Reinforce understanding |
| **Thu** | Mini-project/coding challenge | 1.5-2 hrs | exercises/week-X/ | Practical application |
| **Fri** | Code review + debugging | 1-1.5 hrs | Any | Polish work, fix issues |
| **Sat-Sun** | Semester project | 3-4 hrs | projects/ | Build substantial project |

---

## Git Commit Strategy

### Commit Frequency
- **Exercises**: 1 commit per exercise (immediate after solving)
- **Coursework**: 1 commit per concept area (weekly)
- **Projects**: Milestone-based commits (feature complete, bug fix, refactor)

### Commit Message Format
```
[language] [module] Brief description (50 chars max)

- Detail 1
- Detail 2
- Detail 3 (if applicable)

Related to: coursework/project path
```

### Example Commits
```
[c] pointers Complete pointer arithmetic exercises

- Implement dynamic array resizing
- Add boundary checking
- Pass valgrind memory leak tests

Related to: c/coursework/semester-1/pointers
```

```
[java] collections Implement library management system

- Add Book and Member classes
- Implement HashMap-based catalog
- Complete borrow/return functionality
- Add JUnit tests

Related to: java/projects/library-management
```

---

## Documentation & Resources

### Root-Level Documentation
- **`README.md`**: Overview, quick start, progress tracker
- **`LANGUAGES.md`**: When to use each language (C for systems, Java for enterprise, etc.)
- **Per-language `SETUP.md`**: Build commands, compilation flags, testing procedures

### Monthly Checkpoints
- End of each month: Write progress report
  - What was learned
  - Which concepts are still weak
  - Next month's focus areas
  - Update README with progress

### Resource Links (save in `LANGUAGES.md`)
- **C**: cppreference.com/w/c, K&R "The C Programming Language"
- **C++**: cppreference.com/w/cpp, "Effective C++" by Scott Meyers
- **Java**: docs.oracle.com/javase, "Effective Java" by Joshua Bloch
- **Python**: python.org/doc, "Fluent Python" by Luciano Ramalho
- **Competitive Programming**: LeetCode.com, Codeforces.com, Project Euler

---

## Portfolio & Internship Preparation

By end of Semester 4, student will have:
- ✓ 16+ complete projects (4 per language/semester)
- ✓ GitHub repository with 100+ commits demonstrating growth
- ✓ Experience in systems programming, OOP, concurrency, data structures
- ✓ Competitive programming problems solved (30+ across languages)
- ✓ Cross-language integration experience
- ✓ Electronics-focused practical applications

**Use this portfolio to:**
- Impress internship interviewers
- Demonstrate programming proficiency across 4 languages
- Show systematic problem-solving approach
- Highlight continuous learning mindset

---

## Final Notes

- **Flexibility**: Adjust timeline based on university course schedule
- **Quality over Quantity**: Focus on deep understanding, not rushing through topics
- **Debugging Practice**: Spend as much time debugging as coding—it's a crucial skill
- **Community**: Share projects on GitHub, contribute to open source
- **Feedback**: Seek code reviews from peers or online communities

**Good luck on your learning journey!** 🚀

---

**Questions to Refine Your Learning:**
1. Are you interested in specializing in any particular area (embedded, web, data science)?
2. Do your university courses have specific language requirements?
3. Are you preparing for specific internship opportunities?
4. Do you want to participate in competitive programming contests?
