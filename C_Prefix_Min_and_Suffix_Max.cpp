#include <bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;

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

        vector<int> prefix(n);
        vector<int> suffix(n);

        for (int i = 0; i < n; i++) {
            if(i == 0){
                prefix[i] = a[i];
                continue;
            }
            prefix[i] = min(prefix[i - 1], a[i]);
        }

        for (int i = n - 1; i >= 0; i--) {
            if(i == n-1){
                suffix[i] = a[i];
                continue;
            }
            suffix[i] = max(suffix[i + 1], a[i]);
        }

        string res = "";
        for (int i = 0; i < n; ++i) {
            if(i == 0 || i == n-1){
                if(a[i] <= 1000000 || a[i] >= 1) {
                    res += "1";
                    continue;
                }
                else{
                    res += "0";
                    continue;
                }
            }
            if (a[i] < prefix[i-1] || a[i] > suffix[i + 1]) {
                res += '1';
            } else {
                res += '0';
            }
        }
        cout<<res<<endl;
    }

    return 0;
}
