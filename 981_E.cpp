#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int res = 0;
        vector<int>is_vis(n+1,0);
        for(int i = 1; i<=n; i++){
            if(is_vis[i] == 0){
                int sum = 0,pos = i;
                while(is_vis[pos] == 0){
                    sum++;
                    is_vis[pos] = 1;
                    pos = p[pos-1];
                }
                if(sum >= 3){
                    int ad = (sum-1)/2;
                    res+= ad;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}