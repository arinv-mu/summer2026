/*
 * Topic: Functions & Pointers/References
 * Sample 1: Functions and Parameter Passing
 *
 * Demonstrates:
 * - Function declaration and definition
 * - Pass-by-value
 * - Pass-by-reference
 * - Function overloading
 * - Return values
 * - Scope and lifetime
 */

#include <iostream>
#include <string>

using namespace std;

// Forward declaration
void displayHeader(const string &title);
int add(int a, int b);
double add(double a, double b);
void swap(int &a, int &b);
int factorial(int n);

int main()
{
  displayHeader("Functions and Parameter Passing");

  // 1. Simple function call
  cout << "\n--- Function with Return Value ---" << endl;
  int result1 = add(10, 20);
  cout << "add(10, 20) = " << result1 << endl;

  // 2. Function overloading
  cout << "\n--- Function Overloading ---" << endl;
  double result2 = add(3.5, 2.5);
  cout << "add(3.5, 2.5) = " << result2 << endl;

  // 3. Pass-by-value (creates copy)
  cout << "\n--- Pass-by-Value ---" << endl;
  int x = 10;
  int y = 20;
  cout << "Before function: x = " << x << ", y = " << y << endl;

  // This would require a modifyByValue function
  // Showing the difference with reference instead

  // 4. Pass-by-reference (modifies original)
  cout << "\n--- Pass-by-Reference (Swap) ---" << endl;
  cout << "Before swap: x = " << x << ", y = " << y << endl;
  swap(x, y);
  cout << "After swap: x = " << x << ", y = " << y << endl;

  // 5. Recursive function
  cout << "\n--- Recursive Function (Factorial) ---" << endl;
  cout << "factorial(5) = " << factorial(5) << endl;
  cout << "factorial(6) = " << factorial(6) << endl;

  // 6. Function with const reference
  cout << "\n--- Function with Const Reference ---" << endl;
  string message = "Modern C++";
  displayHeader(message);

  return 0;
}

// Function implementations

void displayHeader(const string &title)
{
  cout << "\n=== " << title << " ===" << endl;
}

// Function: Add two integers
int add(int a, int b)
{
  return a + b;
}

// Function: Add two doubles (overload)
double add(double a, double b)
{
  return a + b;
}

// Function: Swap two integers by reference
void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

// Function: Calculate factorial (recursive)
int factorial(int n)
{
  if (n <= 1)
  {
    return 1;
  }
  return n * factorial(n - 1);
}
