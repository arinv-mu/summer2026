# Structured Prompt: C Semester Topicwise Sample Programs

## Task Overview

Create a comprehensive collection of sample C programs organized by learning topics to support the C Semester curriculum.

---

## Objective

Provide 2 practical, runnable sample programs for each of the 15 core C programming topics, organized in dedicated topic folders within the coursework directory.

---

## Methodology

### Phase 1: Topic Identification
Identify the 15 core topics from the C Semester curriculum:
1. Variables, Data Types, Operators & I/O
2. Conditionals (if/else, switch)
3. Loops (for, while, do-while, nested)
4. Functions - Basics
5. Functions - Advanced
6. Build Systems & Headers
7. Arrays (1D and 2D)
8. Strings
9. Pointers - Fundamentals
10. Pointers - Applications
11. Dynamic Memory
12. Pointers - Advanced
13. Structures
14. Structures with Pointers
15. File I/O

### Phase 2: Folder Creation
Create topicwise folder structure in `03-semester-c/01-coursework/`:
```
01-coursework/
├── 01-variables-data-types-operators/
├── 02-conditionals/
├── 03-loops/
├── 04-functions-basics/
├── 05-functions-advanced/
├── 06-build-systems-headers/
├── 07-arrays/
├── 08-strings/
├── 09-pointers-fundamentals/
├── 10-pointers-applications/
├── 11-dynamic-memory/
├── 12-pointers-advanced/
├── 13-structures/
├── 14-structures-with-pointers/
└── 15-file-io/
```

### Phase 3: Sample Program Creation
For each topic, create exactly 2 sample programs:
- **01-*.c**: Basic/foundational example
- **02-*.c**: Advanced/extended example

**Program Characteristics:**
- Each program is independently compilable and runnable
- Clear topic description in header comments
- Demonstrates key concepts of the topic
- Includes inline code comments explaining implementation
- Practical, real-world examples (not contrived)
- Progressively builds in complexity (01 → 02)
- Uses consistent code style (K&R style with modern standards)
- Includes error handling where applicable

### Phase 4: Version Control
Commit all 30 sample programs to git with:
- Descriptive commit message
- Reference to all 15 topics covered
- Clear indication of 2 programs per topic

---

## Deliverables

### Structure
- **15 topic folders** (01-* to 15-*)
- **30 sample C programs** (2 per topic)
- **1,657+ lines** of documented code

### Program Organization

| Topic | Folder | Basic Sample (01) | Advanced Sample (02) |
|-------|--------|-------------------|----------------------|
| 1 | 01-variables-data-types-operators | 01-basic-arithmetic.c | 02-bitwise-constants.c |
| 2 | 02-conditionals | 01-if-else-grades.c | 02-switch-days.c |
| 3 | 03-loops | 01-for-while-loops.c | 02-nested-dowhile.c |
| 4 | 04-functions-basics | 01-function-basics.c | 02-scope-parameters.c |
| 5 | 05-functions-advanced | 01-recursion.c | 02-function-pointers.c |
| 6 | 06-build-systems-headers | 01-multifile-structure.c | 02-header-concepts.c |
| 7 | 07-arrays | 01-1d-arrays.c | 02-2d-arrays.c |
| 8 | 08-strings | 01-string-operations.c | 02-string-parsing.c |
| 9 | 09-pointers-fundamentals | 01-pointer-basics.c | 02-null-void-pointers.c |
| 10 | 10-pointers-applications | 01-pointers-arrays.c | 02-double-pointers.c |
| 11 | 11-dynamic-memory | 01-malloc-free.c | 02-calloc-realloc.c |
| 12 | 12-pointers-advanced | 01-pointer-arrays.c | 02-complex-pointers.c |
| 13 | 13-structures | 01-basic-structs.c | 02-nested-unions.c |
| 14 | 14-structures-with-pointers | 01-struct-pointers.c | 02-linked-list.c |
| 15 | 15-file-io | 01-text-file-io.c | 02-binary-file-io.c |

---

## Sample Program Guidelines

### Header Section
```c
/*
 * Topic: [Topic Name]
 * Sample [1 or 2]: [Specific Focus]
 *
 * Demonstrates:
 * - Concept 1
 * - Concept 2
 * - Concept 3
 */
```

### Content Requirements
Each program must include:
1. Necessary includes (`#include <stdio.h>`, etc.)
2. Any helper functions or structure definitions needed
3. Main function with practical example
4. Inline comments explaining key operations
5. Clear output showing program execution
6. Error handling where relevant

