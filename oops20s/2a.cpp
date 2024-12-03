#include<bits/stdc++.h>
using namespace std;

class Complex{
    float real,img;
    public:
    void setData(float r,float i){
        real=r;
        img=i;
    }
    friend Complex sum(Complex a,Complex b);
    void subtract(Complex c){
        real-=c.real;
        img-=c.img;
    }
    Complex multiply(Complex c){
        real *= c.real;
        img *= c.img;
        return *this;
    }
    void show(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
Complex sum(Complex a,Complex b){
    Complex temp;
    temp.real = a.real + b.real;
    temp.img = a.img + b.img;
    return temp;
}

int main(){
    Complex c,d;
    c.setData(1,2);
    d.setData(3,4);
    c.subtract(d);
    c.show();
    d.show();
    Complex e = sum(c,d);
    e.show();
    return 0;
}