# Java Exercises

Practice problems organized by week (weeks 1-20). Each week has 3 exercises (A, B, C) from easy to moderate difficulty.

## Folder Structure

```
03-exercises/
├── week-01-02/  (Week 1-2)
│   ├── A_HelloWorld.java
│   ├── B_InputOutput.java
│   └── C_Calculator.java
├── week-03-04/  (Week 3-4)
│   ├── A_Loops.java
│   ├── B_Conditionals.java
│   └── C_Patterns.java
... and so on through week-19-20
```

## How to Use

1. **Start with Exercise A** - Usually the easiest
2. **Move to Exercise B** - Medium difficulty
3. **Challenge yourself with Exercise C** - Harder problems

## Compilation & Running

```bash
# Compile single file
javac A_HelloWorld.java

# Run the class
java A_HelloWorld

# Compile and run together
javac HelloWorld.java && java HelloWorld
```

## Week Breakdown

| Weeks | Topics | Concepts |
|-------|--------|----------|
| 1-2 | Basics | Classes, main, types, operators, Scanner |
| 3-4 | Control Flow | if/else, switch, loops (for, while) |
| 5-6 | Methods & OOP | Methods, parameters, objects, packages |
| 7-8 | OOP Intermediate | Inheritance, this keyword, overriding |
| 9-10 | OOP Advanced | Polymorphism, interfaces, abstract classes |
| 11-12 | Collections | ArrayList, HashMap, HashSet, Generics |
| 13-14 | Streams API | Functional programming, lambda, Streams |
| 15-16 | File I/O | Reading/writing files, exception handling |
| 17-18 | Testing | JUnit 5, assertions, test organization |
| 19-20 | Project | TODO App CLI (see 04-projects/) |

## Example: Week 1-2 Exercises

### Exercise A: Hello World
```java
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
```

### Exercise B: Input/Output
```java
import java.util.Scanner;

public class GreetUser {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("What's your name? ");
        String name = scanner.nextLine();
        System.out.println("Hello, " + name + "!");
    }
}
```

### Exercise C: Simple Calculator
```java
import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        System.out.println("Sum: " + (num1 + num2));
    }
}
```

## Tips

- Each exercise should be in a separate file with the class name matching the filename
- Test your code frequently: `javac && java ClassName`
- Use the [02-COMPILATION-REFERENCE.md](../01-guides/02-COMPILATION-REFERENCE.md) if you forget commands
- Check [03-DEBUGGING-GUIDE.md](../01-guides/03-DEBUGGING-GUIDE.md) if you get errors
- Once you complete a week, move to the next!
- Watch for Java naming conventions (PascalCase for classes)

---

**Ready?** Start with [../02-templates/00-HelloWorld.java](../02-templates/00-HelloWorld.java) as your template! 🚀
