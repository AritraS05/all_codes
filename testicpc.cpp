#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> prices(n);
        for (int i = 0; i < n; ++i) {
            cin >> prices[i];
        }

        sort(prices.begin(), prices.end());

        vector<int> dp(n + 1, INT_MAX);
        dp[0] = prices[0];

        for (int m = 1; m <= n; ++m) {
            for (int k = 1; k <= m; ++k) {
                dp[m] = min(dp[m], dp[m - k] + prices[k - 1]);
            }
        }

        for (int m = 1; m <= n; ++m) {
            cout <<dp[m] << " ";
        }
        cout<<endl;

        return 0;
    }
}
