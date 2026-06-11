/*
 * Topic: Build Systems & Headers
 * Sample 1: Multi-file Project Structure
 * 
 * This is main.c - demonstrates how to use headers
 * Compile: gcc -Wall -Wextra -o calculator main.c math_ops.c
 * 
 * Demonstrates:
 * - header file inclusion
 * - modular code structure
 */

#include <stdio.h>
// In a real project, this would include "math_ops.h"

// Function declarations (would be in math_ops.h)
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
    int a = 20, b = 5;
    
    printf("=== Multi-file Project Demo ===\n");
    printf("Operations on %d and %d:\n", a, b);
    printf("Add: %d + %d = %d\n", a, b, add(a, b));
    printf("Subtract: %d - %d = %d\n", a, b, subtract(a, b));
    printf("Multiply: %d * %d = %d\n", a, b, multiply(a, b));
    printf("Divide: %d / %d = %d\n", a, b, divide(a, b));
    
    return 0;
}

// Function implementations (would be in math_ops.c)
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    }
    return 0;
}
