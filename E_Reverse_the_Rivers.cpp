#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<vector<int>> res(k + 1, vector<int>(1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= k; ++j) {
            int temp;
            cin >> temp;
            temp = temp | res[j].back(); 
            res[j].push_back(temp);
        }
    }

    while (q--) {
        int m;
        cin >> m;
        vector<pair<int, int>> res1, res2;
        for (int i = 0; i < m; ++i) {
            char ch;
            int r, c;
            cin >> r >> ch >> c;
            if (ch == '<') {
                res1.emplace_back(r, c);
            } else {
                res2.emplace_back(r, c);
            }
        }
        int idx = 1;
        bool possible = false;
        for (pair<int,int>  it : res2) {
            auto temp = upper_bound(res[it.first].begin(), res[it.first].end(), it.second);
            idx = max(idx, int(temp - res[it.first].begin()));
        }
        if (idx > n) {
            cout << -1 << "\n";
            continue;
        }
        for (pair<int,int> it : res1) {
            if (res[it.first][idx] >= it.second) {
                possible = true;
                break;
            }
        }
        if(possible == true){
            cout<<-1<<endl;
        }
        else{
            cout<<idx<<endl;
        }
    }

    return 0;
}