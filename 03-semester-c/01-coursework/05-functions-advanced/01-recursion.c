/*
 * Topic: Functions - Advanced
 * Sample 1: Recursion
 * 
 * Demonstrates:
 * - recursive function calls
 * - base case and recursive case
 * - factorial and fibonacci
 */

#include <stdio.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;  // Base case
    }
    return n * factorial(n - 1);  // Recursive case
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("=== Recursion Examples ===\n");
    
    printf("\nFactorial:\n");
    for (int i = 1; i <= 5; i++) {
        printf("factorial(%d) = %d\n", i, factorial(i));
    }
    
    printf("\nFibonacci Sequence:\n");
    for (int i = 0; i < 8; i++) {
        printf("fibonacci(%d) = %d\n", i, fibonacci(i));
    }
    
    return 0;
}
