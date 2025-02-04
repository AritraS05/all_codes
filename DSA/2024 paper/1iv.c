#include <stdio.h>
#include <stdlib.h>

// Definition of a singly linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to get the length of a linked list
int getLength(struct Node* head) {
    int length = 0;
    while (head != NULL) {
        length++;
        head = head->next;
    }
    return length;
}

// Function to find the intersection point of two linked lists
struct Node* findIntersection(struct Node* head1, struct Node* head2) {
    int len1 = getLength(head1);
    int len2 = getLength(head2);

    int diff = abs(len1 - len2);

    // Adjust the starting point for the longer list
    struct Node* longer = len1 > len2 ? head1 : head2;
    struct Node* shorter = len1 > len2 ? head2 : head1;

    for (int i = 0; i < diff; i++) {
        longer = longer->next;
    }

    // Traverse both lists together to find the intersection point
    while (longer != NULL && shorter != NULL) {
        if (longer == shorter) {
            return longer; // Intersection point found
        }
        longer = longer->next;
        shorter = shorter->next;
    }

    return NULL; // No intersection point
}

// Utility function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Driver code
int main() {
    // Creating two linked lists with an intersection
    struct Node* head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);
    head1->next->next->next = createNode(4);
    head1->next->next->next->next = createNode(5);

    struct Node* head2 = createNode(6);
    head2->next = createNode(7);
    head2->next->next = head1->next->next; // Creating an intersection at node with value 3

    struct Node* intersection = findIntersection(head1, head2);

    if (intersection) {
        printf("The intersection point is at node with value: %d\n", intersection->data);
    } else {
        printf("There is no intersection point.\n");
    }

    return 0;
}
