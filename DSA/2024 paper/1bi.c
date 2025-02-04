#include<stdio.h>
#include<stdlib.h>
int* rotate(int  arr[], int n){
    int* res = (int*)malloc(n*sizeof(int));
    int temp = arr[n-1];
    
    for(int i = 1; i<n; i++){
        res[i] = arr[i-1];
    }
    res[0] = temp;
    return res;
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int *res =  rotate(arr,n);
    printf("Rotated array: ");
    for(int i = 0; i<n; i++){
        printf("%d ", res[i]);
    }
    return 0;
}