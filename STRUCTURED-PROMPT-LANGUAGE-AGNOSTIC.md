# Structured Prompt: Language-Agnostic Topicwise Sample Programs

## Task Overview

Create a comprehensive collection of sample programs organized by learning topics to support a semester curriculum in any programming language.

---

## Objective

Provide 2 practical, runnable sample programs for each core topic of a programming curriculum, organized in dedicated topic folders within the semester coursework directory.

---

## Methodology

### Phase 1: Topic Identification
Identify core topics from the semester curriculum:
- Review learning guide for topic breakdown
- List all topics in sequential order
- Ensure topics progress from basic to advanced
- Note topic dependencies and prerequisites

**Example Structure (15 topics for full semester):**
- Topics 1-3: Fundamentals
- Topics 4-6: Intermediate concepts
- Topics 7-8: Collections/Data structures
- Topics 9-12: Advanced concepts
- Topics 13-15: Capstone/Integration

### Phase 2: Folder Creation
Create topicwise folder structure in `[SEMESTER]/01-coursework/`:

```
01-coursework/
├── 01-[first-topic]/
├── 02-[second-topic]/
├── 03-[third-topic]/
...
└── NN-[final-topic]/
```

**Naming Convention:**
- Use numerical prefix (01-, 02-, etc.) for ordering
- Use kebab-case for folder names
- Match topic names to curriculum guide

### Phase 3: Sample Program Creation
For each topic, create exactly 2 sample programs:
- **01-[basic-example].[ext]**: Foundational concepts
- **02-[advanced-example].[ext]**: Extended/complex application

**Program Characteristics:**
- Each program is independently compilable/runnable
- Clear topic description in header/comments
- Demonstrates key concepts of the topic
- Includes inline code comments explaining implementation
- Practical, real-world examples
- Progressively builds in complexity (01 → 02)
- Uses consistent code style appropriate to language
- Includes error handling where applicable
- Proper imports/includes for the language

### Phase 4: Version Control
Commit all sample programs to git with:
- Single comprehensive commit
- Descriptive commit message listing all topics
- Reference to number of programs per topic
- Total code statistics

---

## Deliverables

### Structure Template
```
[LANGUAGE]-semester/
├── 01-coursework/
│   ├── 01-[topic-name]/
│   │   ├── 01-[basic-example].[ext]
│   │   └── 02-[advanced-example].[ext]
│   ├── 02-[topic-name]/
│   │   ├── 01-[basic-example].[ext]
│   │   └── 02-[advanced-example].[ext]
│   ...
│   └── NN-[topic-name]/
│       ├── 01-[basic-example].[ext]
│       └── 02-[advanced-example].[ext]
└── 04-LEARNING-MATERIALS/
    └── 01-guides/
        └── 01-LEARNING-GUIDE.md
```

### Deliverables Checklist
- [x] N topic folders (numbered 01-NN)
- [x] 2N total sample programs
- [x] All programs compilable/runnable
- [x] All programs documented
- [x] Consistent naming convention
- [x] Uniform code style
- [x] Version control commit
- [x] Topic-to-program mapping maintained

---

## Sample Program Guidelines

### Header Section Template
```
[Language-specific comment syntax]
Topic: [Topic Name]
Sample [1 or 2]: [Specific Focus]

Demonstrates:
- Concept 1
- Concept 2
- Concept 3
```

### Content Requirements
Each program must include:
1. Language-appropriate imports/includes
2. Any helper functions or class definitions needed
3. Entry point function with practical example
4. Inline comments explaining key operations
5. Clear output showing program execution
6. Error handling where relevant to language

### Compilation/Execution Instructions
Programs should compile/run with:
- Single standard command for the language
- No external dependencies (or clearly documented)
- Use language conventions (make, maven, cargo, pip, etc.)

### Difficulty Progression

**Sample 01 (Basic/Foundational):**
- Core topic concepts only
- Simple, direct examples
- Minimal dependencies
- Suitable for first-time learning
- ~30-50 lines of code

**Sample 02 (Advanced/Extended):**
- Extended topic concepts
- More complex examples
- Real-world applications
- Builds on fundamental understanding
- ~40-70 lines of code

---

## Implementation Guidelines by Language Type

### Compiled Languages (C, C++, Java, Go)
- Header files (if applicable)
- Compilation commands documented
- Build system integration (Make, CMake, Gradle)
- No dynamic compilation needed
- Static type checking respected

### Interpreted Languages (Python, JavaScript, Ruby)
- Import statements clear
- Virtual environment or package manager documented
- Executable directly from command line
- Comments on interpreter version if relevant
- Optional type hints where language supports

### Modular/Package Languages (Rust, Go, Java)
- Module/package structure appropriate
- Dependencies clearly listed
- Standard project layout followed
- Build configuration included

---

## Quality Assurance Standards

### Each Program Must:
- ✓ Compile/interpret without errors
- ✓ Execute without runtime errors (standard inputs)
- ✓ Demonstrate the stated topic clearly
- ✓ Include helpful comments
- ✓ Be independently runnable
- ✓ Follow language conventions
- ✓ Use consistent naming patterns
- ✓ Have proper error handling

### Code Style Standards
- Follow language's standard conventions
- Consistent indentation (typically 4 spaces)
- Descriptive variable/function names
- Clear separation of concerns
- Meaningful comments (not over-commented)
- Modern language features (not deprecated)
- No compiler/interpreter warnings

