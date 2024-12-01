#include<bits/stdc++.h>
using namespace std;

template<class T=int,int N = 5>
void print(T a){
    for(int i = 1; i<N; i++){
        cout<<a<<" ";
    }
    cout<<endl;
}

int main(){
    // print<4>('A');
    print<double> (92.56);
    // print<int>(93,4);
    print<>(94.56F);
    print<int,4> (95);
    print<double, 5> (96.05);
    print<char,4>(97);
    print<>(98);
    return 0;
}