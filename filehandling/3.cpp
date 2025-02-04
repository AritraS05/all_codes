#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream s;
    s.open("C:/Users/Aritra/OneDrive/Desktop/test.txt",ios::out);
    cout<<"pos before anything: "<<s.tellp()<<endl;
    if(!s){
        cout<<"failed"<<endl;
    }
    else{
        cout<<"success"<<endl;
        s<<"hello my nigga :hug:"<<endl;
        cout<<"ptr pos: "<<s.tellp()<<endl;
        s.seekp(-1,ios::cur);
        cout<<"curr pos:"<<s.tellp()<<endl;
        s.seekp(2,ios::cur);
        cout<<"cur pos:"<<s.tellp()<<endl;
    }
}