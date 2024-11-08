#include<iostream>
#include<cmath>
// #include "oops.h"
using namespace std;
/*
struct complex{
    private:
        double r,i;
    public:
        void set(double a,double b);
        complex add(complex);
        void print();
};

void complex :: set(double a, double  b){
    r = a;
    i = b;
}

complex complex :: add(complex c){
    complex temp;
    temp.r = r+ c.r;
    temp.i = i + c.i;
    return temp;
}

void complex :: print(){
    cout<<r<<"+"<<i<<"i";
}

*/

struct point{
    int x,y;

    void set(int a,int b);
    float distance(point p);
};

void point :: set(int a,int b){
    x = a;
    y = b;
}
float point :: distance(point p){
    return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
}


int main(){
    /*
    complex c1,c2;
    c1.set(1,2);
    c2.set(3,4);
    complex c3 = c1.add(c2);
    c3.print();
    */

   point p1,p2;
   p1.set(1,2);
   p2.set(3,4);
   cout<<p1.distance(p2);
    return 0;
}