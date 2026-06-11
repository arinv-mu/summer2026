/*
 * Topic: Pointers - Fundamentals
 * Sample 2: NULL Pointers and Generic Pointer Types
 *
 * Demonstrates:
 * - NULL pointer concept and safe checking
 * - void pointers (generic pointers)
 * - Pointer type safety and casting
 * - Size and representation of different pointer types
 */

#include <stdio.h>

int main()
{
  printf("=== NULL Pointers and Pointer Types ===\n");

  // NULL pointer
  int *ptr = NULL;
  printf("\nNULL Pointer:\n");
  printf("ptr = NULL; (initial state)\n");
  printf("Is ptr NULL? %s\n", (ptr == NULL) ? "Yes" : "No");

  int x = 42;
  ptr = &x;
  printf("After ptr = &x:\n");
  printf("Is ptr NULL? %s\n", (ptr == NULL) ? "Yes" : "No");
  printf("*ptr = %d\n", *ptr);

  // Different pointer types
  printf("\nDifferent pointer types:\n");
  int int_var = 10;
  float float_var = 3.14;
  char char_var = 'A';

  int *int_ptr = &int_var;
  float *float_ptr = &float_var;
  char *char_ptr = &char_var;

  printf("int pointer size: %lu bytes\n", sizeof(int_ptr));
  printf("float pointer size: %lu bytes\n", sizeof(float_ptr));
  printf("char pointer size: %lu bytes\n", sizeof(char_ptr));

  // All pointers are usually same size
  printf("\nAll pointer types have same size on this system\n");

  // Void pointer (generic pointer)
  printf("\nVoid Pointer:\n");
  void *void_ptr;
  void_ptr = &int_var;
  printf("void_ptr = &int_var\n");
  printf("Dereferencing requires casting: %d\n", *(int *)void_ptr);

  return 0;
}
