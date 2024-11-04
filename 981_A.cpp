#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int pos = 0;
        int i = 1;
        bool flag = true;
        while(pos>=-n && pos<=n){
            if(flag == true){
                pos -= (2*i-1);
                i++;
                flag = false;
            }
            else{
                pos += (2*i-1);
                i++;
                flag = true;
            }
        }
        if(flag == false){
            cout<<"Sakurako"<<endl;
        }
        else{
            cout<<"Kosuke"<<endl;
        }
    }
    return 0;
}