#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2000, inf = 2e9+20;
int dp[N];
int a[N];
inline bool check(int x,int n,int k){
    fill(dp,dp+n,0);
    int res = 0;
    for(int i = 0; i<n; i++){
        dp[i] = 1;
        for(int j = 0; j<i; j++){
            if(abs(a[i]-a[j])<=x*(i-j)){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
        res = max(res,dp[i]);
    }
    if(n-res<=k){
        return true;
    }
    return false;
}

int32_t main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int low  = -1;
    int high  = inf;
    while((high-low) > 1){
        int mid = (low+high)/2;
        if(check(mid,n,k) == true){
            high = mid;
        }
        else{
            low = mid;
        }
    }
    cout<<high<<endl;
    return 0;
}