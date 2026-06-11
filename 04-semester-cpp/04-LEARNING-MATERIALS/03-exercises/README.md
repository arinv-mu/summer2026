# C++ Exercises

Practice problems organized by week (weeks 1-20). Each week has 3 exercises (A, B, C) from easy to moderate difficulty.

## Folder Structure

```
03-exercises/
├── week-01-02/  (Week 1-2)
│   ├── A_hello.cpp
│   ├── B_input_output.cpp
│   └── C_calculator.cpp
├── week-03-04/  (Week 3-4)
│   ├── A_loops.cpp
│   ├── B_conditionals.cpp
│   └── C_patterns.cpp
... and so on through week-19-20
```

## How to Use

1. **Start with Exercise A** - Usually the easiest
2. **Move to Exercise B** - Medium difficulty
3. **Challenge yourself with Exercise C** - Harder problems

## Compilation & Running

```bash
# Compile single file
clang++ -std=c++20 -o A_hello A_hello.cpp

# Run the program
./A_hello

# Compile and run together
clang++ -std=c++20 -o program program.cpp && ./program
```

## Week Breakdown

| Weeks | Topics | Concepts |
|-------|--------|----------|
| 1-2 | Basics | Variables, types, operators, I/O |
| 3-4 | Functions & Pointers | Function definition, pointers, references |
| 5-6 | Classes Part 1 | Classes, constructors, member functions |
| 7-8 | Classes Part 2 | Inheritance, virtual functions, polymorphism |
| 9-10 | STL Containers | vector, map, set, iterators |
| 11-12 | STL Algorithms | sort, find, transform, for_each |
| 13-14 | Templates | Function templates, class templates |
| 15-16 | Smart Pointers | unique_ptr, shared_ptr, RAII |
| 17-18 | Testing & Debug | Google Test, assertions, debugging |
| 19-20 | Project | Graphics/Game Engine (see 04-projects/) |

## Example: Week 1-2 Exercises

### Exercise A: Hello World
```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

### Exercise B: Input/Output
```cpp
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "What's your name? ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
```

### Exercise C: Simple Calculator
```cpp
#include <iostream>

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << "Sum: " << (num1 + num2) << std::endl;
    return 0;
}
```

## Tips

- Each exercise should be in a separate .cpp file
- Compile with `-std=c++20` flag for modern C++
- Test your code frequently: `clang++ && ./program`
- Use the [02-COMPILATION-REFERENCE.md](../01-guides/02-COMPILATION-REFERENCE.md) for compilation help
- Check [03-DEBUGGING-GUIDE.md](../01-guides/03-DEBUGGING-GUIDE.md) if you get errors
- Debug with LLDB on macOS: `lldb ./program`
- Once you complete a week, move to the next!

---

**Ready?** Start with [../02-templates/00-hello.cpp](../02-templates/00-hello.cpp) as your template! 🚀
