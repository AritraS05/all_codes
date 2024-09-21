#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        vector<int>c(n);
        for(int i = 0; i<n; i++){
            cin>>c[i];
        }
        int d = __gcd(a,b);
        for(int i = 0; i<n; i++){
            c[i] = c[i]%d;
        }
        sort(c.begin(),c.end());
       int res = c[n-1]-c[0];

       for(int i = 0; i<n-1; i++){
            res = min(res,-c[i-1]+d+c[i]);
       }
       cout<<res<<endl;
        
    }
    return 0;
}