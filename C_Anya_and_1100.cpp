#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        set<int> cmp;
        for (int i = 0; i <= n - 4; i++) {
            if (s.substr(i, 4) == "1100") {
                cmp.insert(i);
            }
        }
        int q;
        cin >> q;
        while (q--) {
            int i;char v;
            cin >> i >> v;
            i-=1;
            int p1 = max(0, i - 3),p2 = min(n - 4, i);
            for (int j = p1; j <= p2; j++) {
                if (s.substr(j, 4) == "1100") {
                    cmp.erase(j);
                }
            }
            s[i] = v;
            for (int j = p1; j <= p2; j++) {
                if (s.substr(j, 4) == "1100") {
                    cmp.insert(j);
                }
            }
            if (cmp.size() != 0) {
                cout << "YES" << endl;
            }
            else {
                 cout << "NO" << endl;
            }

        }
    }
    return 0;
}