/*
 * Topic: Pointers - Fundamentals
 * Sample 1: Pointer Basics and Dereferencing
 *
 * Demonstrates:
 * - pointer declaration
 * - address-of operator (&)
 * - dereference operator (*)
 * - pointer arithmetic
 */

#include <stdio.h>

int main()
{
  int x = 10;
  int y = 20;
  int *ptr; // Pointer to int

  printf("=== Pointer Fundamentals ===\n");
  printf("x = %d, y = %d\n", x, y);

  // Address and pointer
  printf("\nAddresses and pointers:\n");
  printf("Address of x: %p\n", (void *)&x);
  printf("Address of y: %p\n", (void *)&y);

  ptr = &x;
  printf("\nptr = &x;\n");
  printf("ptr points to: %p\n", (void *)ptr);
  printf("Value at ptr (*ptr): %d\n", *ptr);

  // Changing pointer target
  printf("\nChanging pointer target:\n");
  ptr = &y;
  printf("ptr = &y;\n");
  printf("ptr now points to: %p\n", (void *)ptr);
  printf("Value at ptr (*ptr): %d\n", *ptr);

  // Modifying value through pointer
  printf("\nModifying value through pointer:\n");
  *ptr = 50;
  printf("*ptr = 50;\n");
  printf("y is now: %d\n", y);

  // Pointer arithmetic
  printf("\nPointer arithmetic:\n");
  int arr[] = {10, 20, 30, 40, 50};
  int *arr_ptr = arr;
  printf("Array: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  printf("arr_ptr[0] = %d, arr_ptr[1] = %d, arr_ptr[2] = %d\n",
         arr_ptr[0], arr_ptr[1], arr_ptr[2]);

  return 0;
}
