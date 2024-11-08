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
        vector<int>a(m);
        for(int i = 0; i<m; i++){
            cin>>a[i];
        }
        sort(all(a));
        
    }
    return 0;
}