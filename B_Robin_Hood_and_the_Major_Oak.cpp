#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int count;
        if(n>k){
            count = (n*(n+1)/2)-((n-k)*(n-k+1)/2);
        }
        else{
            count = n*(n+1)/2;
        }
        
        if(count%2 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}