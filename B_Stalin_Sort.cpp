#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i =0; i<n; i++){
            cin>>a[i];
        }
        int res = 1e8;

        for(int i = 0; i<n ;i++){
            int mini = 0;
            for(int j = i+1; j<n; j++){
                mini += (a[j]>a[i]) ? 1 : 0;
            }
            res = min(res,mini+i);
        }
        cout<<res<<endl;
    }
    return 0;
}