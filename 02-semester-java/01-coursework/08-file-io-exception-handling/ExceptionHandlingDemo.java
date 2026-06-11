
/**
 * Topic: File I/O & Exception Handling
 * Sample 2: Exception Handling Best Practices
 *
 * Demonstrates:
 * - Multiple catch blocks
 * - Custom exceptions
 * - Try-catch-finally
 * - Try-with-resources
 * - Exception hierarchy
 * - Input validation
 */

import java.io.*;
import java.util.*;

// Custom exception
class InvalidStudentException extends Exception {
  public InvalidStudentException(String message) {
    super(message);
  }
}

public class ExceptionHandlingDemo {

  static class Student {
    String name;
    int id;
    double gpa;

    Student(String name, int id, double gpa) throws InvalidStudentException {
      if (name == null || name.isEmpty()) {
        throw new InvalidStudentException("Student name cannot be empty");
      }
      if (id <= 0) {
        throw new InvalidStudentException("Student ID must be positive");
      }
      if (gpa < 0 || gpa > 4.0) {
        throw new InvalidStudentException("GPA must be between 0 and 4.0");
      }

      this.name = name;
      this.id = id;
      this.gpa = gpa;
    }

    @Override
    public String toString() {
      return String.format("Student{%s, ID:%d, GPA:%.1f}", name, id, gpa);
    }
  }

  public static void main(String[] args) {
    System.out.println("=== Exception Handling Best Practices ===\n");

    // 1. Try-catch-finally
    System.out.println("--- Try-Catch-Finally ---");
    tryWithFinallyExample();

    // 2. Multiple catch blocks
    System.out.println("\n--- Multiple Catch Blocks ---");
    multipleCatchExample();

    // 3. Custom exception handling
    System.out.println("\n--- Custom Exceptions ---");
    customExceptionExample();

    // 4. Try-with-resources
    System.out.println("\n--- Try-With-Resources ---");
    tryWithResourcesExample();

    // 5. Exception chaining
    System.out.println("\n--- Exception Chaining ---");
    exceptionChainingExample();
  }

  /**
   * Demonstrate try-catch-finally
   */
  static void tryWithFinallyExample() {
    try {
      System.out.println("In try block");
      int result = 10 / 2;
      System.out.println("Result: " + result);

    } catch (ArithmeticException e) {
      System.out.println("✗ Caught ArithmeticException: " + e.getMessage());

    } finally {
      System.out.println("Finally block always executes");
    }
  }

  /**
   * Demonstrate multiple catch blocks
   */
  static void multipleCatchExample() {
    try {
      String[] students = { "Alice", "Bob" };
      System.out.println("Accessing index 5: " + students[5]);

    } catch (ArrayIndexOutOfBoundsException e) {
      System.out.println("✗ Array index out of bounds: " + e.getMessage());

    } catch (NullPointerException e) {
      System.out.println("✗ Null pointer exception: " + e.getMessage());

    } catch (Exception e) {
      System.out.println("✗ General exception: " + e.getMessage());
    }
  }

  /**
   * Demonstrate custom exceptions
   */
  static void customExceptionExample() {
    // Valid student
    try {
      Student student1 = new Student("Alice", 101, 3.8);
      System.out.println("✓ " + student1);

    } catch (InvalidStudentException e) {
      System.out.println("✗ Invalid student: " + e.getMessage());
    }

    // Invalid student - empty name
    try {
      Student student2 = new Student("", 102, 3.5);
      System.out.println("✓ " + student2);

    } catch (InvalidStudentException e) {
      System.out.println("✗ Invalid student: " + e.getMessage());
    }

    // Invalid student - invalid GPA
    try {
      Student student3 = new Student("Bob", 103, 4.5);
      System.out.println("✓ " + student3);

    } catch (InvalidStudentException e) {
      System.out.println("✗ Invalid student: " + e.getMessage());
    }

    // Invalid student - invalid ID
    try {
      Student student4 = new Student("Charlie", -1, 3.6);
      System.out.println("✓ " + student4);

    } catch (InvalidStudentException e) {
      System.out.println("✗ Invalid student: " + e.getMessage());
    }
  }

  /**
   * Demonstrate try-with-resources (automatic closing)
   */
  static void tryWithResourcesExample() {
    String filename = "test_data.txt";

    // Write file
    try (FileWriter writer = new FileWriter(filename)) {
      writer.write("Line 1\n");
      writer.write("Line 2\n");
      writer.write("Line 3\n");
      System.out.println("✓ File written successfully");

    } catch (IOException e) {
      System.out.println("✗ Error writing: " + e.getMessage());
    }

    // Read file
    try (BufferedReader reader = new BufferedReader(new FileReader(filename))) {
      String line;
      System.out.println("Reading file:");
      while ((line = reader.readLine()) != null) {
        System.out.println("  " + line);
      }

    } catch (FileNotFoundException e) {
      System.out.println("✗ File not found: " + e.getMessage());

    } catch (IOException e) {
      System.out.println("✗ Error reading: " + e.getMessage());
    }
  }

  /**
   * Demonstrate exception chaining
   */
  static void exceptionChainingExample() {
    try {
      try {
        int result = Integer.parseInt("abc"); // Throws NumberFormatException
      } catch (NumberFormatException e) {
        throw new RuntimeException("Failed to parse number", e); // Chain the exception
      }

    } catch (RuntimeException e) {
      System.out.println("✗ Caught exception: " + e.getMessage());
      if (e.getCause() != null) {
        System.out.println("  Caused by: " + e.getCause().getMessage());
      }
    }
  }
}
