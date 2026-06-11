/*
 * Topic: Pointers - Advanced
 * Sample 1: Pointer Arrays and Memory Debugging
 * 
 * Demonstrates:
 * - array of pointers
 * - storing multiple values
 * - memory safety practices
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("=== Array of Pointers ===\n");
    
    // Array of pointers
    int *ptr_arr[5];  // Array of 5 pointers to int
    int values[] = {10, 20, 30, 40, 50};
    
    printf("Storing addresses in pointer array:\n");
    for (int i = 0; i < 5; i++) {
        ptr_arr[i] = &values[i];
        printf("ptr_arr[%d] = %p (points to values[%d])\n", i, (void*)ptr_arr[i], i);
    }
    
    printf("\nAccessing values through pointer array:\n");
    for (int i = 0; i < 5; i++) {
        printf("*ptr_arr[%d] = %d\n", i, *ptr_arr[i]);
    }
    
    // Dynamically allocated pointer array
    printf("\nDynamic pointer array:\n");
    int **dyn_ptr_arr = (int **)malloc(3 * sizeof(int *));
    
    int a = 100, b = 200, c = 300;
    dyn_ptr_arr[0] = &a;
    dyn_ptr_arr[1] = &b;
    dyn_ptr_arr[2] = &c;
    
    printf("Values: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", *dyn_ptr_arr[i]);
    }
    printf("\n");
    
    free(dyn_ptr_arr);
    printf("Dynamic pointer array freed\n");
    
    return 0;
}
