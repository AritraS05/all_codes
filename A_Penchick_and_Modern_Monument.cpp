#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>h(n);
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        map<int,int>f;
        for(int i=0;i<n;i++){
            f[h[i]]++;
        }
        int maxi = 0;
        for(auto i:f){
            if(i.second>maxi){
                maxi = i.second;
            }
        }
        cout<<n-maxi<<endl;
    }
    return 0;
}