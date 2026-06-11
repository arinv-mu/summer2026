/*
 * Topic: Conditionals (if/else, switch)
 * Sample 1: If-Else Decision Making
 *
 * Demonstrates:
 * - if, else if, else conditional statements
 * - Comparison operators for numeric ranges
 * - Multi-way branching with nested conditions
 * - Grade classification based on marks
 */

#include <stdio.h>

int main()
{
  int marks;

  printf("=== Grade Classification System ===\n");
  printf("Enter marks (0-100): ");

  /* Input validation for scanf return value */
  if (scanf("%d", &marks) != 1)
  {
    printf("Error: Invalid input. Please enter an integer.\n");
    return 1;
  }

  /* Grade classification using multi-way if-else branching */
  if (marks >= 90)
  {
    printf("Grade: A (Excellent)\n");
  }
  else if (marks >= 80)
  {
    printf("Grade: B (Very Good)\n");
  }
  else if (marks >= 70)
  {
    printf("Grade: C (Good)\n");
  }
  else if (marks >= 60)
  {
    printf("Grade: D (Satisfactory)\n");
  }
  else if (marks >= 50)
  {
    printf("Grade: E (Pass)\n");
  }
  else
  {
    printf("Grade: F (Fail)\n");
  }

  /* Validation: marks must be within valid range */
  if (marks < 0 || marks > 100)
  {
    printf("Warning: Invalid marks! Expected 0-100, got %d\n", marks);
  }

  return 0;
}
