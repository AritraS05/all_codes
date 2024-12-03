#include <iostream>
using namespace std;

namespace ns1
{
    int a,b;
    void set(int x, int y){
        a = x + y; b = y - x;
    }    
    void show(){
        cout<<a<<" "<<b<<endl;
    }

    namespace ns2
    {
        int a = 5, b = 2;
        void set(int x, int y){
            a = y - x; b = y + x;
        }
        void show(){
            cout<<a<<" "<<b<<endl;
        }
    }
} 


int main(){
    using namespace ns1;
    a = 10; b = 20;
    ns2::show();
    ns2::set(7, 10);
    show();
    set(8,4);
    ns2::show();
    ns2::set(6,8);
    show();
    set(2,5);
    ns2::show();
    return 0;
}