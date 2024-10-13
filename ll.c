#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int x,struct Node* y){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = y;  

    return newNode;
}
struct Node* arrtoll(int arr[],int n){
    if(n==0){
        return NULL;
    }
    struct Node* head = createNode(arr[0],NULL);
    struct Node* curr = head;
    for(int i = 1; i<n; i++){
        struct Node* temp = createNode(arr[i],NULL);
        curr->next = temp;
        curr = curr->next;
    }
    return head;
}

void printLL(struct Node* head){
    struct Node* curr = head;
    while(curr!= NULL){
        printf("%d->",curr->data);

        curr = curr->next;
    }
    if(curr == NULL){
        printf("NULL \n");
    }
}

int length(struct Node* head){
    int count = 0;
    struct Node* curr = head;
    while(curr != NULL){
        count++;
        curr = curr->next;
    }
    return count;
}


void checkp(struct Node* head, int x){
    struct Node* curr = head;
    int flag = 0;
    while(curr != NULL){
        if(curr->data == x){
            printf("YES, presence detected! \n");
            flag = 1;
            break;
        }
        curr = curr->next;
    }
    if(flag == 0){
        printf("NO, presence not detected! \n");
    }
}

struct Node* removeHead(struct Node* head){
    if(head == NULL){//base case
        return NULL;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

struct Node* removeTail(struct Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    struct Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

struct Node* removeK(struct Node* head, int k){
    if(head == NULL){
        return NULL;
    }
    if(k==1){
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int count = 0;
    struct Node* temp = head;
    struct Node* prev = NULL;
    while(temp != NULL){
        count++;
        if(count == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

struct Node* removeVal(struct Node* head, int val){
    if(head == NULL){
        return NULL;
    }
    if(head->data == val){
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct Node* temp = head;
    struct Node* prev = NULL;
    while(temp != NULL){
        if(temp->data == val){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

struct Node* insertHead(struct Node*head,int val){
    struct Node* res = createNode(val,head);
    return res;
}
struct Node* insertTail(struct Node*head,int val){
    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    struct Node* res = createNode(val,NULL);
    temp->next = res;
    return head;
}

struct Node* insertVal(struct Node* head, int val){
    struct Node* res = createNode(val,NULL);
    if(head == NULL){
        return res;
    }
    if(head->data == val){
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct Node* temp = head;
    struct Node* prev = NULL;
    while(temp != NULL){
        if(temp->data == val){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}


int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    struct Node* head = arrtoll(arr,n);
    printLL(head);
    printf("The length of the ll is : %d \n", length(head));
    checkp(head,0);
    head = removeHead(head);
    printLL(head);
    removeTail(head);
    printLL(head);
    head = removeK(head,2);
    printLL(head);
    head = removeVal(head,2);
    printLL(head);
    head = insertHead(head,5);
    printLL(head);
    head = insertTail(head,6);
    printLL(head);
    return 0;
}

