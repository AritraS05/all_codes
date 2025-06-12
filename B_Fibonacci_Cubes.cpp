#include<bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using pii = pair<int, int>;

vector<int> generate_fibonacci(int n) {
    vector<int> fib(n + 2, 0);
    fib[1] = 1;
    fib[2] = 1;
    for (int i = 3; i <= n + 1; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> fib = generate_fibonacci(n + 1);

        for (int i = 0; i < m; i++) {
            int d[3];
            for (int j = 0; j < 3; j++) {
                cin >> d[j];
            }
            sort(d, d + 3);

            if (d[0] >= fib[n] && d[2] >= fib[n+1]) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}