#include<bits/stdc++.h>
using namespace std;

class B{
    virtual void f(){}
};

class D: public B{

};

int main(){
    B* b = new D();
    cout<<typeid(*b).name()<<endl;
    D* d = dynamic_cast<D*>(b);
    if(d){
        cout<<"cast to derived class"<<endl;
    }
    else{
        cout<<"cast failed"<<endl;
    }
    delete b;
    return 0;
}