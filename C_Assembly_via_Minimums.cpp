#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int m = n*(n-1)/2;
        vector<int>b(m);
        for(int i = 0;i<m;i++){
           cin>>b[i];
        }
        sort(b.begin(),b.end());
        int last;
        for(int i = 0; i<m; i+=--n){
            cout<<b[i]<<" ";
            last = b[i];
        }
        cout<<last<<endl;
    }
    return 0;
}