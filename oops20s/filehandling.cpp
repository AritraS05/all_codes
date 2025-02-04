#include<bits/stdc++.h>
using namespace std;

int main(){
    fstream s;
    s.open("C:/Users/Aritra/OneDrive/Desktop/test.txt",ios::out);
    if(!s){
        cout<<"failed"<<endl;
    }
    else{
        cout<<"success"<<endl;
        s<<"hello my nigga :hug:"<<endl;
        s.close();
    }
}