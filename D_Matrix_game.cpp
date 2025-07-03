#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;

const int MOD = 1e9 + 7;

int32_t main(){
    int t;
    cin>>t;
    while (t--) {
        int a, b, k;
        cin >> a >> b >> k;
        int n = 1;
        for (int i = 0; i < a; ++i) {
            n = (n * ((((a - 1) * k + 1) - i + MOD) % MOD)) % MOD;
        }

        int d = 1;
        for (int i = 1; i <= a; ++i) {
            d = (d * i) % MOD;
        }
        int di = 1;
        int base = d;
        int e = MOD - 2;
        while (e > 0) {
            if (e % 2 == 1) di = (di * base) % MOD;
            base = (base * base) % MOD;
            e /= 2;
        }
        cout << (((a - 1) * k + 1) % MOD) << " " << (((((b - 1) * k) % MOD) * ((n * di) % MOD) + 1) % MOD) << endl;
    }
    
    return 0;
}