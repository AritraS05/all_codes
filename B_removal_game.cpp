#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        bool flag = false;

        vector<int>c;
        for(int i = n-1; i>=0; i--){
            c.push_back(b[i]);
        }

        if(a==b || a==c){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}