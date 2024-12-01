#include <bits/stdc++.h>
using namespace std;

// Function to check if it is possible to construct the tree
bool can_build_tree(int n, int d, int l) {
    if (l < 2 || l > n || d >= n) 
        return false;

    int path_nodes = d + 1;
    if (path_nodes > n) 
        return false;
    
    if (d == 1)
        return (l == 2 || l == n);
    
    int rem_nodes = n - path_nodes;
    return rem_nodes >= (l - 2);
}

// Function to construct the tree and return the edges
vector<pair<int, int>> construct_tree(int n, int d, int l) {
    if (!can_build_tree(n, d, l))
        return {{-1, -1}};
    
    vector<pair<int, int>> edges;
    
    if (d == 2) {
        for (int i = 2; i <= n; ++i) 
            edges.emplace_back(1, i);
    } else {
        for (int i = 1; i <= d; ++i)
            edges.emplace_back(i, i + 1);

        int curr_node = d + 2;
        int leaves_to_add = l - 2;

        while (leaves_to_add > 0 && curr_node <= n) {
            edges.emplace_back(2, curr_node);
            curr_node++;
            leaves_to_add--;
        }
        
        while (curr_node <= n) {
            edges.emplace_back(2, curr_node);
            curr_node++;
        }
    }
    
    return edges;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, d, l;
        cin >> n >> d >> l;

        vector<pair<int, int>> result = construct_tree(n, d, l);
        
        if (result.size() == 1 && result[0].first == -1) {
            cout << -1 << endl;
        } else {
            for (auto &[a, b] : result) 
                cout << a << " " << b << endl;
        }
    }
    
    return 0;
}
