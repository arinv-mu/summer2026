/*
 * Topic: C++ Basics & Modern Syntax
 * Sample 1: Basic Arithmetic Calculator
 *
 * Demonstrates:
 * - std::cout for output
 * - std::cin for input
 * - Primitive data types (int, double)
 * - Arithmetic operators
 * - std::string usage
 * - Modern C++ style I/O
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
  cout << "=== C++ Basic Arithmetic Calculator ===" << endl
       << endl;

  // Declare variables
  double num1, num2;
  char operation;

  // Get first number
  cout << "Enter first number: ";
  cin >> num1;

  // Get second number
  cout << "Enter second number: ";
  cin >> num2;

  // Get operation
  cout << "Enter operation (+, -, *, /): ";
  cin >> operation;

  // Calculate result
  double result = 0;
  bool valid = true;

  switch (operation)
  {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '*':
    result = num1 * num2;
    break;
  case '/':
    if (num2 == 0)
    {
      cout << "Error: Cannot divide by zero!" << endl;
      valid = false;
    }
    else
    {
      result = num1 / num2;
    }
    break;
  default:
    cout << "Error: Invalid operation!" << endl;
    valid = false;
  }

  // Display result with formatting
  if (valid)
  {
    cout << "\n--- Result ---" << endl;
    cout << fixed << setprecision(2);
    cout << num1 << " " << operation << " " << num2 << " = " << result << endl;
  }

  return 0;
}
