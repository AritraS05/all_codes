#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        vector<int>b(n);
        for(int i = 0; i<n; i++){
            cin>>b[i];
        }
        int maxi = 0;
        int res = 0;
        int sum = 0;
        for(int i = 0; i<min(n,k); i++){
            maxi = max(maxi,b[i]);
            sum += a[i];
            res = max(res,sum+maxi*(k-i-1));
        }
        cout<<res<<endl;
    }
    return 0;
}