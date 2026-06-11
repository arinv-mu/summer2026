/*
 * Topic: Pointers - Applications
 * Sample 2: Pointers to Pointers and Complex Pointer Scenarios
 *
 * Demonstrates:
 * - Double pointers (pointer to pointer) for indirection
 * - Pointer to pointer usage patterns
 * - Array of pointers traversal and manipulation
 * - Complex pointer chains for advanced data structures
 */

#include <stdio.h>

int main()
{
  printf("=== Pointers to Pointers ===\n");

  int x = 100;
  int *ptr1 = &x;     // Pointer to int
  int **ptr2 = &ptr1; // Pointer to pointer to int

  printf("\nPointer to Pointer (pp):\n");
  printf("x = %d\n", x);
  printf("ptr1 = %p (address of x)\n", (void *)ptr1);
  printf("ptr2 = %p (address of ptr1)\n", (void *)ptr2);

  printf("\nAccessing x through ptr2:\n");
  printf("*ptr2 = %p (value of ptr1)\n", (void *)*ptr2);
  printf("**ptr2 = %d (value of x)\n", **ptr2);

  // Modifying through pointer to pointer
  printf("\nModifying through pointer to pointer:\n");
  **ptr2 = 200;
  printf("**ptr2 = 200;\n");
  printf("x is now: %d\n", x);

  // Pointer arithmetic with arrays
  printf("\nPointer Arithmetic:\n");
  int arr[] = {10, 20, 30, 40, 50};
  int *p = arr;

  printf("Array: ");
  for (int i = 0; i < 5; i++)
    printf("%d ", arr[i]);
  printf("\n");

  printf("Using pointer arithmetic:\n");
  printf("p points to: %d\n", *p);
  printf("p+1 points to: %d\n", *(p + 1));
  printf("p+2 points to: %d\n", *(p + 2));
  printf("p[3] = %d\n", p[3]);
  printf("p[4] = %d\n", p[4]);

  return 0;
}
