#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data);
void insertNode(Node** head, int data);
void deleteNode(Node** head, int key);
void displayList(Node* head);

int main() {
    Node* head = NULL;
    
    insertNode(&head, 10);
    insertNode(&head, 20);
    insertNode(&head, 30);
    insertNode(&head, 40);
    
    printf("Circular Linked List after insertion:\n");
    displayList(head);
    
    deleteNode(&head, 20);
    printf("\nCircular Linked List after deleting 20:\n");
    displayList(head);
    
    deleteNode(&head, 10);
    printf("\nCircular Linked List after deleting 10:\n");
    displayList(head);
    
    return 0;
}

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = newNode; 
    return newNode;
}

void insertNode(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    newNode->next = *head; 
}

void deleteNode(Node** head, int key) {
    if (*head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    
    Node *curr = *head, *prev = NULL;

    if (curr->data == key) {
        if (curr->next == *head) {
            free(curr);
            *head = NULL;
            return;
        }
        
        while (curr->next != *head) {
            curr = curr->next;
        }
        curr->next = (*head)->next;
        free(*head);
        *head = curr->next;
        return;
    }

    prev = *head;
    curr = (*head)->next;
    while (curr != *head && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }

    if (curr->data == key) {
        prev->next = curr->next;
        free(curr);
    } else {
        printf("Node with value %d not found.\n", key);
    }
}

void displayList(Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(head)\n");
}
