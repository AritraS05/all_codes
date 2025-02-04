#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream s;
    s.open("C:/Users/Aritra/OneDrive/Desktop/test.txt",ios::in);
    if(!s){
        cout<<"fafiled"<<endl;
    }
    else{
        char ch;
        while(!s.eof()){
            s>>ch;

            cout<<ch<<endl;
        }
        s.close();
    }
}