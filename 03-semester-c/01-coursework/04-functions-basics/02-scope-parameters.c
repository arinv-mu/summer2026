/*
 * Topic: Functions - Basics
 * Sample 2: Variable Scope and Function Parameters
 *
 * Demonstrates:
 * - Local variables with function scope
 * - Global variables and their limitations
 * - Pass by value semantics in C
 * - Function parameters create new local scope
 */

#include <stdio.h>

int globalVar = 100; // Global variable

int multiplyByTwo(int num)
{
  int result = num * 2; // Local variable
  return result;
}

void modifyValue(int value)
{
  value = value + 10; // Changes local copy, not original
  printf("Inside function: value = %d\n", value);
}

int main()
{
  int localVar = 50; // Local to main

  printf("=== Scope and Parameters Demo ===\n");
  printf("Global variable: %d\n", globalVar);
  printf("Local variable: %d\n", localVar);

  // Pass by value
  printf("\n=== Pass by Value ===\n");
  int x = 25;
  printf("Before function call: x = %d\n", x);
  modifyValue(x);
  printf("After function call: x = %d (unchanged)\n", x);

  // Function with return value
  printf("\n=== Function with Return ===\n");
  int result = multiplyByTwo(15);
  printf("multiplyByTwo(15) = %d\n", result);

  return 0;
}
