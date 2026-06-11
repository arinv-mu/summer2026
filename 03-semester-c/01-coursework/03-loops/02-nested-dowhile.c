/*
 * Topic: Loops & Iteration
 * Sample 2: Nested Loops & Do-While
 * 
 * Demonstrates:
 * - nested loops
 * - do-while loop
 * - pattern generation
 */

#include <stdio.h>

int main() {
    int rows;
    
    printf("=== Pattern Generation with Nested Loops ===\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    printf("\nTriangle Pattern:\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\nSquare Pattern:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("# ");
        }
        printf("\n");
    }
    
    // Do-While loop
    printf("\n=== Do-While Loop (Menu) ===\n");
    int choice;
    do {
        printf("\n1. Print\n2. Calculate\n3. Exit\n");
        printf("Enter choice (1-3): ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("You selected Print\n");
        } else if (choice == 2) {
            printf("You selected Calculate\n");
        } else if (choice == 3) {
            printf("Exiting...\n");
        } else {
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 3);
    
    return 0;
}
