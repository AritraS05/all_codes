#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        int x = 0;
        while(x<(b-a)){
            x++;
        }
        if((a-x )> 0){
            cout<<a-x<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}