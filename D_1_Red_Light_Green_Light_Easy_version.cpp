#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>p(n);
        for(int i = 0; i<n; i++){
            cin>>p[i];
        }
        vector<int>d(n);
        for(int i = 0; i<n; i++){
            cin>>d[i];
        }
        int q;
        cin>>q;
        vector<int>a(q);
        for(int i = 0; i<q; i++){
            cin>>a[i];
        }

        int m =   2*n*k;
        vector<int>dest(m,-1);
        vector<vector<int>>res(m);
        for(int i = 0; i<n; i++){
            for(int j = 0; j<2; j++){
                int d1 = -1;
                if(j == 0){
                    d1  = 1;
                }
                for(int l = 0; l<k; l++){
                    int gg = (2*i + j)*k + l;
                    if(l == d[i]){
                        d1 *= -1;
                    }
                    int jj = i + d1;
                    if(d1 == 1){
                        d1 = 0;
                    }
                    else{
                        d1 = 1;
                    }
                    if(jj<0 || jj >=n){
                        dest[gg] = -1;
                    }
                    else{
                        int d2 = abs(p[jj]- p[i]);
                        int ggg = (2*jj + d1)*k + (l + (d2%k))%k;
                        dest[gg] = ggg;
                        res[ggg].push_back(gg);
                    }
                }
            }
        }

        vector<char>ans(m,0);
        queue<int>q1;
        for(int i = 0; i<m; i++){
            if(dest[i] < 0){
                ans[i] = 1;
                q1.push(i);
            }
        }
        while(!q1.empty()){
            int f = q1.front();
            q1.pop();
            for(int rr : res[f]){
                if(!ans[rr]){
                    ans[rr] = 1;
                    q1.push(rr);
                }
            }
        }

        for(int i= 0; i<q; i++){
            int res2 = -1;
            for (int j = 0; j < a.size(); j++) {
                if (a[j] >= a[i]) {
                    res2 = j; 
                    break;
                }
            }
            // if(res2 == p.end()){
            //     cout<<"YES"<<endl;
            // }
            // else{

            // }
        }
    }
    
    return 0;
}