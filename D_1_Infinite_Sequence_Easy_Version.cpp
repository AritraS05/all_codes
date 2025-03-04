#include <bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;

int32_t main() {
    int t;
    cin >> t;
    vector<tuple<int, int, int>> queries(t);
    int max_r = 0;

    for (int i = 0; i < t; i++) {
        int n, l, r;
        cin >> n >> l >> r;
        queries[i] = {n, l, r};
        max_r = max(max_r, r);
    }

    vector<int> a, prefixXor;

    for (int i = 0; i < t; i++) {
        int n, l, r;
        tie(n, l, r) = queries[i];

        a.resize(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }

        // Compute prefixXor
        prefixXor.assign(n + 1, 0);
        for (int j = 1; j <= n; j++) {
            prefixXor[j] = prefixXor[j - 1] ^ a[j - 1];
        }

        // Precompute values up to max_r
        for (int j = n + 1; j <= max_r; j++) {
            a.push_back(prefixXor[j / 2]);
            prefixXor.push_back(prefixXor.back() ^ a.back());
        }

        // Answer queries in O(1)
        cout << a[l - 1] << endl;
    }

    return 0;
}
