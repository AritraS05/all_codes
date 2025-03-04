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
        
        vector<int>a(m);
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<int>gaps(m);
        for(int i = 0; i<m-1; i++){
            gaps[i] = a[i+1]-a[i]-1;
        }
        gaps[m-1] = n-a[m-1]+a[0]-1;

        sort(gaps.begin(),gaps.end(),greater<int>());
        int dec = 0;
        int count = 0;
        // for(int i = 0; i<m; i++){
        //     int res = gaps[i] - dec;
        //     if (res > 0) {
        //         count += res;    
        //         dec += 4;
        //     } 
        // }
        for(int i = 0; i<m; i++){
            int res =gaps[i]-(2*dec);
            if(res > 0){
                count += max(res-1,1LL);
            }
            dec += 2;
        }
        // cout<<count<<" ";
        if(n == m){
            cout<<n<<endl;
            continue;
        }
        cout<<n-count<<endl;
    }
    
    return 0;
}