
/**
 * Topic: Control Flow (Conditionals & Loops)
 * Sample 1: Conditional Statements
 *
 * Demonstrates:
 * - if/else if/else statements
 * - Logical operators in conditions
 * - Nested if statements
 * - Grade classification example
 * - User input processing
 */

import java.util.Scanner;

public class ConditionalStatements {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("=== Grade Classification ===\n");

    // Get student's score
    System.out.print("Enter student score (0-100): ");
    int score = scanner.nextInt();

    // Validate input
    if (score < 0 || score > 100) {
      System.out.println("Error: Score must be between 0 and 100");
      scanner.close();
      return;
    }

    // Determine grade using if-else if-else
    System.out.println("\n--- Grade Assignment ---");
    String grade;

    if (score >= 90) {
      grade = "A";
    } else if (score >= 80) {
      grade = "B";
    } else if (score >= 70) {
      grade = "C";
    } else if (score >= 60) {
      grade = "D";
    } else {
      grade = "F";
    }

    System.out.println("Score: " + score);
    System.out.println("Grade: " + grade);

    // Additional classification with nested conditions
    System.out.println("\n--- Detailed Classification ---");

    if (score >= 90) {
      System.out.println("Excellent performance!");

      // Nested if for A+ vs A-
      if (score >= 95) {
        System.out.println("Outstanding - A+");
      } else {
        System.out.println("Very good - A");
      }
    } else if (score >= 80) {
      System.out.println("Good performance!");
    } else if (score >= 70) {
      System.out.println("Satisfactory performance");
    } else if (score >= 60) {
      System.out.println("Passing performance");
    } else {
      System.out.println("Below passing - needs improvement");
    }

    // Conditional with multiple conditions
    System.out.println("\n--- Pass/Fail Status ---");
    boolean passed = score >= 60;
    boolean excellent = score >= 90;

    if (passed && excellent) {
      System.out.println("Status: Passed with excellent marks");
    } else if (passed) {
      System.out.println("Status: Passed");
    } else {
      System.out.println("Status: Failed - remedial required");
    }

    // Switch statement alternative
    System.out.println("\n--- Using Switch Statement ---");
    int gradePoint = score / 10;

    switch (gradePoint) {
      case 10:
      case 9:
        System.out.println("Switch Grade: A");
        break;
      case 8:
        System.out.println("Switch Grade: B");
        break;
      case 7:
        System.out.println("Switch Grade: C");
        break;
      case 6:
        System.out.println("Switch Grade: D");
        break;
      default:
        System.out.println("Switch Grade: F");
    }

    scanner.close();
  }
}
