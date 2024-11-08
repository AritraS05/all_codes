#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        k--;  
        int p1 = n;  
        int p2 = 1;  

        while (k--) {
            if (p1 > 1) {
                p1--;
            } else {
                p1 = n;
            }

            if (p2 < n) {
                p2++;
            } else {
                p2 = 1;
            }

            if (p2 == p1) {  
                if (p2 < n) {
                    p2++;
                } else {
                    p2 = 1;
                }
            }
        }
        
        cout << p2 << endl;
    }
    return 0;
}