---

## Curriculum Alignment

### Phase Mapping Template

| Phase | Topics | Focus Area | Duration |
|-------|--------|-----------|----------|
| Phase 1 | 01-03 | Basics/Fundamentals | Early weeks |
| Phase 2 | 04-06 | Core concepts | Middle weeks |
| Phase 3 | 07-08 | Collections/Data structures | Mid-semester |
| Phase 4 | 09-12 | Advanced/Complex topics | Advanced weeks |
| Phase 5 | 13-15 | Integration/Capstone | Final weeks |

**Adjust topic count and phases based on actual curriculum.**

---

## Learner Usage Instructions

### Recommended Learning Path

1. **Review Curriculum**: Check LEARNING-MATERIALS/01-guides/ for topic overview
2. **Study Basic Sample**: Examine `01-*.ext` for foundational concepts
3. **Compile/Run**: Execute basic sample locally
4. **Experiment**: Modify basic sample, test variations
5. **Study Advanced Sample**: Examine `02-*.ext` for deeper understanding
6. **Practice**: Extend advanced sample with own modifications
7. **Progress**: Move to next topic

### Compilation/Execution Examples

**General pattern:**
```bash
[language-compiler] [compilation-flags] -o [output] [source-file]
./{output}
```

**Language-specific examples:**
```bash
# C/C++
gcc -Wall -Wextra program.c -o program && ./program

# Java
javac Program.java && java Program

# Python
python program.py

# JavaScript
node program.js

# Rust
rustc program.rs && ./program
```

---

## Mapping and Organization

### Topic-to-Program Mapping Document

Create a mapping table (CSV or Markdown) showing:
- Topic number
- Topic name
- Folder name
- Basic sample filename
- Advanced sample filename
- Key concepts covered

**Example:**
```
Topic | Name | Folder | Basic | Advanced | Concepts
1 | Variables | 01-variables | 01-basic | 02-advanced | types, operations
```

---

## Git Integration

### Commit Strategy
- Single commit containing all programs
- Descriptive commit message
- Reference number of topics and programs
- Total code statistics
- Include list of all topics covered

### Commit Message Template
```
Add NN sample programs organized by NN topics for [Language] [Semester]

Topics covered:
1. [Topic Name] (2 samples)
2. [Topic Name] (2 samples)
...
NN. [Topic Name] (2 samples)

Statistics:
- Total topics: NN
- Sample programs: NN×2 (NN total)
- Total code lines: XXXX+
- All programs: Complete, runnable, documented
```

---

## Key Features

✓ **Complete Coverage**: All curriculum topics included
✓ **Progressive Learning**: 2 samples per topic (basic → advanced)
✓ **Runnable Examples**: All programs compile/execute
✓ **Well-Documented**: Clear comments and explanations
✓ **Practical Focus**: Real-world examples
✓ **Easy Navigation**: Organized by topic with clear naming
✓ **Integrated**: Linked to curriculum materials
✓ **Language-Native**: Follows language conventions
✓ **Reusable Pattern**: Can apply to any language

---

## Success Criteria Checklist

- [ ] N topic folders created (matching curriculum)
- [ ] 2N total sample programs created
- [ ] All programs compile/run without errors
- [ ] All programs have topic descriptions
- [ ] All programs have inline comments
- [ ] Basic samples (01-) demonstrate foundational concepts
- [ ] Advanced samples (02-) demonstrate extended concepts
- [ ] Naming convention is consistent
- [ ] Code style is uniform throughout
- [ ] Programs are committed to git
- [ ] Commit message is descriptive
- [ ] Mapping document is created
- [ ] All programs are independent (no cross-dependencies)

---

## Customization Points by Language

### For Each Language Implementation:

1. **File Extensions**
   - C: `.c`
   - C++: `.cpp`
   - Java: `.java`
   - Python: `.py`
   - JavaScript: `.js`
   - Rust: `.rs`

2. **Compilation/Execution Command**
   - Document language-specific build tool
   - Include any flags needed

3. **Standard Library Imports**
   - Use language-native packages
   - Include examples of common imports

4. **Code Style**
   - Follow language community standards
   - Use idiomatic patterns for language

5. **Error Handling**
   - Use language-native exception/error handling
   - Show try-catch patterns where applicable

---

## Optional Enhancements

- Makefile/build configuration for each topic folder
- README.md in each folder with descriptions
- Unit test programs for verification
- Performance comparison examples
- Integration with CI/CD pipelines
- Documentation generation (Doxygen, Javadoc, etc.)
- Docker containerization examples
- Memory profiling examples

---

## Template Reusability

This prompt is designed to be reusable across:
- Multiple programming languages
- Different semester durations (10-week, 15-week, etc.)
- Varying topic counts (8 topics, 12 topics, 15 topics, etc.)
- Different educational contexts (bootcamp, semester, self-paced)

**To adapt:**
1. Replace `[PLACEHOLDER]` values with actual data
2. Adjust phase count based on semester duration
3. Update compilation instructions for target language
4. Modify success criteria if needed
5. Add language-specific guidelines

---

**Status**: Template Complete
**Last Updated**: 2026-06-11
**Applicability**: All programming languages
**Adaptability**: High (template-based, customizable)
