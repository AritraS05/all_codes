#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int total = n * m;
        unordered_map<int, pair<int, int>> posA, posB;

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j) {
                int x;
                cin >> x;
                posA[x] = {i, j};
            }

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j) {
                int x;
                cin >> x;
                posB[x] = {i, j};
            }

        int r1 = -1, r2 = -1, c1 = -1, c2 = -1;

        for (int val = 1; val <= total; ++val) {
            int ai = posA[val].first, aj = posA[val].second;
            int bi = posB[val].first, bj = posB[val].second;
        
            if (ai != bi && r1 == -1) {
                r1 = min(ai, bi) + 1;
                r2 = max(ai, bi) + 1;
            }
            if (aj != bj && c1 == -1) {
                c1 = min(aj, bj) + 1;
                c2 = max(aj, bj) + 1;
            }
        }
        

        if (r1 == r2) r1 = r2 = -1;
        if (c1 == c2) c1 = c2 = -1;

        cout << r1 << " " << r2 << " " << c1 << " " << c2 << '\n';
    }

    return 0;
}
