#include<bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using pii = pair<int, int>;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            int temp = 0;
            int tt = a[i];
            while (tt) {
                temp += tt & 1;
                tt >>= 1;
            }
            count += temp;
        }

        vector<int> res; res.reserve(n * 100);

        for (int i = 0; i < n; i++) {
            int curr = a[i];
            int itr = 0;
            while (itr < 500) { 
                itr++;
                int ttt = ~curr;
                int ttemp = 0;
                if (ttt == 0) {
                    ttemp = 64;
                } else {
                    while ((ttt & 1) == 0) {
                        ttemp++;
                        ttt >>= 1;
                    }
                }
                if (ttemp >= 60) {
                    break;
                }
                int ff = 1LL << ttemp;
                if (ff > k) {
                    break;
                }
                res.push_back(ff);
                curr += ff;
            }
        }

        sort(res.begin(), res.end());
        int u = 0;
        int count2 = 0;
        for (int i = 0; i < res.size(); i++) {
            if (u + res[i] > k) {
                break;
            }
            u += res[i];
            count2++;
        }

        int ans = count + count2;
        cout << ans << endl;
    }

    return 0;
}