#include <bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using pii = pair<int, int>;

const int MOD = 998244353;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> dp(4, 0);
        dp[0] = 1;

        for (int i = 0; i < n; i++) {
            vector<int> new_dp(4, 0);
            for (int j = 0; j < 4; j++) {
                new_dp[j] = dp[j];
            }
            if (a[i] == 1) {
                new_dp[1] = (new_dp[1] + dp[0]) % MOD;
            } else if (a[i] == 2) {
                new_dp[2] = (new_dp[2] + dp[1]) % MOD;
            } else if (a[i] == 3) {
                new_dp[3] = (new_dp[3] + dp[2]) % MOD;
            }
            dp = new_dp;
        }
        cout << dp[3] << endl;
    }

    return 0;
}