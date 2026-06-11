/*
 * Topic: Arrays
 * Sample 1: 1D Arrays - Declaration, Access, and Searching
 *
 * Demonstrates:
 * - Array declaration and initialization
 * - Array element access via indexing
 * - Linear search through array elements
 * - Finding minimum and maximum values
 * - Calculating sum and average of array elements
 */

#include <stdio.h>

int main()
{
  /* Declare and initialize array with sample data */
  int numbers[] = {45, 23, 78, 12, 56, 34, 89, 5};
  int size = 8;
  int search_val = 56;

  printf("=== Array Operations ===\n");

  /* Display all array elements */
  printf("Array: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", numbers[i]);
  }
  printf("\n\n");

  /* Find minimum and maximum values in array */
  int min = numbers[0], max = numbers[0];
  for (int i = 1; i < size; i++)
  {
    if (numbers[i] < min)
      min = numbers[i];
    if (numbers[i] > max)
      max = numbers[i];
  }
  printf("Minimum: %d\n", min);
  printf("Maximum: %d\n", max);

  /* Linear search: iterate through array until value found */
  printf("\nSearching for %d:\n", search_val);
  int found = 0;
  for (int i = 0; i < size; i++)
  {
    if (numbers[i] == search_val)
    {
      printf("Found at index %d\n", i);
      found = 1;
      break;
    }
  }
  if (!found)
    printf("Value not found in array\n");

  /* Calculate sum and average of array elements */
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += numbers[i];
  }
  printf("\nSum: %d\n", sum);
  printf("Average: %.2f\n", (float)sum / size);

  return 0;
}
