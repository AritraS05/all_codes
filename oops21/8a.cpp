#include<bits/stdc++.h>
using namespace std;

class Sample
{
    int s;
public:
    Sample(int v = 0){
        s = v;
    }
    Sample& operator=(int val){
        s = val;
        return *this;
    }
   friend Sample operator+(int lhs,Sample&ob);

   operator int() const{
       return s;
   }
   Sample* operator->(){
       return this;
   }
   void display(){
       cout<<s<<endl;
   }
};
Sample operator+(int lhs,Sample&ob){
    return Sample(lhs+ob.s);
}
class Test
{
    int t;
public:
    Test(int v = 0){
        t = v;
    }
    Test& operator*=(const Test&ob){
        t *= ob.t;
        return *this;
    }
    Test operator()(int val){
        t = val;
        return *this;
    }
    operator int() const{
        return t;
    }
    Test (Sample&ob):t(ob){}
};


int main()
{
    Sample s1=5, s2;
    Test t1,t2;
    t1=s1;
    s2=5+s1;
    int a=s2;
    t1*=t2(10);
    int b=t1;
    Sample s3(a-b);
    s3->display();
}