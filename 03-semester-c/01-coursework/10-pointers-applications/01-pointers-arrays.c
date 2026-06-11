/*
 * Topic: Pointers - Applications
 * Sample 1: Pointers to Arrays and Pass by Reference
 * 
 * Demonstrates:
 * - pointers to arrays
 * - pass by reference
 * - modifying values through pointers
 */

#include <stdio.h>

void increment(int *ptr) {
    (*ptr)++;
}

void doubleArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    printf("=== Pointer Applications ===\n");
    
    // Pass by reference
    printf("\nPass by Reference:\n");
    int x = 5;
    printf("Before: x = %d\n", x);
    increment(&x);
    printf("After increment(&x): x = %d\n", x);
    
    // Modify array through pointer
    printf("\nModifying Array through Pointer:\n");
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    
    printf("Original: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
    
    doubleArray(arr, size);
    printf("After doubleArray: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
    
    // Pointer to array
    printf("\nPointer to Array:\n");
    int (*arr_ptr)[5] = &arr;
    printf("(*arr_ptr)[0] = %d\n", (*arr_ptr)[0]);
    printf("(*arr_ptr)[4] = %d\n", (*arr_ptr)[4]);
    
    return 0;
}
