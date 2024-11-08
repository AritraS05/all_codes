#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
struct pair_hash {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ (hash2 << 1); 
    }
};
int32_t main(){
    int t;
    cin>>t;
    while(t--){
       int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        unordered_map<pair<int, int>, int, pair_hash> cnt;
        int ans = 0;
        for (int e : a) {
            int xx = e % x;
            int yy = e % y;
            ans += cnt[{(x - xx) % x, yy}];
            cnt[{xx, yy}]++;
        }
        cout << ans << endl;
    }
    return 0;
}


