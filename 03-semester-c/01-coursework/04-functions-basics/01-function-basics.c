/*
 * Topic: Functions - Basics
 * Sample 1: Function Definition and Calling
 * 
 * Demonstrates:
 * - function declaration
 * - function definition
 * - parameters and return values
 * - function calls
 */

#include <stdio.h>

// Function declarations (prototypes)
int add(int a, int b);
float divide(float a, float b);
void printWelcome();

int main() {
    printWelcome();
    
    int num1 = 15, num2 = 5;
    printf("\nAddition: %d + %d = %d\n", num1, num2, add(num1, num2));
    
    float x = 20.5, y = 4.5;
    printf("Division: %.1f / %.1f = %.2f\n", x, y, divide(x, y));
    
    return 0;
}

// Function definitions
void printWelcome() {
    printf("=== Welcome to Functions Demo ===\n");
}

int add(int a, int b) {
    return a + b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}
