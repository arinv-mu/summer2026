
/**
 * Topic: Methods & Packages
 * Sample 2: Advanced Methods and Utilities
 *
 * Demonstrates:
 * - Complex method logic
 * - Method organization in utility classes
 * - Static methods for utilities
 * - Method documentation with comments
 * - Input validation in methods
 * - Mathematical operations
 */

import java.util.Scanner;

public class CalculatorUtility {

  // Static utility methods for mathematical operations

  /**
   * Calculate power: base^exponent
   *
   * @param base     the base number
   * @param exponent the exponent
   * @return base raised to power exponent
   */
  public static double power(double base, int exponent) {
    if (exponent == 0) {
      return 1;
    }

    double result = 1;
    for (int i = 0; i < Math.abs(exponent); i++) {
      result *= base;
    }

    // Handle negative exponents
    if (exponent < 0) {
      result = 1 / result;
    }

    return result;
  }

  /**
   * Calculate greatest common divisor (GCD)
   */
  public static int gcd(int a, int b) {
    a = Math.abs(a);
    b = Math.abs(b);

    while (b != 0) {
      int temp = b;
      b = a % b;
      a = temp;
    }

    return a;
  }

  /**
   * Calculate least common multiple (LCM)
   */
  public static int lcm(int a, int b) {
    return Math.abs(a * b) / gcd(a, b);
  }

  /**
   * Check if number is prime
   */
  public static boolean isPrime(int num) {
    if (num <= 1) {
      return false;
    }
    if (num <= 3) {
      return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
      return false;
    }

    for (int i = 5; i * i <= num; i += 6) {
      if (num % i == 0 || num % (i + 2) == 0) {
        return false;
      }
    }

    return true;
  }

  /**
   * Convert temperature from Celsius to Fahrenheit
   */
  public static double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
  }

  /**
   * Convert temperature from Fahrenheit to Celsius
   */
  public static double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
  }

  /**
   * Calculate simple interest
   *
   * @param principal the principal amount
   * @param rate      the interest rate (%)
   * @param time      the time period (years)
   * @return simple interest
   */
  public static double simpleInterest(double principal, double rate, double time) {
    if (principal < 0 || rate < 0 || time < 0) {
      System.err.println("Error: Values cannot be negative");
      return -1;
    }

    return (principal * rate * time) / 100;
  }

  /**
   * Validate if input is a valid number
   */
  public static boolean isValidNumber(String input) {
    try {
      Double.parseDouble(input);
      return true;
    } catch (NumberFormatException e) {
      return false;
    }
  }

  /**
   * Calculate area of rectangle
   */
  public static double rectangleArea(double length, double width) {
    if (length <= 0 || width <= 0) {
      System.err.println("Error: Length and width must be positive");
      return -1;
    }
    return length * width;
  }

  /**
   * Calculate area of circle
   */
  public static double circleArea(double radius) {
    if (radius <= 0) {
      System.err.println("Error: Radius must be positive");
      return -1;
    }
    return Math.PI * radius * radius;
  }

  /**
   * Find maximum of three numbers
   */
  public static int max(int a, int b, int c) {
    return Math.max(Math.max(a, b), c);
  }

  /**
   * Find minimum of three numbers
   */
  public static int min(int a, int b, int c) {
    return Math.min(Math.min(a, b), c);
  }

  // Main method demonstrating utility methods
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("=== Calculator Utility Methods ===\n");

    // Demonstrate power function
    System.out.println("--- Power Function ---");
    System.out.println("2^3 = " + power(2, 3));
    System.out.println("5^4 = " + power(5, 4));
    System.out.println("2^(-2) = " + power(2, -2));

    // Demonstrate GCD and LCM
    System.out.println("\n--- GCD and LCM ---");
    System.out.println("GCD(12, 18) = " + gcd(12, 18));
    System.out.println("LCM(12, 18) = " + lcm(12, 18));

    // Demonstrate prime check
    System.out.println("\n--- Prime Number Check ---");
    System.out.println("Is 17 prime? " + isPrime(17));
    System.out.println("Is 20 prime? " + isPrime(20));

    // Demonstrate temperature conversion
    System.out.println("\n--- Temperature Conversion ---");
    double celsius = 25;
    System.out.println(celsius + "°C = " + celsiusToFahrenheit(celsius) + "°F");
    double fahrenheit = 77;
    System.out.println(fahrenheit + "°F = " + fahrenheitToCelsius(fahrenheit) + "°C");

    // Demonstrate simple interest
    System.out.println("\n--- Simple Interest ---");
    double principal = 1000;
    double rate = 5;
    double time = 2;
    double interest = simpleInterest(principal, rate, time);
    System.out.printf("Principal: $%.2f, Rate: %.1f%%, Time: %.1f years\n", principal, rate, time);
    System.out.printf("Simple Interest: $%.2f\n", interest);

    // Demonstrate area calculations
    System.out.println("\n--- Area Calculations ---");
    System.out.println("Area of rectangle (5 x 10): " + rectangleArea(5, 10));
    System.out.println("Area of circle (radius 5): " + circleArea(5));

    // Demonstrate max/min
    System.out.println("\n--- Max and Min ---");
    System.out.println("Max of (3, 7, 5): " + max(3, 7, 5));
    System.out.println("Min of (3, 7, 5): " + min(3, 7, 5));

    scanner.close();
  }
}
