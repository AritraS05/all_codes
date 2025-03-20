#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>>c(n);
        for(int i = 0; i<n; i++){
            cin>>c[i].first>>c[i].second;
        }
        int res = 2*m;
        for(int i = 1; i<n; i++){
            res += c[i].first + c[i].second;
        }
        res *= 2;
        cout<<res<<endl;
    }
    return 0;
}