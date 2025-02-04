#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long rsum(const vector<vector<long long>>& grid, int row, int m) {
    long long sum = 0;
    for(int j = 0; j < m; j++) {
        sum += grid[row][j];
    }
    return sum;
}
long long csum(const vector<vector<long long>>& grid, int col, int n) {
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        sum += grid[i][col];
    }
    return sum;
}
vector<pair<int, int>> getpath(int n, int m, const string& s) {
    vector<pair<int, int>> pc;
    int currI = 0, currJ = 0;
    pc.push_back({currI, currJ});
    
    for(char p : s) {
        if(p == 'D') currI++;
        else currJ++;
        pc.push_back({currI, currJ});
    }
    return pc;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<vector<long long>> grid(n, vector<long long>(m));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
         vector<pair<int, int>> pc = getpath(n, m, s);
         
        vector<bool> rs(n, false);
        vector<bool> cu(m, false);
        for(auto& cell : pc) {
            rs[cell.first] = true;
            cu[cell.second] = true;
        }
        long long sumt = 0;
        bool found = false;
        for(int i = 0; i < n && !found; i++) {
            if(!rs[i]) {
                sumt = rsum(grid, i, m);
                found = true;
            }
        }
        for(int j = 0; j < m && !found; j++) {
            if(!cu[j]) {
                sumt = csum(grid, j, n);
                found = true;
            }
        }
        for(auto& cell : pc) {
            int i = cell.first, j = cell.second;
            long long rowSum = rsum(grid, i, m);
            grid[i][j] = sumt - rowSum;
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cout << grid[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}