#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Create an alias using typedef
typedef struct Node ListNode;

// Function to insert a new node at the beginning of the list
ListNode* insertAtBeginning(ListNode* head, int value) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    if (newNode == NULL) {
        printf("Memory allocation failed. Unable to insert.\n");
        return head;
    }

    newNode->data = value;
    newNode->next = head;
    return newNode;
}

// Function to print the linked list
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to free the memory used by the linked list
void freeList(ListNode* head) {
    ListNode* current = head;
    while (current != NULL) {
        ListNode* temp = current;
        current = current->next;
        free(temp);
    }
}

int main() {
    ListNode* head = NULL;

    // Insert some elements at the beginning
    head = insertAtBeginning(head, 30);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 10);

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    // Free the memory used by the linked list
    freeList(head);

    return 0;
}
