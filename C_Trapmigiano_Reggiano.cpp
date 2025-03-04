#include <bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;

void merge(vector<int>& arr, vector<int>& depth, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int i = 0; i < n2; i++) R[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (depth[L[i]] >= depth[R[j]]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void sort(vector<int>& arr, vector<int>& depth, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        sort(arr, depth, l, m);
        sort(arr, depth, m + 1, r);
        merge(arr, depth, l, m, r);
    }
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, st, en;
        cin >> n >> st >> en;
        vector<set<int>> tree(n + 1);

        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            tree[u].insert(v);
            tree[v].insert(u);
        }
    
        vector<int> depth(n + 1, -1);
        queue<int> q;
        q.push(en);
        depth[en] = 0;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int neighbor : tree[node]) {
                if (depth[neighbor] == -1) {
                    depth[neighbor] = depth[node] + 1;
                    q.push(neighbor);
                }
            }
        }
        if (depth[st] == -1) {   
            cout << "-1" << endl;
            continue;
        }

        vector<int> res(n);
        for (int i = 1; i <= n; i++) {
            res[i - 1] = i;
        }
        sort(res, depth, 0, n - 1);
        
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
