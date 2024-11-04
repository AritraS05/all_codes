#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int>f;
        f[0] = 1;
        int sum = 0, res = 0;
        for(int i  = 0; i<n; i++){
            sum += a[i];
            if(f[sum]){
                res++;
                f.clear();
                f[0] = 1;
                sum = 0;
            }
            f[sum]++;
        }
        cout<<res<<endl;
    }
    return 0;
}