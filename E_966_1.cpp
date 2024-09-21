#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,m,k;
        cin>>n>>m>>k;
        long long w;
        cin>>w;
        vector<long long>a(w);
        for(long long i=0;i<w;i++){
            cin>>a[i];
        }
        vector<long long>res;
        for(long long i = 0;i<n; i++){
            for(long long j = 0; j<m; j++){
                long long lbx = max((long long)0,i-k+1);
                long long ubx = min(n-k,i);
                long long lby = max((long long)0,j-k+1);
                long long uby = min(m-k,j);

                long long weight = (ubx-lbx+1)*(uby-lby+1);
                res.push_back(weight);
            }
        }
        sort(res.begin(),res.end(),greater<long long>());
        sort(a.begin(),a.end(),greater<long long>());

        long long spec = 0;
        for(long long l = 0; l<w; l++){
            spec += (a[l]*res[l]);
        }
        cout<<spec<<endl;
    }
    return 0;
}