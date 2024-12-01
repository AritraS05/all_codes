#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

int main(){
    Node* head = (Node*)malloc(sizeof(Node));

    head->data = 1;
    head->next = NULL;
    head->prev = NULL;

    Node* curr = head;
    for (int i = 2; i <= 5; i++) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = i;
        newNode->next = NULL;
        newNode->prev = curr;
        curr->next = newNode;
        curr = newNode;
    }
    //insert -->
    int insert = 3;
    Node* newptr = (Node*)malloc(sizeof(Node));
    newptr->data = 23;
    for(Node* curr = head; curr != NULL; curr = curr->next){
        if(curr->data == insert){
            curr->prev->next = newptr;
            newptr->prev = curr->prev;
            newptr->next = curr;
            curr->prev = newptr;
            break;
        }
    }
    for(Node* curr = head; curr != NULL; curr = curr->next){
        printf("%d<->", curr->data);
    }
    printf("NULL\n");
    //insert -->
    int delete = 3;
    for(Node* curr = head; curr != NULL; curr = curr->next){
        if(curr->data == delete){
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            break;
        }
    }
    for(Node* curr = head; curr != NULL; curr = curr->next){
        printf("%d<->", curr->data);
    }
    printf("NULL\n");
    return 0;
}