#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>p(n);
        for(int i = 0; i<n; i++){
            cin>>p[i];
        }
        bool flag = true;
        for(int i = 0; i<n-1; i++){
            if(abs(p[i]-p[i+1]) != 1 && p[i]>p[i+1]){
                flag = false;
            }
            else if(abs(p[i]-p[i+1]) == 1 && p[i]>p[i+1]){
                swap(p[i],p[i+1]);
            }
        }
        if(flag == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}