#include<bits/stdc++.h>
using namespace std;

class Number
{
    int n;
public:
    Number(int v = 0){
        n = v;
    }
    friend ostream& operator<<(ostream&out,Number&ob){
        out<<ob.n;
        return out;
    }
    Number operator++(int){
        Number temp = *this;
        // cout<<"++"<<endl;
        n++;
        return temp;
    }
    Number& operator--(){
        // cout<<"--"<<endl;
        --n;
        return *this;
    }
    Number& operator+(Number&ob){
        // cout<<"+"<<endl;
        n += ob.n;
        return *this;
    }
   Number operator-(int v){
    // cout<<"-"<<endl;
     return Number(n-v);
   }
};

int main()
{
    Number n1=5, n2;
    Number n3=n1;
    n2=(n3++)-2;
    cout<<n2<<endl;
    cout<<n3<<endl;
    n2=n3+(--n1);
    cout<<n2<<endl;
    cout<<n1;
}