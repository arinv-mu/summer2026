/*
 * Topic: Functions - Advanced
 * Sample 2: Function Pointers
 * 
 * Demonstrates:
 * - function pointers
 * - callback functions
 * - higher-order functions
 */

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

// Function that takes a function pointer as parameter
int calculate(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

int main() {
    printf("=== Function Pointers Demo ===\n");
    
    int x = 10, y = 3;
    
    // Function pointer declarations
    int (*funcPtr)(int, int);
    
    printf("\nUsing function pointers:\n");
    
    funcPtr = add;
    printf("%d + %d = %d\n", x, y, funcPtr(x, y));
    
    funcPtr = subtract;
    printf("%d - %d = %d\n", x, y, funcPtr(x, y));
    
    funcPtr = multiply;
    printf("%d * %d = %d\n", x, y, funcPtr(x, y));
    
    // Using function pointer as callback
    printf("\nUsing callback pattern:\n");
    printf("calculate(%d, %d, add) = %d\n", x, y, calculate(x, y, add));
    printf("calculate(%d, %d, subtract) = %d\n", x, y, calculate(x, y, subtract));
    printf("calculate(%d, %d, multiply) = %d\n", x, y, calculate(x, y, multiply));
    
    return 0;
}
