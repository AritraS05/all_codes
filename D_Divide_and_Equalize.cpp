#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void div(int n,map<int,int>&f){
    int temp = 2;
    while(temp*temp <= n){
        while(n%temp == 0){
            f[temp]++;
            n = n/temp;
        }
        temp++;
    }
    if(n>1){
        f[n]++;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i = 0; i<n ;i++){
            cin>>a[i];
        }
        map<int,int>f;
        for(int i = 0; i<n; i++){
            div(a[i],f);
        }
        bool flag = true;
        for(auto it: f){
            if(it.second % n != 0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}