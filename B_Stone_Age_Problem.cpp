#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q;
    
    vector<int> a(n), last_update(n, -1);
    int sum = 0, last_global_update = -1, global_value = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    while (q--) {
        int t;
        cin >> t;
        
        if (t == 1) {
            int i, x;
            cin >> i >> x;
            i--;

            int old_value = (last_update[i] < last_global_update) ? global_value : a[i];

            sum -= old_value;
            sum += x;
            a[i] = x;
            last_update[i] = q;

            cout << sum << '\n';

        } else {
            int x;
            cin >> x;
            sum = n * x;
            global_value = x;
            last_global_update = q;
            cout << sum << '\n';
        }
    }

    return 0;
}
