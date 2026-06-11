
/**
 * Topic: Java Basics & Syntax
 * Sample 1: Basic Arithmetic Calculator
 *
 * Demonstrates:
 * - Class structure and main() method
 * - Primitive data types (int, double)
 * - Arithmetic operators (+, -, *, /, %)
 * - Scanner for user input
 * - System.out.println() for output
 */

import java.util.Scanner;

public class BasicArithmetic {
  public static void main(String[] args) {
    // Create Scanner object for user input
    Scanner scanner = new Scanner(System.in);

    System.out.println("=== Basic Arithmetic Calculator ===\n");

    // Get first number
    System.out.print("Enter first number: ");
    int num1 = scanner.nextInt();

    // Get second number
    System.out.print("Enter second number: ");
    int num2 = scanner.nextInt();

    System.out.println("\n--- Results ---");

    // Perform arithmetic operations
    System.out.println(num1 + " + " + num2 + " = " + (num1 + num2));
    System.out.println(num1 + " - " + num2 + " = " + (num1 - num2));
    System.out.println(num1 + " * " + num2 + " = " + (num1 * num2));

    // Integer division
    System.out.println(num1 + " / " + num2 + " = " + (num1 / num2));

    // Modulo (remainder)
    System.out.println(num1 + " % " + num2 + " = " + (num1 % num2));

    // Floating point division
    double floatDivision = (double) num1 / num2;
    System.out.printf("Float division: %.2f / %.2f = %.2f\n", (double) num1, (double) num2, floatDivision);

    // Close scanner
    scanner.close();
  }
}
