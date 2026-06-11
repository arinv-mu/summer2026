/*
 * Topic: File I/O
 * Sample 2: Binary File Operations and Struct I/O
 * 
 * Demonstrates:
 * - binary file reading/writing
 * - fwrite() and fread()
 * - writing structs to file
 * - reading structs from file
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Record {
    int id;
    char name[50];
    float salary;
};

int main() {
    printf("=== Binary File I/O with Structs ===\n");
    
    // Writing struct data to binary file
    printf("\nWriting struct data to file:\n");
    FILE *fp = fopen("records.bin", "wb");
    
    if (fp == NULL) {
        printf("Error: Could not create file\n");
        return 1;
    }
    
    struct Record records[3] = {
        {101, "Alice", 50000.50},
        {102, "Bob", 45000.75},
        {103, "Charlie", 55000.00}
    };
    
    // Write array of structs
    size_t written = fwrite(records, sizeof(struct Record), 3, fp);
    printf("Records written: %lu\n", written);
    fclose(fp);
    
    // Reading struct data from binary file
    printf("\nReading struct data from file:\n");
    fp = fopen("records.bin", "rb");
    
    if (fp == NULL) {
        printf("Error: Could not open file\n");
        return 1;
    }
    
    struct Record readRecords[3];
    size_t read = fread(readRecords, sizeof(struct Record), 3, fp);
    printf("Records read: %lu\n", read);
    
    printf("\nRecords from file:\n");
    for (int i = 0; i < read; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n",
               readRecords[i].id, readRecords[i].name, readRecords[i].salary);
    }
    
    fclose(fp);
    
    // File positioning
    printf("\nFile positioning example:\n");
    fp = fopen("records.bin", "rb");
    
    // Seek to second record
    fseek(fp, sizeof(struct Record), SEEK_SET);
    struct Record secondRecord;
    fread(&secondRecord, sizeof(struct Record), 1, fp);
    printf("Second record: %s (%.2f)\n", secondRecord.name, secondRecord.salary);
    
    // Get current position
    long pos = ftell(fp);
    printf("Current file position: %ld bytes\n", pos);
    
    fclose(fp);
    
    return 0;
}
