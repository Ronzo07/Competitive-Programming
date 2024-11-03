#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m; 
    cin >> n >> m;
    
    // 1-indexed
    vector<vector<int>> G(n + 1);

    while (m--) {                
        int u, v; 
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    vector<int> color(n+1, 0);
    bool impossible = false;

    // BFS traversal - 2 coloring problem
    for (int i = 1; i <= n; i++) {
        if (color[i] == 0) {
            color[i] = 1;
            queue<int> q;
            q.push(i);
            while (q.size()) {
                int u = q.front();
                q.pop();
                for (int v: G[u]) {
                    if (color[v] == color[u]) {
                        cout << "IMPOSSIBLE\n";
                        return 0;
                    }
                    else if (color[v] == 0) {
                        color[v] = 3 - color[u];
                        q.push(v);
                    }
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << color[i] << ' ';
    }
    cout << '\n';
                
    return 0;
}