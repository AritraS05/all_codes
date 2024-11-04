#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int maxi = 1e5;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int h =0, w = 0;
        int l=0;
        for(int i=0;i<n;i++){
        int a, b;cin>>b>>a;
        if(h<a){
            l += (a-h)*2;
            h= a;
        }
        if(b>w) {
            l += (b-w)*2;
            w =b;
        }
        }
        cout<<l<<endl;
    }
    return 0;
}