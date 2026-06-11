/*
 * Topic: Functions - Advanced
 * Sample 1: Recursion - Base Case and Recursive Case
 *
 * Demonstrates:
 * - Recursive function definitions
 * - Base case (termination condition)
 * - Recursive case with self-calls
 * - Call stack and function call tracing
 */

#include <stdio.h>

/* Calculate factorial using recursion (n! = n * (n-1)!) */
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;  /* Base case: factorial(0) = 1, factorial(1) = 1 */
    }
    return n * factorial(n - 1);  /* Recursive case: calls itself with smaller argument */
}

/* Calculate fibonacci number using recursion */
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;  /* Base case: fib(0)=0, fib(1)=1 */
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  /* Recursive case: sum of previous two */
}

int main()
{
  printf("=== Recursion Examples ===\n");

  printf("\nFactorial:\n");
  for (int i = 1; i <= 5; i++)
  {
    printf("factorial(%d) = %d\n", i, factorial(i));
  }

  printf("\nFibonacci Sequence:\n");
  for (int i = 0; i < 8; i++)
  {
    printf("fibonacci(%d) = %d\n", i, fibonacci(i));
  }

  return 0;
}
