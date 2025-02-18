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
        vector<int> f(n + 1, 0);
        for (int i = 0; i < n; i++) {
            f[a[i]]++;
        }
        bool flag = true;
        for (int i = 1; i < n; i++) {
            if(f[i] > 1){
                f[i+1] += (f[i]-2);
                f[i] = 2;
            }
            else if(f[i] == 1){
                flag = false;
                break;
            }
             // if (f[i] % 2 == 0) {
            //     continue;
            // } else {
            //     bool found = false;
            //     for (int j = i + 1; j <= n; j++) {
            //         // if (f[j] % 2 == 0 && (j - i) % 2 == 0 && f[j] >= j - i) {
            //         //     found = true;
            //         //     break;
            //         // } else if (f[j] % 2 == 1 && (j - i) % 2 == 1 && f[j] >= j - i) {
            //         //     found = true;
            //         //     break;
            //         // }
                    
            //     }
            //     if (!found) {
            //         flag = false;
            //         break;
            //     }
            // }
        }
        int idx = 1;
        for(int i = 1; i<=n; i++){
            if(f[i] > 0){
                continue;
            }
            else{
                idx = i-1;
                break;
            }
        }
        if(f[idx]%2 == 1){
            flag = false;
        }
        if (!flag) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}
