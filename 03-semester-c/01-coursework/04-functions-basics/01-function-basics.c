/*
 * Topic: Functions - Basics
 * Sample 1: Function Declaration, Definition, and Calling
 *
 * Demonstrates:
 * - Function declarations (prototypes)
 * - Function definitions with parameters and return values
 * - Passing arguments by value
 * - Return type handling and function calls
 */

#include <stdio.h>

// Function declarations (prototypes) enable calling functions before defining them
int add(int a, int b);
float divide(float a, float b);
void printWelcome();

int main()
{
  printWelcome();

  /* Demonstrate function calls with different parameter types */
  int num1 = 15, num2 = 5;
  printf("\nAddition: %d + %d = %d\n", num1, num2, add(num1, num2));

  float x = 20.5, y = 4.5;
  printf("Division: %.1f / %.1f = %.2f\n", x, y, divide(x, y));

  return 0;
}

/* Function definitions come after main (prototypes allow this) */
void printWelcome()
{
  printf("=== Welcome to Functions Demo ===\n");
}

/* Simple function that adds two integers */
int add(int a, int b)
{
  return a + b;
}

/* Function with error handling for division */
float divide(float a, float b)
{
  if (b != 0)
  {
    return a / b;
  }
  else
  {
    printf("Error: Division by zero!\n");
    return 0;
  }
}
