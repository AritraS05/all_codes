#include <stdio.h>
#include <stdlib.h>

// Definition of a circular linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to connect two circular linked lists
struct Node* connectCircularLists(struct Node* head1, struct Node* head2) {
    if (!head1) return head2; // If the first list is empty
    if (!head2) return head1; // If the second list is empty

    // Find the tail of the first list
    struct Node* tail1 = head1;
    while (tail1->next != head1) {
        tail1 = tail1->next;
    }

    // Find the tail of the second list
    struct Node* tail2 = head2;
    while (tail2->next != head2) {
        tail2 = tail2->next;
    }

    // Connect the two lists
    tail1->next = head2;
    tail2->next = head1;

    return head1; // Return the head of the combined list
}

// Function to print a circular linked list
void printCircularList(struct Node* head) {
    if (!head) return;

    struct Node* current = head;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);
    printf("(back to %d)\n", head->data);
}

// Driver code
int main() {
    // First circular linked list
    struct Node* head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);
    head1->next->next->next = head1;

    // Second circular linked list
    struct Node* head2 = createNode(4);
    head2->next = createNode(5);
    head2->next->next = head2;

    printf("First Circular List: ");
    printCircularList(head1);

    printf("Second Circular List: ");
    printCircularList(head2);

    // Connect the two lists
    struct Node* combinedHead = connectCircularLists(head1, head2);

    printf("Combined Circular List: ");
    printCircularList(combinedHead);

    return 0;
}
