#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int lookup(int x,Node* head){
    if(head == NULL){
        return 0;
    }
    else if(x == head->data){
        return 1;
    }
    else{
        return lookup(x,head->next);
    }
}

int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    head->data = 1;
    head->next = NULL;

    Node* curr = head;
    for (int i = 2; i <= 5; i++) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = i;
        newNode->next = NULL;
        curr->next = newNode;
        curr = newNode;
    }

    for (Node* curr = head; curr != NULL; curr = curr->next) {
        printf("%d -> ", curr->data);
    }
    printf("NULL\n");


//delete-->
   int remove  = 2;
   Node* prev = head;
   for(Node* curr = head; curr != NULL; curr = curr->next) {
        if(curr->data == remove){
            prev->next = curr->next;
            break;
        }
   }
   for (Node* curr = head; curr != NULL; curr = curr->next) {
        printf("%d -> ", curr->data);
    }
    printf("NULL\n");


    // insert -->
   int insert  = 3;
   Node* prev2 = head;
   Node* newptr = (Node*)malloc(sizeof(Node));
   newptr->data = 23;
    newptr->next = NULL;
   for(Node* curr = head; curr != NULL; curr = curr->next) {
        if(curr->data == insert){
            prev2->next = newptr;
            newptr->next = curr;
        }
   }

    for (Node* curr = head; curr != NULL; curr = curr->next) {
        printf("%d -> ", curr->data);
    }
    printf("NULL\n");
    

    //lookup-->
    int found = 0;
    found = lookup(4,head);
    if(found == 1){
        printf("found ya!\n");
    }
    return 0;
}
