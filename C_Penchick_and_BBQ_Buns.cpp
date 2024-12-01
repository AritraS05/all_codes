#include <iostream>
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 1) {
            if (n <= 25) {
                cout << -1 << endl;
            } else {
                int baseSeq[27] = {1, 3, 3, 4, 4, 5, 5, 6, 6, 1, 2, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 1, 2};
                
                for (int i = 0; i < 27; i++) {
                    cout << baseSeq[i] << " ";
                }
                
                int extraNum = 14;
                for (int i = 28; i <= n; i += 2) {
                    cout << extraNum << " " << extraNum << " ";
                    extraNum++;
                }
                cout << endl;
            }
        }
        else {
            for (int i = 1; i <= n / 2; i++) {
                cout << i << " " << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
