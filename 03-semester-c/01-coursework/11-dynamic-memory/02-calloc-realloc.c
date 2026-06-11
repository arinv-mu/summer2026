/*
 * Topic: Dynamic Memory
 * Sample 2: calloc() and realloc()
 * 
 * Demonstrates:
 * - calloc() for zero-initialized allocation
 * - realloc() for resizing allocation
 * - comparing malloc and calloc
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("=== calloc() and realloc() ===\n");
    
    // calloc - allocates and initializes to zero
    printf("\ncalloc() - Allocates and zeros memory:\n");
    int *arr1 = (int *)calloc(5, sizeof(int));
    
    if (arr1 == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("After calloc (should be zeros):\n");
    for (int i = 0; i < 5; i++) {
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }
    
    // Initialize with values
    printf("\nAfter initialization:\n");
    for (int i = 0; i < 5; i++) {
        arr1[i] = (i + 1) * 5;
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }
    
    // realloc - resize allocation
    printf("\nUsing realloc() to increase size:\n");
    int *arr2 = (int *)realloc(arr1, 10 * sizeof(int));
    
    if (arr2 == NULL) {
        printf("Reallocation failed!\n");
        free(arr1);
        return 1;
    }
    
    arr1 = arr2;  // Update pointer
    printf("After realloc to 10 elements:\n");
    printf("First 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }
    
    printf("New elements (5-9):\n");
    for (int i = 5; i < 10; i++) {
        arr1[i] = (i + 1) * 5;
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }
    
    free(arr1);
    printf("\nMemory freed\n");
    
    return 0;
}
