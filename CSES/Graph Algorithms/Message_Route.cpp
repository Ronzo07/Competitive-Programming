#include <bits/stdc++.h>
using namespace std;

// Dijkstra if we had weighted edges, however BFS - a special case of dijkstra - works perfectly
void solveBFS(vector<vector<int>> & G, int n) {
    vector<bool> visited(n + 1, false);
    queue<int> q;
    vector<int> parent(n + 1, 0);
    q.push(1);
    visited[1] = true;
    bool reached = false;
    while (q.size()) {
        int u = q.front();
        if (u == n) {reached = true; break;};
        q.pop();
        for (int v: G[u]) {
            if (!visited[v]) {
                parent[v] = u;
                visited[v] = true;
                q.push(v);
            }
        }
    }
    if (reached) {
        vector<int> path;
        int p = n;
        while (p != 0) {
            path.push_back(p);
            p = parent[p];
        }
        cout << path.size() << '\n';
        for (int i = path.size() - 1; i >= 0; i--) {
            cout << path[i] << ' ';
        }
    }
    if (!reached) cout << "IMPOSSIBLE";
}

int main() {
    // 1-indexed solution, undericted Graph
    int n, m; cin >> n >> m;
    vector<vector<int>> G(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    solveBFS(G, n);
    return 0;
}