### Compilation Instructions
All programs compile with:
```bash
gcc -Wall -Wextra -std=c99 -o program program.c
```

### Difficulty Progression

**Sample 01 (Basic):**
- Core topic concepts
- Simple, direct examples
- Minimal dependencies
- Suitable for first-time learning
- ~30-50 lines of code

**Sample 02 (Advanced):**
- Extended topic concepts
- More complex examples
- Real-world applications
- Builds on fundamental understanding
- ~40-70 lines of code

---

## Usage Instructions for Learners

### Learning Path

1. **Read Guide**: Review topic from `LEARNING-MATERIALS/01-guides/`
2. **Study Basic Sample**: Examine `01-*.c` for concepts
3. **Compile and Run**: Execute basic sample locally
4. **Experiment**: Modify basic sample, test changes
5. **Study Advanced**: Examine `02-*.c` for deeper understanding
6. **Practice**: Modify advanced sample with own examples
7. **Move Forward**: Progress to next topic

### Compilation Examples

```bash
# Basic compilation
gcc -Wall -Wextra -std=c99 01-basic-arithmetic.c

# With output file
gcc -Wall -Wextra -std=c99 -o program 01-basic-arithmetic.c

# Compile and run
gcc -Wall -Wextra -std=c99 01-basic-arithmetic.c && ./a.out

# With debugging symbols
gcc -g -Wall -Wextra -std=c99 -o program 01-basic-arithmetic.c

# Strict compilation
gcc -Wall -Wextra -Werror -std=c99 -o program 01-basic-arithmetic.c

# Using clang
clang -Wall -Wextra -std=c99 -o program 01-basic-arithmetic.c
```

---

## Quality Assurance

### Each Program Must:
- ✓ Compile without warnings
- ✓ Execute without runtime errors (normal inputs)
- ✓ Demonstrate the stated topic clearly
- ✓ Include helpful comments
- ✓ Be independently runnable
- ✓ Follow consistent style
- ✓ Have proper include guards (for headers)
- ✓ Use standard C99 or compatible features

### Code Style Standards
- K&R style with 4-space indentation
- Descriptive variable names
- Function prototypes before main
- Clear separation of concerns
- Meaningful comments (not over-commented)
- Consistent naming conventions

---

## Curriculum Alignment

### Phase Mapping

| Phases | Topics | Duration | Focus |
|--------|--------|----------|-------|
| Phase 1: Fundamentals | 1-3 | Weeks 1-3 | Variables, control flow |
| Phase 2: Modularity | 4-6 | Weeks 4-6 | Functions, organization |
| Phase 3: Collections | 7-8 | Weeks 7-8 | Arrays, strings |
| Phase 4: Pointers & Memory | 9-12 | Weeks 9-12 | Most critical C concepts |
| Phase 5: Advanced | 13-15 | Weeks 13-15 | Data structures, I/O |

---

## Git Integration

### Commit Structure
- Single commit containing all 30 programs
- Organized by topic numbering
- Descriptive commit message
- References all 15 topics

### Repository Location
```
03-semester-c/01-coursework/
└── [15 topicwise folders with 2 programs each]
```

---

## Key Features

✓ **Complete Coverage**: All 15 core C topics
✓ **Progressive Learning**: 2 samples per topic (basic → advanced)
✓ **Runnable Examples**: All programs compile and execute
✓ **Well-Documented**: Clear comments and explanations
✓ **Practical Focus**: Real-world examples, not contrived
✓ **Easy Navigation**: Organized by topic with clear naming
✓ **Integrated**: Linked to LEARNING-MATERIALS curriculum
✓ **Production Ready**: Professional code quality

---

## Success Criteria

- [x] 15 topic folders created
- [x] 30 total sample programs (2 per topic)
- [x] All programs are compilable
- [x] All programs are runnable
- [x] All programs are documented
- [x] Naming convention consistent
- [x] Code style uniform
- [x] Committed to git
- [x] Structure mirrors curriculum flow

---

## Future Enhancements (Optional)

- Makefile for compiling all samples
- README in each folder with descriptions
- Test programs for verifying output
- Performance benchmarking examples
- Integration with CMake build system
- Doxygen-style documentation
- Memory leak detection (valgrind) examples

---

**Status**: ✅ Complete
**Date Created**: 2026-06-11
**Total Programs**: 30
**Total Code Lines**: 1,657+
**All Topics**: Covered
**Git Commit**: caead70
