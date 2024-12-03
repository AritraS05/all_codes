#include<bits/stdc++.h>
using namespace std;

class Sample{
    int s;
    public:
    Sample(int x){
        s=x;
    }
    static void fun(){
        cout<<"static"<<endl;
    }
    void invoke(){
        Sample::fun();
        cout<<"non-static"<<endl;
    }
};
int main(){
    Sample ob(10);
    ob.invoke();
    Sample::fun();
    return 0;
}