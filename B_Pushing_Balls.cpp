#include <bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> res(n);
        for (int i = 0; i < n; i++) {
            cin >> res[i];
        }
        vector<vector<int>> ans(n, vector<int>(m, 0));
        /*
        bool flag = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (res[i][j] == '1') {
                    bool yes = false;
                    if (i > 0 && res[i - 1][j] == '1') yes = true; // Top
                    if (i < n - 1 && res[i + 1][j] == '1') yes = true; // Bottom
                    if (j > 0 && res[i][j - 1] == '1') yes = true; // Left
                    if (j < m - 1 && res[i][j + 1] == '1') yes = true; // Right
                    if (i > 0 && j > 0 && res[i - 1][j - 1] == '1') yes = true; // Top-left
                    if (i > 0 && j < m - 1 && res[i - 1][j + 1] == '1') yes = true; // Top-right
                    if (i < n - 1 && j > 0 && res[i + 1][j - 1] == '1') yes = true; // Bottom-left
                    if (i < n - 1 && j < m - 1 && res[i + 1][j + 1] == '1') yes = true; // Bottom-right
 
                    if (!yes) {
                        flag = false;
                        break;
                    }
                }
            }
            if (!flag) {
                break;
           
        */
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (res[i][j] == '0') break;
                ans[i][j] = 1;
            }
        }
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                if (res[i][j] == '0') break;
                ans[i][j] = 1;
            }
        }
        bool flag = true;
        for (int i = 0; i < n && flag; i++) {
            for (int j = 0; j < m; j++) {
                if (res[i][j] == '1' && ans[i][j] == 0) {
                    flag = false;
                    break;
                }
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}