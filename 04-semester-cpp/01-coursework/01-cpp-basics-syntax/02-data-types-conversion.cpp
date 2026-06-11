/*
 * Topic: C++ Basics & Modern Syntax
 * Sample 2: Data Types and Type Conversion
 *
 * Demonstrates:
 * - All fundamental data types (int, float, double, bool, char)
 * - Type conversion and casting
 * - Numeric limits
 * - String operations
 * - Input validation
 * - std::endl and formatting
 */

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  cout << "=== C++ Data Types and Type Conversion ===" << endl
       << endl;

  // 1. Primitive data types
  cout << "--- Primitive Data Types ---" << endl;
  int intValue = 42;
  float floatValue = 3.14f; // Note: 'f' suffix for float
  double doubleValue = 3.14159265358979;
  bool boolValue = true;
  char charValue = 'A';

  cout << "int: " << intValue << endl;
  cout << "float: " << floatValue << endl;
  cout << "double: " << doubleValue << endl;
  cout << "bool: " << boolValue << endl;
  cout << "char: " << charValue << endl;

  // 2. String type
  cout << "\n--- String Type ---" << endl;
  string name = "Alice";
  string greeting = "Hello, " + name + "!";
  cout << greeting << endl;
  cout << "String length: " << name.length() << endl;

  // 3. Numeric limits
  cout << "\n--- Numeric Limits ---" << endl;
  cout << "Int range: " << numeric_limits<int>::min() << " to "
       << numeric_limits<int>::max() << endl;
  cout << "Float range: " << numeric_limits<float>::min() << " to "
       << numeric_limits<float>::max() << endl;
  cout << "Double precision: " << numeric_limits<double>::digits10 << " digits" << endl;

  // 4. Implicit type conversion
  cout << "\n--- Implicit Type Conversion ---" << endl;
  int a = 10;
  int b = 3;
  double implicitResult = a / (double)b; // Explicit cast
  cout << "10 / 3.0 = " << implicitResult << endl;

  // 5. Explicit type casting
  cout << "\n--- Explicit Type Casting ---" << endl;
  double pi = 3.14159;
  int piAsInt = static_cast<int>(pi);
  cout << "static_cast<int>(3.14159) = " << piAsInt << endl;

  // Old C-style cast (less preferred in modern C++)
  int piCStyle = (int)pi;
  cout << "C-style cast (int)3.14159 = " << piCStyle << endl;

  // 6. Comparison operators
  cout << "\n--- Comparison Operators ---" << endl;
  int x = 15;
  int y = 8;

  cout << x << " == " << y << " : " << (x == y) << endl;
  cout << x << " != " << y << " : " << (x != y) << endl;
  cout << x << " > " << y << " : " << (x > y) << endl;
  cout << x << " < " << y << " : " << (x < y) << endl;
  cout << x << " >= " << y << " : " << (x >= y) << endl;
  cout << x << " <= " << y << " : " << (x <= y) << endl;

  // 7. Logical operators
  cout << "\n--- Logical Operators ---" << endl;
  bool condition1 = (x > 10);
  bool condition2 = (y < 10);

  cout << "condition1 (x > 10): " << condition1 << endl;
  cout << "condition2 (y < 10): " << condition2 << endl;
  cout << "condition1 && condition2: " << (condition1 && condition2) << endl;
  cout << "condition1 || condition2: " << (condition1 || condition2) << endl;
  cout << "!condition1: " << (!condition1) << endl;

  // 8. Bitwise operators
  cout << "\n--- Bitwise Operators ---" << endl;
  int num1 = 5; // binary: 0101
  int num2 = 3; // binary: 0011

  cout << num1 << " & " << num2 << " = " << (num1 & num2) << endl; // AND
  cout << num1 << " | " << num2 << " = " << (num1 | num2) << endl; // OR
  cout << num1 << " ^ " << num2 << " = " << (num1 ^ num2) << endl; // XOR

  // 9. Increment and decrement
  cout << "\n--- Increment/Decrement ---" << endl;
  int counter = 10;
  cout << "counter = " << counter << endl;
  cout << "++counter = " << ++counter << " (pre-increment)" << endl;
  cout << "counter++ = " << counter++ << " (post-increment)" << endl;
  cout << "counter = " << counter << endl;

  // 10. Math functions
  cout << "\n--- Math Functions ---" << endl;
  cout << "sqrt(16) = " << sqrt(16) << endl;
  cout << "pow(2, 3) = " << pow(2, 3) << endl;
  cout << "abs(-5) = " << abs(-5) << endl;
  cout << "floor(3.7) = " << floor(3.7) << endl;
  cout << "ceil(3.2) = " << ceil(3.2) << endl;

  return 0;
}
