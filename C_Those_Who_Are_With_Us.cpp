#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>>a(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        int maxi = INT_MIN;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                maxi  = max(maxi, a[i][j]);
            }
        }
        vector<pii>idx;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(a[i][j] == maxi){
                    idx.push_back({i, j});
                }
            }
        }
        bool flag = false;
        for(int i = 0; i<n; i++){
            if(flag == true){
                break;
            }
            set<int>st;
            for(int j = 0; j<idx.size(); j++){
                if(idx[j].first != i){
                    st.insert(idx[j].second);
                    if(st.size() > 1){
                        break;
                    }
                }
            }
            if(st.size() <= 1){
                flag = true;
            }
        }
        if(flag){
            cout<<maxi-1<<endl;
        }
        else{
            cout<<maxi<<endl;
        }
    }
    
    return 0;
}