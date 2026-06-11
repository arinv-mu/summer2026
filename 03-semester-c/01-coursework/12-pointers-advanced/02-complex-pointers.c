/*
 * Topic: Pointers - Advanced
 * Sample 2: Complex Pointer Scenarios
 * 
 * Demonstrates:
 * - pointer to pointer operations
 * - complex declarations
 * - memory manipulation
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int **p1, int **p2) {
    int *temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    printf("=== Complex Pointer Scenarios ===\n");
    
    int x = 10, y = 20;
    int *ptr1 = &x;
    int *ptr2 = &y;
    
    printf("Before swap:\n");
    printf("ptr1 points to: %d, ptr2 points to: %d\n", *ptr1, *ptr2);
    
    swap(&ptr1, &ptr2);
    
    printf("After swap:\n");
    printf("ptr1 points to: %d, ptr2 points to: %d\n", *ptr1, *ptr2);
    
    // Pointer chain
    printf("\n=== Pointer Chain ===\n");
    int val = 42;
    int *p1 = &val;
    int **p2 = &p1;
    int ***p3 = &p2;
    
    printf("val = %d\n", val);
    printf("*p1 = %d\n", *p1);
    printf("**p2 = %d\n", **p2);
    printf("***p3 = %d\n", ***p3);
    
    // Modifying through chain
    ***p3 = 100;
    printf("\nAfter ***p3 = 100:\n");
    printf("val = %d\n", val);
    
    return 0;
}
