#include<bits/stdc++.h>
using namespace std;

class Sample{
    int s;
    public:
    Sample(int x=0,int y=0){
        s=x+y;
    }
    void show(){
        cout<<s<<endl;
    }
};

int main(){
    Sample ob;
    ob.show();
    Sample ob1(10,20);
    ob1.show();
    return 0;
}