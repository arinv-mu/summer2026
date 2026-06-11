/*
 * Topic: Loops & Iteration
 * Sample 1: For and While Loops
 * 
 * Demonstrates:
 * - for loop
 * - while loop
 * - loop control (break, continue)
 * - multiplication table
 */

#include <stdio.h>

int main() {
    int num, i;
    
    printf("=== Multiplication Table Generator ===\n");
    printf("Enter number for multiplication table: ");
    scanf("%d", &num);
    
    printf("\nMultiplication table of %d (using for loop):\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    // While loop example - Sum of numbers
    printf("\n=== Sum of numbers (1 to 5) using while loop ===\n");
    int sum = 0;
    int count = 1;
    
    while (count <= 5) {
        sum += count;
        printf("Adding %d, sum = %d\n", count, sum);
        count++;
    }
    printf("Total sum: %d\n", sum);
    
    // Break and continue demonstration
    printf("\n=== Numbers 1 to 10 (skip 5, stop at 8) ===\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Skipping %d\n", i);
            continue;
        }
        if (i == 8) {
            printf("Stopping at %d\n", i);
            break;
        }
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}
