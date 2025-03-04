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
        vector<vector<int>>a(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        map<int,int>f;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                f[a[i][j]]++;
            }
        }
        map<int,bool>neighbours;
        for(int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i > 0 && a[i][j] == a[i - 1][j]) neighbours[a[i][j]] = true;
                if (j > 0 && a[i][j] == a[i][j - 1]) neighbours[a[i][j]] = true;
                if (i < n - 1 && a[i][j] == a[i + 1][j]) neighbours[a[i][j]] = true;
                if (j < m - 1 && a[i][j] == a[i][j + 1]) neighbours[a[i][j]] = true;
            }
        }

        int count = 0, maxi = 0;
        for(auto it : f){
            int res = 1;
            if(neighbours[it.first]){
                res++;
            }
            count += res;
            maxi = max(maxi,res);
        }
        cout<<count-maxi<<endl;
    }
    
    return 0;
}