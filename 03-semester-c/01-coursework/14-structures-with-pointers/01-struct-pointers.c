/*
 * Topic: Structures with Pointers
 * Sample 1: Struct Pointers and Linked Lists
 * 
 * Demonstrates:
 * - pointer to struct
 * - arrow operator (->)
 * - basic linked list node
 * - dynamic struct allocation
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    printf("=== Struct Pointers and Linked Lists ===\n");
    
    // Struct pointer
    printf("\nStruct Pointer:\n");
    struct Node node1 = {10, NULL};
    struct Node *ptr = &node1;
    
    printf("Using dot operator: node1.data = %d\n", node1.data);
    printf("Using arrow operator: ptr->data = %d\n", ptr->data);
    printf("Using pointer dereferencing: (*ptr).data = %d\n", (*ptr).data);
    
    // Dynamically allocated struct
    printf("\nDynamically Allocated Struct:\n");
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 20;
    newNode->next = NULL;
    
    printf("newNode->data = %d\n", newNode->data);
    printf("newNode->next = %p\n", (void*)newNode->next);
    
    // Simple linked list
    printf("\nSimple Linked List:\n");
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 100;
    head->next = (struct Node *)malloc(sizeof(struct Node));
    head->next->data = 200;
    head->next->next = NULL;
    
    printf("Head -> Node1 -> Node2\n");
    struct Node *current = head;
    while (current != NULL) {
        printf("Data: %d\n", current->data);
        current = current->next;
    }
    
    // Free allocated memory
    free(head->next);
    free(head);
    free(newNode);
    printf("\nMemory freed\n");
    
    return 0;
}
