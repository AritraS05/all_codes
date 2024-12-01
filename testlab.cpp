#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int recur(int x,int y){
    if(y<=0){
        return 1;
    }
    return x*recur(x,y-1);
}

int fact(int n){
    if(n<=0){
        return 1;
    }
    return n*fact(n-1);
}


int main() {
    int n;
    printf("Enter  n: ");
    
    scanf("%d", &n);

    int res = fact(n);
    printf("The result is: %d\n", res);
    printf("\n");
    return 0;
}


