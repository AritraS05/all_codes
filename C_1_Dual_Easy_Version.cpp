#include <bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using pii = pair<int, int>;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        if (is_sorted(a.begin(), a.end())) {
            cout << 0<<endl;
            continue;
        }

        int maxi = max_element(a.begin(), a.end(),[](int x,int y){
            return abs(x)<abs(y);
        }) - a.begin();
        bool allneg = all_of(a.begin(), a.end(), [](int x) { return x < 0; });

        vector<pii> operations;

        if (allneg) {
            cout << n - 1 <<endl;
            for (int i = n; i > 1; i--) {
                cout << i << " " << i - 1 << endl;
            }
        } else {
            if(maxi >= 0){
                for (int i = 0; i < n; i++) {
                    if (a[i] < 0) {
                        operations.emplace_back(i + 1, maxi + 1);
                        a[i] += a[maxi];
                    }
                }
            }
            else{
                for (int i = 0; i < n; i++) {
                    if (a[i] > 0) {
                        operations.emplace_back(i + 1, maxi + 1);
                        a[i] += a[maxi];
                    }
                }
            }
            for (int i = 1; i < n; i++) {
                while (a[i] < a[i - 1]) {
                    operations.emplace_back(i + 1, i);
                    a[i] += a[i - 1];
                }
            }

            cout << operations.size() << endl;
            for (auto it : operations) {
                cout << it.first << " " << it.second << endl;
            }
        }
    }

    return 0;
}
