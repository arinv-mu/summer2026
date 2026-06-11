
/**
 * Topic: Streams API & Functional Programming
 * Sample 1: Stream Operations and Filtering
 *
 * Demonstrates:
 * - Stream creation from collections
 * - Filter operations
 * - Map operations
 * - forEach terminal operation
 * - Collect to list
 * - Chaining stream operations
 */

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class StreamOperationsDemo {
  public static void main(String[] args) {
    System.out.println("=== Streams API & Functional Programming ===\n");

    // 1. Create list of students with grades
    System.out.println("--- Creating Student Data ---");
    List<String> students = new ArrayList<>();
    students.add("Alice:90");
    students.add("Bob:75");
    students.add("Charlie:95");
    students.add("Diana:85");
    students.add("Eve:70");

    System.out.println("Students: " + students);

    // 2. Simple forEach on stream
    System.out.println("\n--- Stream forEach ---");
    System.out.println("Iterating through stream:");
    students.stream()
        .forEach(student -> System.out.println("  " + student));

    // 3. Filter - only high performers (grade >= 85)
    System.out.println("\n--- Filter: High Performers (>= 85) ---");
    students.stream()
        .filter(student -> {
          String[] parts = student.split(":");
          int grade = Integer.parseInt(parts[1]);
          return grade >= 85;
        })
        .forEach(System.out::println);

    // 4. Map - extract only names
    System.out.println("\n--- Map: Extract Names ---");
    System.out.println("Names:");
    students.stream()
        .map(student -> student.split(":")[0])
        .forEach(name -> System.out.println("  " + name));

    // 5. Map - extract only grades
    System.out.println("\n--- Map: Extract Grades ---");
    System.out.println("Grades:");
    students.stream()
        .map(student -> student.split(":")[1])
        .map(Integer::parseInt)
        .forEach(grade -> System.out.println("  " + grade));

    // 6. Filter and Map combined
    System.out.println("\n--- Filter + Map: Names of High Performers ---");
    students.stream()
        .filter(student -> Integer.parseInt(student.split(":")[1]) >= 85)
        .map(student -> student.split(":")[0])
        .forEach(name -> System.out.println("  " + name));

    // 7. Collect to new list
    System.out.println("\n--- Collect: Create List of High Performers ---");
    List<String> highPerformers = students.stream()
        .filter(student -> Integer.parseInt(student.split(":")[1]) >= 85)
        .collect(Collectors.toList());

    System.out.println("High performers: " + highPerformers);

    // 8. Count elements
    System.out.println("\n--- Count: Number of High Performers ---");
    long count = students.stream()
        .filter(student -> Integer.parseInt(student.split(":")[1]) >= 85)
        .count();

    System.out.println("Count: " + count);

    // 9. Sorted stream
    System.out.println("\n--- Sorted Stream ---");
    System.out.println("Students sorted alphabetically by name:");
    students.stream()
        .map(student -> student.split(":")[0])
        .sorted()
        .forEach(name -> System.out.println("  " + name));

    // 10. List of integers for more stream examples
    System.out.println("\n--- Stream with Integer List ---");
    List<Integer> numbers = new ArrayList<>();
    for (int i = 1; i <= 10; i++) {
      numbers.add(i);
    }

    // 11. Filter even numbers
    System.out.println("\nEven numbers:");
    numbers.stream()
        .filter(n -> n % 2 == 0)
        .forEach(System.out::println);

    // 12. Map to squares
    System.out.println("\nSquares of 1-10:");
    numbers.stream()
        .map(n -> n * n)
        .forEach(System.out::println);

    // 13. Filter and map combined
    System.out.println("\nSquares of even numbers:");
    numbers.stream()
        .filter(n -> n % 2 == 0)
        .map(n -> n * n)
        .forEach(System.out::println);

    // 14. Convert stream to list
    System.out.println("\n--- Collect to List ---");
    List<Integer> squaredEvens = numbers.stream()
        .filter(n -> n % 2 == 0)
        .map(n -> n * n)
        .collect(Collectors.toList());

    System.out.println("Squared even numbers: " + squaredEvens);
  }
}
