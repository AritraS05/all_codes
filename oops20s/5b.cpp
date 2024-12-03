#include<bits/stdc++.h>
using namespace std;


class Test{
    int t;
    public:
    Test(int x=0){
        t=x;
    }
    Test(Test & obj){
        t = obj.t;
    }
    int getval(){
        return t;
    }
    Test operator()(int val){
        t = val;
        return *this;
    }
};

class Sample{
    int s;
    public:
    Sample(int x = 0){
        s = x;
    }
    Sample(const Sample& obj){
        s = obj.s;
    }
    Sample &operator=(Test &obj){
        s = obj.getval();
        return *this;
    }
    Sample operator++(){
        ++s;
        return *this;
    }
    Sample operator+(Sample&obj){
        Sample temp;
        temp.s = s + obj.s;
        return temp;
    }
    Sample* operator->(){
        return this;
    }
    void display(){
        cout<<s<<endl;
    }
};
int main() {
    Sample S1(5);
    Sample S2(S1);        // Create a copy of S1
    Test T1,T2;
    T2 = T1(10);
    S1 = T2;
    Sample S3 = (++S1) + S2; // Increment S1 and add to S2
    S3->display();         // Display S3 value
    return 0;
}