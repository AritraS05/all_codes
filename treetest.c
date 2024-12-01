#include <stdio.h>
#include <stdlib.h>
 typedef struct TreeNode{
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
}Node;

// typedef struct stack{
//     int top;
//     int capacity;
//     int * arr;
// }stack;

// stack * createStack(int capacity){
//     stack *s = (stack*)malloc(sizeof(stack));
//     if(!s){
//         return NULL;
//     }
//     s->top = -1;
//     s->capacity = capacity;
//     s->arr = (int*)malloc(sizeof(int)*capacity);
//     if(!s->arr){
//         free(s);
//         return NULL;
//     }
//     return s;
// }


void preorder(Node* root){
    if(root){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(Node* root){
    if(root){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

// void nonrecurpreorder(Node* root){
//     stack *s = createStack();
// }

Node* createNode(int data);
Node* insertNode(Node* root, int data);

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insertNode(Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }

    return root;
}

int main(){
    Node* root = NULL;
    root = insertNode(root, 10);
    root = insertNode(root, 20);
    root = insertNode(root, 30);
    root = insertNode(root, 40);
    root = insertNode(root, 50);
    root = insertNode(root, 60);
    root = insertNode(root, 70);
    root = insertNode(root, 80);
    root = insertNode(root, 90);
    preorder(root);
    printf("\n");
    inorder(root);
    return 0; 
}