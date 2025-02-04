#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int k,x;
        cin>>k>>x;
        int l = 1;
        int r = 2*k -1;
        int res = 2*k-1;
        while(l <= r){
            int mid = (l+r)/2;
            int p = 2*k - mid;
            
            if(mid >= k){
                if((k*k - (p*(p-1)/2)) >= x){
                    res = mid;
                    r = mid-1;
                }
                else{
                    l = mid+ 1;
                }
            }
            else{
                if((mid*(mid+1)/2) >= x){
                    res = mid;
                    r = mid - 1;
                }  
                else{
                    l = mid+1;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}