#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m;
vector<vector<int>> G;

void dfs(int v, vector<bool> &visited) {
    visited[v] = true;
    for (int adj: G[v]) {
        if (!visited[adj]) {
            dfs(adj, visited);
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n; cin >> m;
    G.resize(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    vector<bool> visited(n + 1, false);
    int countTree = 0;
    vector<int> cities;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i, visited);
            countTree++;
            cities.push_back(i);
        }
    }
    cout << countTree - 1 << '\n';
    for (int i = 0; i < cities.size() - 1; i++) {
        cout << cities[i + 1] << ' ' << cities[i] << '\n';
    }

    return 0;
}