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
        for(int i  = 0; i<n; i++){
            cin>>a[i];
        }
        vector<int>b(n);
        for(int i  = 0; i<n; i++){
            cin>>b[i];
        }
        vector<int>c(n);
        for(int i  = 0; i<n; i++){
            cin>>c[i];
        }
        int res = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n && j!=i; j++){
                for(int k = 0; k<n && k!=j && k!=i; k++){
                    res = max(res,a[i]+b[j]+c[k]);
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}