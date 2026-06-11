
/**
 * Topic: File I/O & Exception Handling
 * Sample 1: Reading and Writing Files
 *
 * Demonstrates:
 * - Creating and writing to files
 * - Reading from files
 * - Exception handling with try-catch
 * - FileWriter and BufferedReader
 * - File operations error handling
 */

import java.io.*;

public class FileIODemo {
  public static void main(String[] args) {
    System.out.println("=== File I/O & Exception Handling ===\n");

    // 1. Write to a file
    System.out.println("--- Writing to File ---");
    String filename = "students.txt";
    writeToFile(filename);

    // 2. Read from the file
    System.out.println("\n--- Reading from File ---");
    readFromFile(filename);

    // 3. Append to file
    System.out.println("\n--- Appending to File ---");
    appendToFile(filename);

    // 4. Read again after append
    System.out.println("\n--- File Contents After Append ---");
    readFromFile(filename);
  }

  /**
   * Write student data to file
   */
  static void writeToFile(String filename) {
    try (FileWriter writer = new FileWriter(filename)) {
      writer.write("Student Name,Age,GPA\n");
      writer.write("Alice,20,3.8\n");
      writer.write("Bob,21,3.5\n");
      writer.write("Charlie,19,3.9\n");

      System.out.println("✓ File written successfully: " + filename);

    } catch (IOException e) {
      System.out.println("✗ Error writing to file: " + e.getMessage());
    }
  }

  /**
   * Read file and display contents
   */
  static void readFromFile(String filename) {
    try (BufferedReader reader = new BufferedReader(new FileReader(filename))) {
      String line;
      int lineNumber = 0;

      System.out.println("File contents:");
      while ((line = reader.readLine()) != null) {
        lineNumber++;
        System.out.println("  Line " + lineNumber + ": " + line);
      }

    } catch (FileNotFoundException e) {
      System.out.println("✗ File not found: " + filename);
    } catch (IOException e) {
      System.out.println("✗ Error reading file: " + e.getMessage());
    }
  }

  /**
   * Append data to existing file
   */
  static void appendToFile(String filename) {
    try (FileWriter writer = new FileWriter(filename, true)) { // true = append mode
      writer.write("Diana,20,3.7\n");
      writer.write("Eve,22,3.6\n");

      System.out.println("✓ Data appended successfully");

    } catch (IOException e) {
      System.out.println("✗ Error appending to file: " + e.getMessage());
    }
  }
}
