#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int m;
        cin >> m;
        vector<int> dp(m + 2, 1e8);
        dp[1] = 0;
        dp[2] = 1;
        for (int i = 3; i <= m; i++) {
            dp[i] = 1 + dp[i - 2];
            for (int j = 3; j <= i/2; j++) {
                if (dp[(i / j)] < 1e8 && i % j == 0) {
                    dp[i] = min(dp[i], dp[(i / j)] + dp[j-2]+1);
                }
            }
        }
        if(dp[m] == 1e8){
            cout<<-1<<endl;
         }
         else{
            cout<<1+dp[m]<<endl;
         }
    }

    return 0;
}
