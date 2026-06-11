/**
 * Topic: Java Basics & Syntax
 * Sample 2: Data Types and Operators
 *
 * Demonstrates:
 * - All primitive data types (int, long, float, double, boolean, char)
 * - Type conversion and casting
 * - Various operators (arithmetic, comparison, logical)
 * - String concatenation
 * - Variable declarations and initialization
 */

public class DataTypesAndOperators {
  public static void main(String[] args) {
    System.out.println("=== Java Data Types and Operators ===\n");

    // 1. Integer types
    System.out.println("--- Integer Types ---");
    byte byteValue = 127; // 8-bit
    short shortValue = 32000; // 16-bit
    int intValue = 2147483647; // 32-bit
    long longValue = 9223372036854775807L; // 64-bit (note L suffix)

    System.out.println("byte: " + byteValue);
    System.out.println("short: " + shortValue);
    System.out.println("int: " + intValue);
    System.out.println("long: " + longValue);

    // 2. Floating point types
    System.out.println("\n--- Floating Point Types ---");
    float floatValue = 3.14f; // 32-bit (note f suffix)
    double doubleValue = 3.141592653589793; // 64-bit

    System.out.println("float: " + floatValue);
    System.out.println("double: " + doubleValue);

    // 3. Character and Boolean
    System.out.println("\n--- Character and Boolean ---");
    char charValue = 'A';
    boolean boolValue = true;

    System.out.println("char: " + charValue);
    System.out.println("boolean: " + boolValue);

    // 4. String (reference type)
    System.out.println("\n--- String Type ---");
    String name = "Alice";
    String greeting = "Hello, " + name + "!";
    System.out.println(greeting);

    // 5. Type conversion
    System.out.println("\n--- Type Conversion ---");
    int a = 10;
    int b = 3;

    // Implicit conversion (int to double)
    double result1 = a / (double) b;
    System.out.println("10 / 3.0 = " + result1);

    // Explicit casting (double to int)
    double pi = 3.14159;
    int piAsInt = (int) pi;
    System.out.println("(int) 3.14159 = " + piAsInt);

    // 6. Comparison operators
    System.out.println("\n--- Comparison Operators ---");
    int x = 10;
    int y = 5;

    System.out.println(x + " == " + y + " : " + (x == y));
    System.out.println(x + " != " + y + " : " + (x != y));
    System.out.println(x + " > " + y + " : " + (x > y));
    System.out.println(x + " < " + y + " : " + (x < y));
    System.out.println(x + " >= " + y + " : " + (x >= y));
    System.out.println(x + " <= " + y + " : " + (x <= y));

    // 7. Logical operators
    System.out.println("\n--- Logical Operators ---");
    boolean condition1 = (x > 5);
    boolean condition2 = (y < 10);

    System.out.println("condition1: " + condition1);
    System.out.println("condition2: " + condition2);
    System.out.println("condition1 && condition2: " + (condition1 && condition2));
    System.out.println("condition1 || condition2: " + (condition1 || condition2));
    System.out.println("!condition1: " + (!condition1));

    // 8. Bitwise operators
    System.out.println("\n--- Bitwise Operators ---");
    int num1 = 5; // binary: 0101
    int num2 = 3; // binary: 0011

    System.out.println(num1 + " & " + num2 + " = " + (num1 & num2)); // AND
    System.out.println(num1 + " | " + num2 + " = " + (num1 | num2)); // OR
    System.out.println(num1 + " ^ " + num2 + " = " + (num1 ^ num2)); // XOR

    // 9. Assignment operators
    System.out.println("\n--- Assignment Operators ---");
    int value = 10;
    value += 5; // value = value + 5
    System.out.println("After += 5: " + value);
    value -= 3; // value = value - 3
    System.out.println("After -= 3: " + value);
    value *= 2; // value = value * 2
    System.out.println("After *= 2: " + value);
  }
}
