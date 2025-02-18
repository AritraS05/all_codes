#include <bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using pii = pair<int, int>;

const int MOD = 1000000007;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int res = 1;
        int temp = 2 * n;
        while (temp >= 1) {
            res = (res * temp) % MOD;
            temp--;
        }
        res = (res * ((MOD + 1) / 2)) % MOD; 
        cout << res << endl;
    }
    
    return 0;
}