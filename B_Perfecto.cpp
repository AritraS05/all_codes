#include <bits/stdc++.h>
using namespace std;

#define int long long
using pii = pair<int, int>;

bool isPerfectSquare(int n) {
    if (n < 0) return false;
    int res = static_cast<int>(sqrt(n));
    return (res * res == n);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << -1 << "\n";
            continue;
        }
        else if(isPerfectSquare(n * (n + 1) / 2)){
            cout<<-1<<endl;
        }
        else{
            deque<int> res;
            for (int i = 1; i <=n; i++) {
                res.push_back(n+1-i);
            }
            int sum = 0;
            while (!res.empty()) {
                bool flag = true;
                for (auto it = res.begin(); it != res.end(); ++it) {
                    int temp = sum + *it;
                    if (!isPerfectSquare(temp)) {
                        sum += *it;
                        cout<<*it<<" ";
                        res.erase(it);
                        flag = false;
                        break;
                    }
                }
                if (flag){
                    break;
                }
            }
            cout<<endl;
        }
    }

    return 0;
}
