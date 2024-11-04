#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int rem = 0;
        int res = 0;
        for(int i = 0; i<n; i++){
            int temp = a[i]/2;
            res += temp*2;
            rem += a[i]%2;
        }
        int vacant = (2*r) - res;
        
        vacant -= rem;
        res += vacant/2;
        cout<<res<<endl;
    }
    return 0;
}