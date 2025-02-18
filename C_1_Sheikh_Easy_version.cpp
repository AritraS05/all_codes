#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>a(n+1);
        for(int i = 1; i<=n; i++){
            cin>>a[i];
        }

        vector<int>ps(n+1,0);
        vector<int>px(n+1,0);
        for(int i = 1; i<=n; i++){
            ps[i] = ps[i-1] + a[i];
            px[i] = px[i-1]^a[i];
        }

        vector<pii>queries(q);
        for(int i = 0; i<q; i++){
            cin>>queries[i].first>>queries[i].second;
        }
        
        for(int i = 0; i<q; i++){
            int start = max(1LL,queries[i].first);
            int end = min(n,queries[i].second)+1;
            int maxi = 0, mini = 1e8;
            pii ans = {queries[i].first,queries[i].first};
            for(int i1 = start; i1<end; i1++){ 
                int e = min(n+1,queries[i1].first+1);
                e = min(e,queries[i1].second+1);
                for(int j  = i1; j< e; j++){
                    int sum = ps[j] - ps[i1-1];
                    int xor1 = px[j] -px[i1-1];

                    int x = sum-xor1;
                    int y = j-i1+1;
                    if(x == maxi && y<mini){
                        mini = y;
                        ans = {i1,j};
                    }
                    else if(x>maxi){
                        maxi = x;
                        mini = y;
                        ans = {i1,j};
                    }
                }
            }
            cout<<ans.first<<" "<<ans.second<<endl;
        }

    }
    
    return 0;
}