#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;

vector<vector<int>> buildGraph(int n, const vector<pair<int, int>>& edges) {
    vector<vector<int>> graph(n + 1);
    for (const auto& edge : edges) {
        int u = edge.first;
        int v = edge.second;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    return graph;
}

vector<int> findPath(const vector<vector<int>>& graph, int start, int end, int n) {
    queue<int> q;
    vector<bool> visited(n + 1, false);
    vector<int> parent(n + 1, -1);

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front(); q.pop();
        if (node == end) break;

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                parent[neighbor] = node;
                q.push(neighbor);
            }
        }
    }

    if (parent[end] == -1) return {};

    vector<int> path;
    int current = end;
    while (current != start) {
        path.insert(path.begin(), current);
        current = parent[current];
    }
    path.insert(path.begin(), start);
    return path;
}

bool isValid(const vector<vector<int>>& graph, const vector<int>& shopList, int n) {
    for (int v = 1; v <= n; ++v) {
        vector<int> path = findPath(graph, 1, v, n);
        set<int> pathSet(path.begin(), path.end());
        set<int> adjacent;

        for (int u : path) {
            for (int neighbor : graph[u]) {
                adjacent.insert(neighbor);
            }
        }

        bool valid = true;
        for (int shop : shopList) {
            if (pathSet.find(shop) == pathSet.end() && adjacent.find(shop) == adjacent.end()) {
                valid = false;
                break;
            }
        }
        if (valid) return true;
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> edges;
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    vector<vector<int>> graph = buildGraph(n, edges);

    int q;
    cin >> q;
    while (q--) {
        int k;
        cin >> k;
        vector<int> shopList(k);
        for (int i = 0; i < k; ++i) {
            cin >> shopList[i];
        }

        cout << (isValid(graph, shopList, n) ? "YES" : "NO") << '\n';
    }

    return 0;
}
