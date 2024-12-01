#include<bits/stdc++.h>
using namespace std;

class Sample
{
    int a;
    public:
    //define constructors with default value
    Sample(int x = 0){
        a = x;
    }
    //define suitable methods
    bool operator==(Sample&ob){
        return a == ob.a;
    }
    Sample &operator+=(Sample&ob){
        this->a  += ob.a;
        return *this;
    }
};

int main()
{
    Sample s1(5), s2;
    s2+=s1;
    if(s1==s2)
    cout<<"”The objects are equal”";
    else
    cout<<"”They are not equal”";
    return 0;
}