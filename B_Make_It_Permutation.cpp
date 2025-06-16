#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>res;
        res.push_back({1, 1, n});   
        for(int i = 2; i<= n; i++){
            res.push_back({i,1,n-i+1});
            if(n-i+1<n){
                res.push_back({i,n-i+1+1,n});
            }
        }
        cout<<res.size()<<endl;
        for(int i = 0; i<res.size(); i++){
            cout<<res[i][0]<<" "<<res[i][1]<<" "<<res[i][2]<<endl;
        }
    }
    
    return 0;
}