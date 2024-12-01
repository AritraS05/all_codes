#include<bits/stdc++.h>
using namespace std;

namespace NS
{
    int a = 20;
    void display(); 
    class Test
    {
        int a;
        public:
        Test(int); 
        void display(); 
    };
}
void NS::display(){
    cout<<"display inside ns: ";
    cout<<a<<endl;
}
NS::Test::Test(int v){
    a = v;
}
void NS::Test::display(){
    cout<<"display inside test: ";
    cout<<a<<endl;
}

int main(){
    using namespace NS;
    Test t1(10);
    display();
    t1.display();
    return 0;
}
