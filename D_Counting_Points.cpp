#include <bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using pii = pair<int, int>;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> x(n), r(n);
        
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> r[i];
        }

        map<int, vector<pii>> a;
        for (int i = 0; i < n; i++) {
            int c = x[i];
            int ra = r[i] * r[i];
            
            for (int j = c - r[i]; j <= c + r[i]; j++) {
                if ((ra - (j - c) * (j - c)) < 0) continue;
                a[j].push_back({j - (int)floor(sqrt(ra - (j - c) * (j - c))), j + (int)floor(sqrt(ra - (j - c) * (j - c)))});
            }
        }

        int res = 0;
        for (auto &it : a) {
            vector<pii> aa = it.second;
            sort(aa.begin(), aa.end());
            stack<pii> st;
            st.push(aa[0]);
            for(int i = 1; i<aa.size(); i++){
                pii ans = st.top();
                if (aa[i].first > ans.second + 1) {
                    res += ans.second - ans.first + 1;
                    st.pop();
                    st.push(aa[i]);
                } 
                else {
                    st.top().second = max(ans.second, aa[i].second);
                }
            }
            res += st.top().second - st.top().first + 1;
        }

        cout << res << endl;
    }

    return 0;
}
