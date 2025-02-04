#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            pb                push_back
#define          sz(a)               (int)a.size()
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>k(n);
        for(int i = 0; i<n; i++){
            cin>>k[i];
        }
        vector<int>c(m);
        for(int i = 0; i<m; i++){
            cin>>c[i];
        }
        sort(rall(k));
        
    }
    
    return 0;
}