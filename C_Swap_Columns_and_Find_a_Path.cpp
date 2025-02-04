#include <bits/stdc++.h>

using namespace std;

void solve() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;

        vector<int> row1(n), row2(n);
        for (int i = 0; i < n; ++i) cin >> row1[i];
        for (int i = 0; i < n; ++i) cin >> row2[i];

        vector<int> ps(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            ps[i] = ps[i - 1] + row2[i - 1];
        }

        vector<int> ss(n + 1, 0);
        for (int i = n - 1; i >= 0; --i) {
            ss[i] = ss[i + 1] + row1[i];
        }

        int res = INT_MIN;

        for (int i = 0; i < n; ++i) {
            int maxCost = max(ss[i + 1], ps[i]);
            res = max(res, maxCost);
        }

        cout << res << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
