#include<bits/stdc++.h>
using namespace std;

int &max(int &a,int & b){
    if(a>b)
        return a;
    else
        return b;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a=4, b=6;
    max(a,b)=100;
    cout<<"a = "<<a<<"  b = "<<b<<endl;
    swap(&a, &b);
    cout<<"a = "<<a<<"  b = "<<b<<endl;
    max(a,b)=100;
    cout<<"a = "<<a<<"  b = "<<b;
}