#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    bool divisible = false;
    vector<int> mods(k, 0); // To track mod counts

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % k == 0) divisible = true; // If any number is already divisible by k
        mods[a[i] % k]++; // Count frequency of each remainder
    }

    if (divisible) {
        cout << 0 << endl;
        return;
    }

    int min_operations = LLONG_MAX;
    for (int rem = 1; rem < k; rem++) {
        if (mods[rem] > 0) {
            min_operations = min(min_operations, (k - rem) % k);
        }
    }
    bool flag = false;
   if(k == 4){
    int count = 0;
    for(int i = 0; i<n; i++){
        if(a[i]%2 == 0){
            count++;
        }
        else{
            if((a[i]+1)%4 == 0){
                flag = true;
            }
        }
    }
    min_operations = max(0LL, 2LL-count);
   }
   if(flag == true){
        min_operations = min(min_operations, 1LL);
   }
    cout << min_operations << endl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
