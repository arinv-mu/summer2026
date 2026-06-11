/*
 * Topic: Variables, Data Types, Operators & I/O
 * Sample 2: Bitwise Operations & Constants
 * 
 * Demonstrates:
 * - Bitwise operators (&, |, ^, ~, <<, >>)
 * - Constants (const keyword)
 * - Different data types (char, unsigned int)
 * - Logical operations
 */

#include <stdio.h>

#define PI 3.14159
#define RADIUS 5

int main() {
    const int MAX_SIZE = 100;
    
    // Bitwise operations
    unsigned int a = 12;  // 1100 in binary
    unsigned int b = 10;  // 1010 in binary
    
    printf("=== Bitwise Operations ===\n");
    printf("a = %u (binary: 1100)\n", a);
    printf("b = %u (binary: 1010)\n\n", b);
    
    printf("a & b (AND)   = %u\n", a & b);
    printf("a | b (OR)    = %u\n", a | b);
    printf("a ^ b (XOR)   = %u\n", a ^ b);
    printf("~a (NOT)      = %u\n", ~a);
    printf("a << 1 (Left shift) = %u\n", a << 1);
    printf("a >> 1 (Right shift) = %u\n", a >> 1);
    
    // Using constants
    printf("\n=== Using Constants ===\n");
    printf("PI = %.5f\n", PI);
    printf("RADIUS = %d\n", RADIUS);
    printf("Circumference = 2 * PI * R = %.2f\n", 2 * PI * RADIUS);
    printf("MAX_SIZE = %d\n", MAX_SIZE);
    
    // Logical operations
    int x = 5, y = 10;
    printf("\n=== Logical Operations ===\n");
    printf("x = %d, y = %d\n", x, y);
    printf("x < y && x > 0: %d\n", (x < y && x > 0));
    printf("x > y || y > 0: %d\n", (x > y || y > 0));
    printf("!(x > y): %d\n", !(x > y));
    
    return 0;
}
