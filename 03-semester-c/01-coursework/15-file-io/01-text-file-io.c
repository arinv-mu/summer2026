/*
 * Topic: File I/O
 * Sample 1: Reading and Writing Text Files
 *
 * Demonstrates:
 * - Opening and closing files with fopen() and fclose()
 * - Writing formatted data with fprintf()
 * - Reading formatted data with fscanf()
 * - File error handling and validation
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("=== Text File I/O ===\n");

  // Writing to file
  printf("\nWriting to file:\n");
  FILE *fp = fopen("data.txt", "w");

  if (fp == NULL)
  {
    printf("Error: Could not open file for writing\n");
    return 1;
  }

  fprintf(fp, "Learning C Programming\n");
  fprintf(fp, "File I/O Operations\n");
  fprintf(fp, "Line 3: Value = 42\n");

  fclose(fp);
  printf("File written successfully\n");

  // Reading from file
  printf("\nReading from file:\n");
  fp = fopen("data.txt", "r");

  if (fp == NULL)
  {
    printf("Error: Could not open file for reading\n");
    return 1;
  }

  char line[100];
  int lineNum = 1;
  while (fgets(line, sizeof(line), fp) != NULL)
  {
    printf("Line %d: %s", lineNum, line);
    lineNum++;
  }

  fclose(fp);
  printf("\nFile read successfully\n");

  // Appending to file
  printf("\nAppending to file:\n");
  fp = fopen("data.txt", "a");
  fprintf(fp, "Additional line: Appended content\n");
  fclose(fp);
  printf("Content appended\n");

  return 0;
}
