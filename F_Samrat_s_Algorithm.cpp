#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        vector<int> cnt(30, 0);
        for (int num : a) {
            for (int k = 0; k < 30; ++k) {
                if (num & (1 << k)) {
                    cnt[k]++;
                }
            }
        }

        int min_score = 0;
        int x = 0;

        for (int k = 0; k < 30; ++k) {
            int c1 = cnt[k];
            int c0 = n - c1;
            if (c0 < c1) {
                min_score += c0;
                x |= (1 << k);
            } else {
                min_score += c1;
            }
        }

        cout << min_score << " " << x << endl;
    }

    return 0;
}
