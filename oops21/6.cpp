#include<bits/stdc++.h>
using namespace std;

class Distance
{
    int feet, inches;
    public:
        Distance(int f = 0., int i = 0){
            feet = f;
            inches = i;
        }
        Distance(const Distance&d):feet(d.feet),inches(d.inches){}
        friend Distance add(Distance&d1, Distance&d2);
        void show(){
            cout<<feet<<" "<<inches<<"\n";
        }

        void subtract(Distance & ob){
            this->feet -= ob.feet;
            this->inches -= ob.inches;
            if(this->inches < 0){
                this->feet--;
                this->inches += 12;
            }
        }
};
Distance add(Distance&d1, Distance&d2){
    int tfeet = d1.feet + d2.feet;
    int tinches = d1.inches + d2.inches;
    tfeet += tinches/12;
    tinches %= 12;
    return Distance(tfeet,tinches);
}

 void display( Distance&OB){
     OB.show();
 }
int main()
{
    Distance d1(10,8), d2(8,9), d4;
    Distance d3(d1);
    d4=add(d1,d2);
    d4.show();
    d3.subtract(d2);
    display(d3);
}