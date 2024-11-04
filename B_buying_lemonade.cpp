#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        int res = 0;
        int idx = 0;
        int lemonades = 0;
        while(lemonades<k){
            if(a[idx] > 0){
                res++;
                a[idx]--;
                lemonades++;
            }
            else if(a[idx] == 0){
                res++;
                idx++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}