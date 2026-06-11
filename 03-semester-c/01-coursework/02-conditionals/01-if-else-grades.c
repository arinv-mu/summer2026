/*
 * Topic: Conditionals
 * Sample 1: If-Else Decision Making
 * 
 * Demonstrates:
 * - if, else if, else statements
 * - Comparison operators
 * - Grade classification
 */

#include <stdio.h>

int main() {
    int marks;
    
    printf("=== Grade Classification System ===\n");
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);
    
    if (marks >= 90) {
        printf("Grade: A (Excellent)\n");
    } else if (marks >= 80) {
        printf("Grade: B (Very Good)\n");
    } else if (marks >= 70) {
        printf("Grade: C (Good)\n");
    } else if (marks >= 60) {
        printf("Grade: D (Satisfactory)\n");
    } else if (marks >= 50) {
        printf("Grade: E (Pass)\n");
    } else {
        printf("Grade: F (Fail)\n");
    }
    
    // Additional check
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter between 0-100.\n");
    }
    
    return 0;
}
