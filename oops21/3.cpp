#include<bits/stdc++.h>
using namespace std;

class Base
{
    int a;
    public:
    Base(int x):a(x){
        cout<<"base class const called : a = "<<a<<endl;
    }
    void show(){
        cout<<"base class show: a = "<<a<<endl;
    }
};

class Child: public Base
{
    int b;
    protected:
    int c;
    public:
    Child(int x):Base(x),b(x+1),c(x+2){
        cout<<"child class const called : b = "<<b<<"c = "<<c<<endl;
    }
    void show(){
        Base::show();
        cout<<"child class show: b = "<<b<<"c = "<<c<<endl;
    }
};

class Grandchild: public Child
{
    int d;
    public:
    Grandchild(int x,int y):Child(x),d(y){
        cout<<"grandchild class const called : d = "<<d<<endl;
    }
    void show(){
        Child::show();
        cout<<"grandchild class show: d = "<<d<<endl;
    }
};

int main(){
    cout<<"gc:"<<endl;
    Grandchild g(1,2);
    g.show();
    cout<<"cc:"<<endl;
    Child c(3);
    c.show();
    cout<<"bc:"<<endl;
    Base b(4);
    b.show();

    return 0;
}