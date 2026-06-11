/*
 * Topic: Dynamic Memory
 * Sample 1: malloc() and free()
 * 
 * Demonstrates:
 * - dynamic memory allocation with malloc
 * - free() to deallocate
 * - memory leaks
 * - array allocation
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("=== Dynamic Memory Allocation ===\n");
    
    // Allocate single integer
    printf("\nAllocating single integer:\n");
    int *ptr = (int *)malloc(sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    *ptr = 42;
    printf("Allocated and assigned: *ptr = %d\n", *ptr);
    printf("Memory address: %p\n", (void*)ptr);
    
    free(ptr);
    printf("Freed memory\n");
    ptr = NULL;  // Good practice after freeing
    
    // Allocate array
    printf("\nAllocating array dynamically:\n");
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Initializing array:\n");
    for (int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    free(arr);
    printf("\nArray freed\n");
    arr = NULL;
    
    return 0;
}
