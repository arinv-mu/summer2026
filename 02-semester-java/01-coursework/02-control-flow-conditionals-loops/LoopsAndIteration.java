/**
 * Topic: Control Flow (Conditionals & Loops)
 * Sample 2: Loops and Iteration
 *
 * Demonstrates:
 * - for loops with various patterns
 * - while loops
 * - do-while loops
 * - break and continue statements
 * - Nested loops
 * - Loop control examples
 */

public class LoopsAndIteration {
  public static void main(String[] args) {
    System.out.println("=== Loops and Iteration ===\n");

    // 1. Simple for loop
    System.out.println("--- 1. Simple For Loop (1 to 5) ---");
    for (int i = 1; i <= 5; i++) {
      System.out.print(i + " ");
    }
    System.out.println("\n");

    // 2. For loop with custom increment
    System.out.println("--- 2. For Loop with Step (0 to 20 by 5) ---");
    for (int i = 0; i <= 20; i += 5) {
      System.out.print(i + " ");
    }
    System.out.println("\n");

    // 3. For loop descending
    System.out.println("--- 3. Descending For Loop (10 to 1) ---");
    for (int i = 10; i >= 1; i--) {
      System.out.print(i + " ");
    }
    System.out.println("\n");

    // 4. Multiplication table using nested loops
    System.out.println("\n--- 4. Multiplication Table (3x3) ---");
    for (int i = 1; i <= 3; i++) {
      for (int j = 1; j <= 3; j++) {
        System.out.printf("%d ", i * j);
      }
      System.out.println();
    }

    // 5. Number pyramid using nested loops
    System.out.println("\n--- 5. Number Pyramid ---");
    for (int i = 1; i <= 5; i++) {
      for (int j = 1; j <= i; j++) {
        System.out.print(j + " ");
      }
      System.out.println();
    }

    // 6. While loop
    System.out.println("\n--- 6. While Loop (Count 1 to 5) ---");
    int count = 1;
    while (count <= 5) {
      System.out.print(count + " ");
      count++;
    }
    System.out.println("\n");

    // 7. Do-while loop
    System.out.println("--- 7. Do-While Loop ---");
    int num = 1;
    do {
      System.out.print(num + " ");
      num++;
    } while (num <= 5);
    System.out.println("\n");

    // 8. For loop with break statement
    System.out.println("--- 8. For Loop with Break (stop at 5) ---");
    for (int i = 1; i <= 10; i++) {
      if (i == 5) {
        System.out.println("\nBreak at " + i);
        break;
      }
      System.out.print(i + " ");
    }

    // 9. For loop with continue statement
    System.out.println("\n--- 9. For Loop with Continue (skip even numbers) ---");
    for (int i = 1; i <= 10; i++) {
      if (i % 2 == 0) {
        continue; // Skip even numbers
      }
      System.out.print(i + " ");
    }
    System.out.println("\n");

    // 10. Sum using loop
    System.out.println("--- 10. Sum of Numbers 1 to 10 ---");
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
      sum += i;
    }
    System.out.println("Sum = " + sum);

    // 11. Factorial using loop
    System.out.println("\n--- 11. Factorial of 5 ---");
    int factorial = 1;
    for (int i = 1; i <= 5; i++) {
      factorial *= i;
    }
    System.out.println("5! = " + factorial);

    // 12. String pattern using loops
    System.out.println("\n--- 12. Star Pattern ---");
    for (int i = 1; i <= 5; i++) {
      for (int j = 1; j <= i; j++) {
        System.out.print("* ");
      }
      System.out.println();
    }

    // 13. FizzBuzz
    System.out.println("\n--- 13. FizzBuzz (1 to 15) ---");
    for (int i = 1; i <= 15; i++) {
      if (i % 15 == 0) {
        System.out.print("FizzBuzz ");
      } else if (i % 3 == 0) {
        System.out.print("Fizz ");
      } else if (i % 5 == 0) {
        System.out.print("Buzz ");
      } else {
        System.out.print(i + " ");
      }
    }
    System.out.println("\n");
  }
}
