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
        if (n == 3) {
            cout << "! 1 2 3" << endl;
            fflush(stdout);
            continue;
        }
        
        int r, r2, r3;
        cout << "? 1 2 3" << endl;
        fflush(stdout);
        cin >> r;
        if (r == -1) exit(1);
        if (r == 0) {
            cout << "! 1 2 3" << endl;
            fflush(stdout);
            continue;
        }
        cout << "? 1 2 " << r << endl;
        fflush(stdout);
        cin >> r2;
        if (r2 == -1) exit(1);
        if (r2 == 0) {
            cout << "! 1 2 " << r << endl;
            fflush(stdout);
            continue;
        }
        cout << "? 1 " << r << " " << r2 << endl;
        fflush(stdout);
        cin >> r3;
        if (r3 == -1) exit(1);
        if (r3 == 0) {
            cout << "! 1 " << r << " " << r2 << endl;
            fflush(stdout);
        } else {
            cout << "! 2 " << r << " " << r2 << endl;
            fflush(stdout);
        }
    }
    return 0;
}
