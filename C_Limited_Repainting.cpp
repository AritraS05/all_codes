#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int a[300010];

int32_t main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cin >> s;
        int res = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            res = max(res,a[i]);
        }
        int l = 0, r = res;
        while (l <= r) {
            int mid = (l + r) / 2;
            int parts = 0;
            int temp = 0;
            while (temp < n) {
                if (a[temp] > mid) {
                    if(s[temp] == 'R'){
                        temp++;
                        continue;
                    }
                }
                bool flag = true;
                while (temp < n && (s[temp] != 'R' || a[temp] <= mid)) {
                    if (a[temp] > mid) {
                        if(s[temp] == 'B'){
                            flag = false;
                        }
                    }
                    temp++;
                }
                if (!flag) {
                    parts++; 
                }
            }
            if (parts > k) {
                l = mid + 1;
            } else {
                res = mid;
                r = mid - 1;
            }
        }
        
        cout << res << endl;
    }
    return 0;
}
