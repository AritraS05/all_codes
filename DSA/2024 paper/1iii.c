#include <stdio.h>
#include <stdlib.h>
int* res(int n, int k, int*a){
    if(n == 0|| k == 0){
        return NULL;
    }
    int*res = (int*)malloc((n-k+1)*sizeof(int));
    for(int i = 0; i<=n-k; i++){
        int maxi = -1e8;
        for(int j = i; j<i+k; j++){
            maxi = (maxi > a[j])? maxi : a[j];
        }
        res[i] = maxi;
    }
    return res;
}

int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize) {
    if (numsSize == 0 || k == 0) {
        *returnSize = 0;
        return NULL;
    }

    int* result = (int*)malloc((numsSize - k + 1) * sizeof(int));
    *returnSize = numsSize - k + 1;

    int* deque = (int*)malloc(numsSize * sizeof(int)); 
    int front = 0, back = 0; 

    for (int i = 0; i < numsSize; i++) {
        if (front < back && deque[front] < i - k + 1) {
            front++;
        }
        while (front < back && nums[deque[back - 1]] < nums[i]) {
            back--;
        }

        deque[back++] = i;

        if (i >= k - 1) {
            result[i - k + 1] = nums[deque[front]];
        }
    }

    free(deque);
    return result;
}

int main() {
    int nums[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int*r1 = res(numsSize, k, nums);
    printf("\nSliding window maximums: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", r1[i]);
    }
    printf("\n");

    // int* result = maxSlidingWindow(nums, numsSize, k, &returnSize);
    // printf("Sliding window maximums: ");
    // for (int i = 0; i < returnSize; i++) {
    //     printf("%d ", result[i]);
    // }
    // printf("\n");
    

    // free(result);
    return 0;
}


//tc --> O(n)