#include <stdio.h>

int gcd(int a,int b){
    if(b == 0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int a = 10, b = 20;
    printf("%d",gcd(a,b));
    return 0;
}