#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
const int MAX_TIME = 5000; 
int n, m, k;
vector<pair<int, int>> p, c, m1;

vector<int> solve(const vector<pair<int, int>>& questions) {
    vector<int> dp(MAX_TIME + 1, 0);
    for (auto q : questions) {
        for (int i = MAX_TIME; i >= q.second; --i) {
            dp[i] = max(dp[i], dp[i - q.second] + q.first);
        }
    }
    return dp;
}

int32_t main(){
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i) {
        int a, t;
        cin >> a >> t;
        p.emplace_back(a, t);
    }
    for (int i = 0; i < m; ++i) {
        int a, t;
        cin >> a >> t;
        c.emplace_back(a, t);
    }
    for (int i = 0; i < k; ++i) {
        int a, t;
        cin >> a >> t;
        m1.emplace_back(a, t);
    }
    vector<int> dp1 = solve(p);
    vector<int> dp2 = solve(c);
    vector<int> dp3 = solve(m1);

    vector<int> best_p(MAX_TIME + 1, 0), best_c(MAX_TIME + 1, 0), best_m(MAX_TIME + 1, 0);
    for (int i = 1; i <= MAX_TIME; ++i) {
        best_p[i] = max(best_p[i - 1], dp1[i]);
        best_c[i] = max(best_c[i - 1], dp2[i]);
        best_m[i] = max(best_m[i - 1], dp3[i]);
    }

    int q;
    cin >> q;
    while (q--) {
        int T;
        cin >> T;
        int ans = 0;
        int maxT = min(T, MAX_TIME);
        for (int tp = 0; tp <= maxT; ++tp) {
            for (int tc = 0; tc <= maxT - tp; ++tc) {
                int tm = maxT - tp - tc;
                int mp = best_p[tp];
                int mc = best_c[tc];
                int mm = best_m[tm];
                ans = max(ans, min({mp, mc, mm}));
            }
        }
        cout << ans << ' ';
    }
    cout << endl;
    return 0;
}