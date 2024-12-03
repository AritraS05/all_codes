#include<bits/stdc++.h>
using namespace std;

class base{
    int b;
    public:
    base(int x){
        cout<<"base constructor called"<<endl;
        b=x;
    }
    ~base(){
        cout<<" base destructor called"<<endl;
    }
    void show(){
        cout<<b<<endl;
    }
};

class derived:public base{
    int d;
    public:
    derived(int x):base(x){
        cout<<"derived constructor called"<<endl;
        d=x;
    }
    ~derived(){
        cout<<"derived destructor called"<<endl;
    }
    void show(){
        cout<<d<<endl;
    }
};

int main(){
    cout<<"base:"<<endl;
    base ob1(10);
    ob1.show();
    cout<<"derived:"<<endl;
    derived ob(10);
    ob.show();
    return 0;
}