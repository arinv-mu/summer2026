/*
 * Topic: Conditionals (if/else, switch)
 * Sample 2: Switch-Case Statements
 *
 * Demonstrates:
 * - switch-case statement structure
 * - case labels with break statements
 * - default case for unmatched values
 * - Cleaner alternative to nested if-else
 */

#include <stdio.h>

int main()
{
    int day;

    printf("=== Day of Week Classifier ===\n");
    printf("Enter day number (1-7): ");

    /* Input validation for scanf return value */
    if (scanf("%d", &day) != 1) {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }

    /* Use switch for clean multi-way branching */
    switch (day)
    {
        case 1:
            printf("Monday - Start of work week\n");
            break;  /* break prevents fall-through to next case */
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
        default:  /* handles all unmatched cases */
            printf("Invalid day number. Please enter 1-7.\n");
    }

  return 0;
}
