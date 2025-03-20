#include<bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using pii = pair<int, int>;

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
        ll res = 0;
        for (int i = 1; i <= 10; i++) {
            vector<vector<int>> dp(11, vector<int>(n + 1, 0));
            int sum = n; 
            dp[0][sum] = 1;
            for (int j = 0; j < n; j++) {
                if (a[j] < i) {
                    sum--;
                } else {
                    sum++;
                }
                res += dp[j][sum];
                dp[j + 1][sum] = dp[j][sum] + 1; 
            }
        }
        ll total = (ll)n * (n + 1) / 2;
        cout << total - res << endl;
    }
    return 0;
}
