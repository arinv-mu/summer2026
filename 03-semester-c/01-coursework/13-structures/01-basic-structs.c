/*
 * Topic: Structures
 * Sample 1: Basic Struct Definition and Usage
 * 
 * Demonstrates:
 * - struct definition
 * - member access with dot operator
 * - array of structs
 * - typedef
 */

#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float gpa;
};

typedef struct {
    int day;
    int month;
    int year;
} Date;

int main() {
    printf("=== Structures Demo ===\n");
    
    // Create and initialize struct
    struct Student student1;
    student1.id = 101;
    strcpy(student1.name, "Alice");
    student1.gpa = 3.8;
    
    printf("\nStudent 1:\n");
    printf("ID: %d\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("GPA: %.2f\n", student1.gpa);
    
    // Array of structs
    printf("\nArray of Structs:\n");
    struct Student students[3] = {
        {101, "Alice", 3.8},
        {102, "Bob", 3.5},
        {103, "Charlie", 3.9}
    };
    
    for (int i = 0; i < 3; i++) {
        printf("Student %d: %s (GPA: %.1f)\n", 
               students[i].id, students[i].name, students[i].gpa);
    }
    
    // Using typedef
    printf("\nUsing typedef:\n");
    Date birthdate;
    birthdate.day = 15;
    birthdate.month = 6;
    birthdate.year = 2000;
    
    printf("Date: %d/%d/%d\n", birthdate.day, birthdate.month, birthdate.year);
    
    return 0;
}
