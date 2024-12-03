#include<bits/stdc++.h>
using namespace std;

class A{
    int a;
    public:
    A(int x = 0){
        a = x;
    }
    void display(){
        cout<< a<<endl;
    }
    operator int() const{
        return a;
    }
    // friend A operator+(int x,A obj){
    //     return A(x+obj.a);
    // }
    // A operator*(A obj){
    //     return A(a*obj.a);
    // }
    A operator++(int){
        return A(a++);
    }
    A operator++(){
        return A(++a);
    }
    A operator()(A obj){
        A temp;
        temp.a = a + obj.a;
        return temp;
    }
    A* operator->(){ //this is the only correct method
        return this; //do this always in paper to be on safe side
    }
    // A operator->(){ //this thing doesnot work and is shit!!!
    //     return *this;
    // }
};

int main(){
    A ob1(1),ob2(2),ob3(3);
    ob3 = ob1*(10+ob2);
    ob3.display();
    ob3 = (ob1+ob2)*(ob1*5)*(10+ob2);
    ob3.display();
    ob3 = ob1*(ob2++);
    ob3.display();
    ob2.display();
    ob3 = ob1*(++ob2);
    ob3.display();
    ob2.display();
    A ob4 = ob1(ob2);
    ob4.display();
    ob4->display();
    return 0;
}