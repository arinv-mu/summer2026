/*
 * Topic: Variables, Data Types, Operators & I/O
 * Sample 1: Basic Arithmetic Operations
 * 
 * Demonstrates:
 * - Variable declaration and initialization
 * - Data types (int, float, double)
 * - Arithmetic operators (+, -, *, /, %)
 * - printf() and scanf() for I/O
 */

#include <stdio.h>

int main() {
    // Variable declaration
    int num1, num2;
    float result;
    
    printf("=== Basic Arithmetic Calculator ===\n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Arithmetic operations
    printf("\nResults:\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);
    
    // Division with float
    result = (float)num1 / num2;
    printf("%.2f / %.2f = %.2f\n", (float)num1, (float)num2, result);
    
    return 0;
}
