#include <bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using pii = pair<int, int>;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int res = 0;
        int sum = 0;
        map<int, int> f;
        f[0] = 1;               

        for (int i = 0; i < n; i++) {
            if (a[i] > x) {
                sum = 0;
                f.clear();
                f[0] = 1;
                continue;
            }
            sum += a[i];
            if (f.find(sum - s) != f.end()) {
                res += f[sum - s];
            }
            f[sum]++;
        }
        
        cout << res << endl;
    }

    return 0;
}
