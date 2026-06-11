/*
 * Topic: Structures
 * Sample 2: Nested Structs and Unions
 * 
 * Demonstrates:
 * - nested structures
 * - struct within struct
 * - union type
 * - memory representation
 */

#include <stdio.h>
#include <string.h>

struct Address {
    char street[50];
    char city[30];
    int zipcode;
};

struct Person {
    char name[50];
    int age;
    struct Address address;
};

union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    printf("=== Nested Structs and Unions ===\n");
    
    // Nested struct
    printf("\nNested Struct Example:\n");
    struct Person person;
    strcpy(person.name, "John Doe");
    person.age = 30;
    strcpy(person.address.street, "123 Main St");
    strcpy(person.address.city, "New York");
    person.address.zipcode = 10001;
    
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Address: %s, %s %d\n", 
           person.address.street, person.address.city, person.address.zipcode);
    
    // Union
    printf("\nUnion Example:\n");
    union Data data;
    
    printf("Size of union Data: %lu bytes\n", sizeof(union Data));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    
    data.intValue = 42;
    printf("data.intValue = 42\n");
    printf("data.intValue: %d\n", data.intValue);
    printf("data.floatValue: %.2f\n", data.floatValue);
    
    data.floatValue = 3.14;
    printf("\ndata.floatValue = 3.14\n");
    printf("data.intValue: %d\n", data.intValue);
    printf("data.floatValue: %.2f\n", data.floatValue);
    
    return 0;
}
