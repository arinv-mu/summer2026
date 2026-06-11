/*
 * Topic: Arrays
 * Sample 2: 2D Arrays and Matrix Operations
 *
 * Demonstrates:
 * - 2D array declaration and initialization
 * - Row-major and column-major traversal
 * - Matrix operations: calculating sums and diagonals
 * - Working with multi-dimensional data structures
 */

#include <stdio.h>

int main()
{
  int matrix[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};

  printf("=== 2D Array (Matrix) Operations ===\n");
  printf("\nMatrix:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  // Sum of all elements
  int sum = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      sum += matrix[i][j];
    }
  }
  printf("\nSum of all elements: %d\n", sum);

  // Main diagonal sum
  int diagonal_sum = 0;
  printf("\nMain diagonal: ");
  for (int i = 0; i < 3; i++)
  {
    printf("%d ", matrix[i][i]);
    diagonal_sum += matrix[i][i];
  }
  printf("\nDiagonal sum: %d\n", diagonal_sum);

  // Row sums
  printf("\nRow sums:\n");
  for (int i = 0; i < 3; i++)
  {
    int row_sum = 0;
    for (int j = 0; j < 3; j++)
    {
      row_sum += matrix[i][j];
    }
    printf("Row %d: %d\n", i + 1, row_sum);
  }

  return 0;
}
