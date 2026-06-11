# Java Semester Project: TODO App CLI

**Duration**: Weeks 19-20 (Final 2 weeks of semester)  
**Difficulty**: Intermediate  
**Skills Used**: OOP, Collections, File I/O, Testing, Gradle

## Project Goals

Build a complete command-line TODO application that:
1. Store tasks in an ArrayList
2. Read/write tasks to a file for persistence
3. Use proper OOP design (Task class, TodoList class)
4. Implement CRUD operations (Create, Read, Update, Delete)
5. Include unit tests with JUnit 5

## Project Milestones

### Milestone 1: Core Classes (3 hours)
- [ ] Create Task class (id, description, completed status)
- [ ] Create TodoList class (manage task collection)
- [ ] Implement add/remove/list operations
- [ ] Write basic unit tests

### Milestone 2: File Persistence (2 hours)
- [ ] Implement file read/write (save tasks to file)
- [ ] Load tasks from file on startup
- [ ] Handle file not found gracefully
- [ ] Ensure data survives between runs

### Milestone 3: User Interface (2 hours)
- [ ] Create command-line menu
- [ ] Implement commands: add, remove, list, mark-complete, save, quit
- [ ] Add input validation
- [ ] Display tasks with clear formatting

### Milestone 4: Testing & Polish (3 hours)
- [ ] Write comprehensive JUnit 5 tests
- [ ] Test all CRUD operations
- [ ] Test file I/O
- [ ] Test edge cases
- [ ] Final documentation

## Project Structure

```
01-semester-java/02-semester-java/
├── build.gradle
├── src/main/java/com/example/
│   ├── App.java           # Main entry point
│   ├── Task.java          # Task model
│   └── TodoList.java      # Business logic
├── src/test/java/com/example/
│   ├── TaskTest.java
│   ├── TodoListTest.java
│   └── AppTest.java
├── tasks.txt              # Data file
└── README.md              # Documentation
```

## Classes & Design

### Task.java
```java
package com.example;

public class Task {
    private int id;
    private String description;
    private boolean completed;
    
    public Task(int id, String description) {
        this.id = id;
        this.description = description;
        this.completed = false;
    }
    
    // Getters and setters
    public int getId() { return id; }
    public String getDescription() { return description; }
    public boolean isCompleted() { return completed; }
    public void setCompleted(boolean completed) { 
        this.completed = completed; 
    }
    
    @Override
    public String toString() {
        String status = completed ? "✓" : "○";
        return String.format("%s [%d] %s", status, id, description);
    }
}
```

### TodoList.java
```java
package com.example;

import java.util.ArrayList;
import java.util.List;

public class TodoList {
    private ArrayList<Task> tasks = new ArrayList<>();
    private int nextId = 1;
    
    public void addTask(String description) {
        tasks.add(new Task(nextId++, description));
    }
    
    public void removeTask(int id) {
        tasks.removeIf(t -> t.getId() == id);
    }
    
    public void markComplete(int id) {
        for (Task t : tasks) {
            if (t.getId() == id) {
                t.setCompleted(true);
                break;
            }
        }
    }
    
    public List<Task> getTasks() {
        return new ArrayList<>(tasks);
    }
    
    public void clear() {
        tasks.clear();
        nextId = 1;
    }
}
```

### App.java (Main)
```java
package com.example;

import java.util.Scanner;

public class App {
    private TodoList todoList;
    private Scanner scanner;
    
    public App() {
        todoList = new TodoList();
        scanner = new Scanner(System.in);
    }
    
    public void run() {
        System.out.println("📝 TODO App");
        System.out.println("-----------");
        
        String command;
        while (true) {
            printMenu();
            command = scanner.nextLine().trim().toLowerCase();
            
            switch (command) {
                case "add":
                    addTask();
                    break;
                case "list":
                    listTasks();
                    break;
                case "complete":
                    completeTask();
                    break;
                case "remove":
                    removeTask();
                    break;
                case "quit":
                    System.out.println("Goodbye!");
                    return;
                default:
                    System.out.println("Unknown command");
            }
        }
    }
    
    private void printMenu() {
        System.out.println("\n[add] [list] [complete] [remove] [quit]");
        System.out.print("> ");
    }
    
    private void addTask() {
        System.out.print("Task description: ");
        String desc = scanner.nextLine();
        todoList.addTask(desc);
        System.out.println("✓ Task added");
    }
    
    private void listTasks() {
        System.out.println("\nTasks:");
        for (Task t : todoList.getTasks()) {
            System.out.println("  " + t);
        }
    }
    
    private void completeTask() {
        listTasks();
        System.out.print("Task ID to complete: ");
        int id = Integer.parseInt(scanner.nextLine());
        todoList.markComplete(id);
        System.out.println("✓ Task completed");
    }
    
    private void removeTask() {
        listTasks();
        System.out.print("Task ID to remove: ");
        int id = Integer.parseInt(scanner.nextLine());
        todoList.removeTask(id);
        System.out.println("✓ Task removed");
    }
    
    public static void main(String[] args) {
        new App().run();
    }
}
```

## Unit Tests

### TodoListTest.java
```java
package com.example;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class TodoListTest {
    private TodoList list;
    
    @BeforeEach
    public void setup() {
        list = new TodoList();
    }
    
    @Test
    public void testAddTask() {
        list.addTask("Buy milk");
        assertEquals(1, list.getTasks().size());
    }
    
    @Test
    public void testRemoveTask() {
        list.addTask("Task 1");
        list.removeTask(1);
        assertEquals(0, list.getTasks().size());
    }
    
    @Test
    public void testMarkComplete() {
        list.addTask("Do homework");
        list.markComplete(1);
        assertTrue(list.getTasks().get(0).isCompleted());
    }
}
```

## Success Criteria

- [ ] App compiles: `gradle build`
- [ ] App runs: `gradle run`
- [ ] All tests pass: `gradle test`
- [ ] Data persists between runs
- [ ] All CRUD operations work
- [ ] Input validation implemented
- [ ] Clear, user-friendly menu
- [ ] README with usage instructions

## Commands

```bash
# Build
gradle build

# Run
gradle run

# Test
gradle test

# Create JAR
gradle jar

# Run JAR
java -jar build/libs/app.jar
```

## Deliverables

1. **Source code** - All Java files in `src/main/java`
2. **Tests** - All test files in `src/test/java` (all passing)
3. **tasks.txt** - Sample data file
4. **build.gradle** - Build configuration
5. **README.md** - Usage and documentation

## Sample Output

```
📝 TODO App
-----------

[add] [list] [complete] [remove] [quit]
> add
Task description: Buy groceries
✓ Task added

> add
Task description: Call mom
✓ Task added

> list

Tasks:
  ○ [1] Buy groceries
  ○ [2] Call mom

> complete
Task ID to complete: 1
✓ Task completed

> list

Tasks:
  ✓ [1] Buy groceries
  ○ [2] Call mom

> quit
Goodbye!
```

---

**Good luck!** This project demonstrates everything you've learned about Java! 🚀
