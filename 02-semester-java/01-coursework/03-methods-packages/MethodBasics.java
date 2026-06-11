/**
 * Topic: Methods & Packages
 * Sample 1: Method Fundamentals
 *
 * Demonstrates:
 * - Method declaration and calling
 * - Parameters and return types
 * - Method overloading
 * - Access modifiers (public, private)
 * - Return values and void methods
 */

public class MethodBasics {
  // Private helper method
  private static void printHeader(String title) {
    System.out.println("\n=== " + title + " ===");
  }

  // Method with no parameters, no return
  public static void greet() {
    System.out.println("Hello, World!");
  }

  // Method with parameters
  public static void greet(String name) {
    System.out.println("Hello, " + name + "!");
  }

  // Method with multiple parameters
  public static void greet(String name, int age) {
    System.out.println("Hello, " + name + "! You are " + age + " years old.");
  }

  // Method with return type
  public static int add(int a, int b) {
    return a + b;
  }

  // Method overloading with different types
  public static double add(double a, double b) {
    return a + b;
  }

  // Method with multiple parameters and return
  public static int multiply(int x, int y) {
    return x * y;
  }

  // Method to check if number is even
  public static boolean isEven(int num) {
    return num % 2 == 0;
  }

  // Method with array parameter
  public static int sumArray(int[] numbers) {
    int sum = 0;
    for (int num : numbers) {
      sum += num;
    }
    return sum;
  }

  // Method with variable parameters (varargs)
  public static double average(double... numbers) {
    if (numbers.length == 0) {
      return 0;
    }
    double sum = 0;
    for (double num : numbers) {
      sum += num;
    }
    return sum / numbers.length;
  }

  // Method to calculate factorial
  public static int factorial(int n) {
    if (n <= 1) {
      return 1;
    }
    return n * factorial(n - 1); // Recursive call
  }

  // Main method
  public static void main(String[] args) {
    printHeader("Method Basics in Java");

    // 1. Simple method call (no parameters)
    printHeader("1. Method with No Parameters");
    greet();

    // 2. Method with single parameter
    printHeader("2. Method Overloading - Single Parameter");
    greet("Alice");
    greet("Bob");

    // 3. Method with multiple parameters
    printHeader("3. Method Overloading - Multiple Parameters");
    greet("Charlie", 25);
    greet("Diana", 30);

    // 4. Method with return value (int)
    printHeader("4. Method with Return - Integer");
    int result1 = add(10, 20);
    System.out.println("10 + 20 = " + result1);

    // 5. Method with return value (double)
    printHeader("5. Method with Return - Double");
    double result2 = add(3.5, 2.5);
    System.out.println("3.5 + 2.5 = " + result2);

    // 6. Using return value in expression
    printHeader("6. Return Value in Expression");
    int product = multiply(5, 6);
    System.out.println("5 * 6 = " + product);

    // 7. Boolean return method
    printHeader("7. Boolean Return Method");
    System.out.println("Is 4 even? " + isEven(4));
    System.out.println("Is 7 even? " + isEven(7));

    // 8. Method with array parameter
    printHeader("8. Method with Array Parameter");
    int[] numbers = { 1, 2, 3, 4, 5 };
    int arraySum = sumArray(numbers);
    System.out.println("Sum of array: " + arraySum);

    // 9. Variable arguments (varargs)
    printHeader("9. Variable Arguments (varargs)");
    double avg1 = average(10, 20, 30);
    double avg2 = average(5, 15, 25, 35, 45);
    System.out.println("Average of 10, 20, 30: " + avg1);
    System.out.println("Average of 5, 15, 25, 35, 45: " + avg2);

    // 10. Recursive method
    printHeader("10. Recursive Method");
    System.out.println("5! = " + factorial(5));
    System.out.println("6! = " + factorial(6));
  }
}
