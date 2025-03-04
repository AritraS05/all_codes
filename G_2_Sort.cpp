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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }   
        vector<int>vis(n);
        int sum = 0;
        for(int i = 0; i<n-1; i++){
            if(a[i] < 2*a[i+1]){
                vis[i] = 1;
                if(i < k){
                    sum++;
                }
                // cout<<sum<<endl;
            }
        }
        int res = 0;
        if(sum == k){
            res++;
        }
        for(int i = k; i<n-1; i++){
            sum += vis[i];
            sum -= vis[i-k];
            if(sum == k){
                res++;
            }
        }
        cout<<res<<endl;    
    }
    
    return 0;
}