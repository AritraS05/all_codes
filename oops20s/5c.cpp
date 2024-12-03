#include<bits/stdc++.h>
using namespace std;

namespace NS{
    void display();
    class Sample{
        public:
            void display();     
    };
}

void NS::display(){
    cout<<"inside NS"<<endl;
}
void NS::Sample::display(){
    cout<<"inside Sample"<<endl;
}

int main(){
    NS::display();
    NS::Sample obj;
    obj.display();
    return 0;
}