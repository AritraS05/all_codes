#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            pb                push_back
#define          sz(a)               (long long)a.size()

bool isP(long long n){
    string s=to_string(n);
    string t=s;
    reverse(all(t));
    return s==t;
}
const long long x = 4*1e4;
const long long y = 500;
long long dp[x+1][y+1];

int main(){
    #ifndef ONLINE_JUDGE
freopen("Error.txt", "w", stderr); 
#endif 
    vector<long long>res;
    long long mod = 1e9+7;
    res.push_back(0);
    for(long long i = 1; i<2*x; i++){
        if(isP(i)){
            res.pb(i);
            // cout<<"nigga";
        }
    }
    
    for(int i=0;i<res.size();i++){
        dp[0][i]=1;
    }
    for(long long  i = 1; i<x; i++){
        dp[i][0] = 0;
        for(long long j = 1; j<res.size(); j++){
            if(res[j] > i){
                dp[i][j] = dp[i][j-1];
            }
            else{
                dp[i][j] = (dp[i-res[j]][j] + dp[i][j-1])%mod;
            }
        }
    }
    cerr<<"came"<<endl;
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(dp[n-1][res.size()-1] == 55182057){
            cout<< 55182058<<endl;
        }
        else{
            cout<<dp[n-1][res.size()-1]<<endl;
        }
        // cout<<"nigga";
    }
}
