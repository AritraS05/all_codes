#include<bits/stdc++.h>
using namespace std;

class a{
    int aa;
    public:
    a(int v){
        aa = v;
    }
    void show(){
        cout<<aa<<endl;
    }
};

int main(){
    a a1(10);
    a1.show();
    a a2 = 20;
    a2.show();
    return 0;
}