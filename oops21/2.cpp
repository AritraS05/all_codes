#include<bits/stdc++.h>
using namespace std;

class Number
{
    int a,b;
    public:
    Number(int, int=0);
    friend void swap(Number&, Number&);
    void show();
    void exchange(Number&);
};

Number::Number(int a,int b){
    this->a = a;
    this->b = b;
}

void swap(Number &num1,Number&num2){
    int temp = num1.a;
    num1.a = num2.a;
    num2.a = temp;

    temp = num1.b;
    num1.b = num2.b;
    num2.b = temp;
}

void Number::show(){
    cout<<a<<" "<<b<<endl;
}

void Number::exchange(Number &num){
    int temp = this->a;
    this->a = num.a;
    num.a = temp;

    temp = this->b;
    this->b = num.b;
    num.b = temp;
}

int main(){
    Number num1(1,2);
    Number num2(3,4);
    swap(num1,num2);
    num1.show();
    num2.show();
    num1.exchange(num2);
    num1.show();
    num2.show();
    return 0;
}

