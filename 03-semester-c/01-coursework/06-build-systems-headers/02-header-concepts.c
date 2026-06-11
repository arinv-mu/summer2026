/*
 * Topic: Build Systems and Headers
 * Sample 2: Header File Concepts and Best Practices
 *
 * This demonstrates the utils.h header file concepts:
 * - Include guards to prevent multiple inclusion
 * - Function prototypes for forward declaration
 * - Macro definitions and constants
 * - Safe header file design patterns
 */

#include <stdio.h>

// Header file content (normally in utils.h)
#ifndef UTILS_H
#define UTILS_H

#define MAX_SIZE 100
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int square(int x);
int cube(int x);

#endif

// Function implementations
int square(int x)
{
  return x * x;
}

int cube(int x)
{
  return x * x * x;
}

int main()
{
  printf("=== Header File Concepts ===\n");
  printf("MAX_SIZE = %d\n", MAX_SIZE);

  int a = 10, b = 20;
  printf("MIN(%d, %d) = %d\n", a, b, MIN(a, b));
  printf("MAX(%d, %d) = %d\n", a, b, MAX(a, b));

  printf("\nsquare(5) = %d\n", square(5));
  printf("cube(5) = %d\n", cube(5));

  return 0;
}
