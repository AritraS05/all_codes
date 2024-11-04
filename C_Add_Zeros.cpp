#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<pair<long long,long long>>a(n+1);
        for(long long i = 1; i<=n; i++){
            long long temp;cin>>temp;
            a[i].first = temp + i-1;
            if(i == 1){
                a[1].first = 0;
            }
            a[i].second = i-1;
        }
        sort(a.begin(),a.end());
        map<long long,bool> f;
        f[n] = true;
        for(long long i = 1; i<=n; i++){
            if(f[a[i].first] == true){
                f[a[i].first + a[i].second] = true;
            }
        }
        long long res = 0;
        for(auto it: f){
            if(it.second == true){
                res = it.first;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}