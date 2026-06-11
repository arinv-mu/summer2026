/*
 * Topic: Arrays
 * Sample 1: 1D Arrays and Searching
 * 
 * Demonstrates:
 * - array declaration and initialization
 * - array indexing
 * - linear search
 * - finding min/max
 */

#include <stdio.h>

int main() {
    int numbers[] = {45, 23, 78, 12, 56, 34, 89, 5};
    int size = 8;
    int search_val = 56;
    
    printf("=== Array Operations ===\n");
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
    
    // Find minimum and maximum
    int min = numbers[0], max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min) min = numbers[i];
        if (numbers[i] > max) max = numbers[i];
    }
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    
    // Linear search
    printf("\nSearching for %d:\n", search_val);
    for (int i = 0; i < size; i++) {
        if (numbers[i] == search_val) {
            printf("Found at index %d\n", i);
            break;
        }
    }
    
    // Sum and average
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / size);
    
    return 0;
}
