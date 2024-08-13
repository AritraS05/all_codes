#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        if(n.length() == 3){
            if(n[0] == '1' && n[1] == '0' && (int)(n[2])>49){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(n.length()>3){
            if(n[0] == '1' && n[1] == '0' && (int)(n[2]) > 48){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }


    }
    return 0;
}