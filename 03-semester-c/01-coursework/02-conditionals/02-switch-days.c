/*
 * Topic: Conditionals
 * Sample 2: Switch Statement
 * 
 * Demonstrates:
 * - switch-case statements
 * - break and default
 * - Day of week classification
 */

#include <stdio.h>

int main() {
    int day;
    
    printf("=== Day of Week Classifier ===\n");
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    
    switch(day) {
        case 1:
            printf("Monday - Start of work week\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday - Mid-week\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday - Weekend approaching!\n");
            break;
        case 6:
            printf("Saturday - Weekend!\n");
            break;
        case 7:
            printf("Sunday - Rest day\n");
            break;
        default:
            printf("Invalid day number. Please enter 1-7.\n");
    }
    
    return 0;
}
