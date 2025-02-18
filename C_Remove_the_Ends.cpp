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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> ps(n + 1, 0); 
        for (int i = 0; i < n; i++) {
            ps[i + 1] = ps[i] + (a[i] > 0 ? a[i] : 0);
        }

        vector<int> negate(n);
        for (int i = 0; i < n; i++) {
            negate[i] = -a[i];
        }
        vector<int> reversenegate(n);
        for (int i = 0; i < n; i++) {
            reversenegate[i] = negate[n - i - 1];
        }
        vector<int> rps(n + 1, 0); 
        for (int i = 0; i < n; i++) {
            rps[i + 1] = rps[i] + (reversenegate[i] > 0 ? reversenegate[i] : 0);
        }
        vector<int> rereverse(n + 1); 
        for (int i = 0; i <= n; i++) {
            rereverse[i] = rps[n - i];
        }

        int coins = 0;
        for (int i = 0; i <= n; i++) {
            if((ps[i] + rereverse[i]) > coins){
                coins = ps[i] + rereverse[i];
            }
        }

        cout << coins << endl;
    }

    return 0;
}