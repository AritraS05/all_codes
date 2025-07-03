#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>x(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        int left = s-1;
        int right = n-s-1;
        int ans = x[n-1]-x[0];
        int diff1 = abs(s-x[0]);
        int diff2 = abs(s-x[n-1]);
        ans += min(diff1,diff2);
        
        cout<<ans<<endl;
    }
    
    return 0;
}