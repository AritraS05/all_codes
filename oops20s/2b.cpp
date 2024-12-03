#include<bits/stdc++.h>
using namespace std;
class XYZ;
class ABC{
    int a;
    public:
    ABC(int x){
        a=x;
    }
    void show(){
        cout<<a<<endl;
    }
    friend class XYZ;
};

class XYZ{
    int b;
    public:
    XYZ(int y){
        b=y;
    }
    void show(){
        cout<<b<<endl;
    }
    void swap(XYZ &a, ABC &b){
        int temp = a.b;
        a.b = b.a;
        b.a = temp;
    }
};

int main(){
    ABC a(10);
    XYZ b(20);
    a.show();
    b.show();
    b.swap(b,a);
    a.show();
    b.show();
    return 0;
}