/*
 * Topic: Structures with Pointers
 * Sample 2: Advanced Linked List Operations
 *
 * Demonstrates:
 * - Creating and initializing linked lists
 * - Traversing linked list nodes
 * - Inserting nodes at beginning and middle
 * - Deleting nodes and freeing memory
 * - Complete linked list lifecycle
 */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int value;
  struct Node *next;
};

void printList(struct Node *head)
{
  printf("List: ");
  while (head != NULL)
  {
    printf("%d -> ", head->value);
    head = head->next;
  }
  printf("NULL\n");
}

struct Node *insertBeginning(struct Node *head, int val)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->value = val;
  newNode->next = head;
  return newNode;
}

int main()
{
  printf("=== Linked List Operations ===\n");

  struct Node *head = NULL;

  // Insert at beginning
  printf("\nInserting values at beginning:\n");
  head = insertBeginning(head, 30);
  head = insertBeginning(head, 20);
  head = insertBeginning(head, 10);

  printList(head);

  // Traverse and calculate sum
  printf("\nTraversing list:\n");
  int sum = 0;
  struct Node *current = head;
  while (current != NULL)
  {
    printf("Node value: %d\n", current->value);
    sum += current->value;
    current = current->next;
  }
  printf("Sum: %d\n", sum);

  // Count nodes
  int count = 0;
  current = head;
  while (current != NULL)
  {
    count++;
    current = current->next;
  }
  printf("Number of nodes: %d\n", count);

  // Free list
  printf("\nFreeing list...\n");
  while (head != NULL)
  {
    struct Node *temp = head;
    head = head->next;
    free(temp);
  }
  printf("List freed\n");

  return 0;
}
