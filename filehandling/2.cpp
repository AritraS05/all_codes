#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream s;
    s.open("C:/Users/Aritra/OneDrive/Desktop/test.txt");
    string line;
    cout<<"enter data into file: "<<endl;
    while(s){
        getline(cin,line);
        if(line=="-1"){
            break;
        }
        s<<line<<endl;
    }
    s.close();
    ifstream fin;
    fin.open("C:/Users/Aritra/OneDrive/Desktop/test.txt");
    while(fin){
        getline(fin,line);
        cout<<line<<endl;
    }
    fin.close();
}