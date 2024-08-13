#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int w;
        cin>>w;
        vector<long long>a(w);
        for(int i=0;i<w;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<int>res;
        for(int i = 1;i<=n; i++){
            for(int j = 1;j<=m; j++){
                int temp = (max(n-k+1,i)-max(i-k+1,1)+1)*(max(m-k+1,j)-max(j-k+1,1)+1);
                res.push_back(temp);
            }
        }
        sort(res.begin(),res.end());
        long long spec = 0;
        for(int i = 0; i<w; i++){
            spec += a[i]*res[i];
        }
        cout<<spec/2<<endl;
    }
    return 0;
}