#include<bits/stdc++.h>
using namespace std;

class Sample{
    int s;
    public:
    Sample(int v = 0){
        s = v;
    }
    Sample operator/=(int v){
        Sample temp = *this;
        temp.s /= v;
        return temp;
    }
    friend ostream& operator<<(ostream& out,Sample& ob){
        out<<ob.s;
        return out;
    }
    Sample operator+(int val){
        Sample temp = *this;
        temp.s += val;
        return temp;
    }
    Sample operator*(Sample ob){
        Sample temp = *this;
        temp.s *= ob.s;
        return temp;
    }
    Sample& operator++(){
        ++s;
        return *this;
    }
    Sample operator-(int val){
        return Sample(s-val);
    }
    friend Sample operator-(int num,const Sample&obj){
        return Sample(num-obj.s);
    }
};

int main(){
    Sample ob1(4),ob2(5),ob3;
    ob3 = ob1/=2;
    cout<<ob1<<" "<<ob3<<endl;
    ob3 = ob1*(ob2+5);
    cout<<ob1<<" "<<ob3<<endl;
    ob2 = 50-(++ob3)*ob1;
    cout<<ob1<<" "<<ob2<<" "<<ob3<<endl;
}