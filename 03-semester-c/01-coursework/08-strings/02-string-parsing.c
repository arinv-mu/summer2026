/*
 * Topic: Strings
 * Sample 2: String Parsing and Character Searching
 *
 * Demonstrates:
 * - Character array manipulation and iteration
 * - strchr() to find a character in a string
 * - strstr() to find a substring
 * - Character-by-character parsing and analysis
 */

#include <stdio.h>
#include <string.h>

int main()
{
  char text[] = "The quick brown fox jumps over the lazy dog";

  printf("=== String Parsing and Searching ===\n");
  printf("Text: %s\n\n", text);

  // Find character
  char *ptr = strchr(text, 'q');
  if (ptr != NULL)
  {
    printf("Found 'q' at position: %ld\n", ptr - text);
  }

  // Find substring
  ptr = strstr(text, "fox");
  if (ptr != NULL)
  {
    printf("Found 'fox' at position: %ld\n", ptr - text);
  }

  // Count vowels
  printf("\nVowel counting:\n");
  int vowels = 0;
  for (int i = 0; text[i] != '\0'; i++)
  {
    char c = text[i];
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
      vowels++;
    }
  }
  printf("Total vowels: %d\n", vowels);

  // Convert case (demonstration)
  printf("\nManual string operations:\n");
  char str[] = "Hello";
  printf("Original: %s\n", str);
  printf("Characters: ");
  for (int i = 0; str[i] != '\0'; i++)
  {
    printf("%c ", str[i]);
  }
  printf("\n");

  return 0;
}
