/*
 * Topic: Strings
 * Sample 1: String Manipulation Functions
 * 
 * Demonstrates:
 * - string declaration and initialization
 * - string library functions
 * - strlen, strcpy, strcmp, strcat
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    
    printf("=== String Operations ===\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    
    // String length
    printf("\nString lengths:\n");
    printf("strlen(str1) = %lu\n", strlen(str1));
    printf("strlen(str2) = %lu\n", strlen(str2));
    
    // String copy
    printf("\nString copy:\n");
    strcpy(str3, str1);
    printf("strcpy(str3, str1): %s\n", str3);
    
    // String comparison
    printf("\nString comparison:\n");
    printf("strcmp('Hello', 'Hello') = %d (0 means equal)\n", strcmp(str1, "Hello"));
    printf("strcmp('Hello', 'World') = %d\n", strcmp(str1, str2));
    
    // String concatenation
    printf("\nString concatenation:\n");
    char combined[100];
    strcpy(combined, str1);
    strcat(combined, " ");
    strcat(combined, str2);
    printf("'%s' + ' ' + '%s' = '%s'\n", str1, str2, combined);
    
    return 0;
}
