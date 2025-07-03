#include <bits/stdc++.h>
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

        vector<int> a(n + 1);
        vector<int>dp(5001, 1e8);
        //dp[i] = min no of operations required to get gcd = i
        int maxi = 0;
        int  compare = 0;

        for (int j = 1; j <= n; j++) {
            cin >> a[j];
            compare = __gcd(compare, a[j]);
        }

        for (int j = 1; j <= n; j++) {
            a[j] /= compare;
            maxi = max(maxi, a[j]);
            dp[a[j]] = min(dp[a[j]], 0LL);
        }

        for (int i = maxi; i >= 1; i--) {
            for (int j = 1; j <= n; j++) {
                int temp = __gcd(i, a[j]);
                //transition state
                dp[temp] = min(dp[temp], dp[i] + 1);
            }
        }

        int ans = max(dp[1] - 1, 0LL);
        for (int j = 1; j <= n; j++) {
            if (a[j] > 1){
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
