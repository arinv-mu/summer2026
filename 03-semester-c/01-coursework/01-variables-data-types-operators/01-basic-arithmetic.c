/*
 * Topic: Variables, Data Types, Operators & I/O
 * Sample 1: Basic Arithmetic Operations
 *
 * Demonstrates:
 * - Variable declaration and initialization
 * - Fundamental data types (int, float, double)
 * - Arithmetic operators (+, -, *, /, %)
 * - Input/output with printf() and scanf()
 * - Type casting and precision formatting
 */

#include <stdio.h>

int main()
{
    /* Variable declaration with appropriate data types */
    int num1, num2;
    float result;

    printf("=== Basic Arithmetic Calculator ===\n");

    /* Prompt user for first integer input */
    printf("Enter first number: ");
    if (scanf("%d", &num1) != 1) {
        printf("Error: Invalid input\n");
        return 1;
    }

    /* Prompt user for second integer input */
    printf("Enter second number: ");
    if (scanf("%d", &num2) != 1) {
        printf("Error: Invalid input\n");
        return 1;
    }

    /* Perform and display all arithmetic operations */
    printf("\nResults:\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);

    /* Integer division truncates, so show both integer and float division */
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);

    /* Float division demonstrates type casting and precision */
    result = (float)num1 / num2;
    printf("Float division: %.2f / %.2f = %.2f\n", (float)num1, (float)num2, result);

  return 0;
}
