#include<bits/stdc++.h>
using namespace std;
namespace ns1{
    int a,b;
    void set(int x,int y){
        a = x+y;
        b = y-x;
    }
    void show(){
        cout<<a<<" "<<b<<endl;
    }
    namespace ns2{
        int a = 5, b = 2;
        void set(int x,int y){
            a = y-x;
            b = x+y;
        }
        void show(){
            cout<<a<<" "<<b<<endl;
        }
    }
}

int main(){
    using namespace ns1;
    a = 10;
    b = 20;
    ns2::show();
    ns2::set(7,10);
    show();
    // // set(8,4); ambiguous
    ns2::show();
    ns2::set(6,8);
    show();
    // // set(2,5); ambiguous
    ns2::show();

    return 0;
}