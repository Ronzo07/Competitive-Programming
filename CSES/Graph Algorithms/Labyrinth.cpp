#include <bits/stdc++.h>
using namespace std;
const int MOD = pow(10, 9) + 7;

bool bfs(vector<vector<char>> & v, int sx, int sy, int tx, int ty, int n, int m, map<pair<int, int>, pair<int, int>> &parent) {
    queue<pair<int, int>> q;
    vector<vector<bool>> visited(n, vector<bool> (m, false));
    q.push({sx, sy});
    visited[sx][sy] = true;
    while (q.size()) {
        pair<int, int> front = q.front();
        int i = front.first, j = front.second;
        if (i == tx && j == ty) return true;
        q.pop();
        // for adjacent, adjust the parent map, check if found
        if (i > 0 && !visited[i - 1][j] && v[i - 1][j] != '#') {
            parent[{i - 1, j}] = {i, j};
            visited[i - 1][j] = true;
            q.push({i - 1, j});
        }
        if (i < n - 1 && !visited[i + 1][j] && v[i + 1][j] != '#') {
            parent[{i + 1, j}] = {i, j};
            visited[i + 1][j] = true;
            q.push({i + 1, j});
        }
        if (j > 0 && !visited[i][j - 1] && v[i][j - 1] != '#') {
            parent[{i, j - 1}] = {i, j};
            visited[i][j - 1] = true;
            q.push({i, j - 1});
        }
        if (j < m - 1 && !visited[i][j + 1] && v[i][j + 1] != '#') {
            parent[{i, j + 1}] = {i , j};
            visited[i][j + 1] = true;
            q.push({i, j + 1});
        }        
    }
    return visited[tx][ty];
}


int main() {
    int n, m;
    cin >> n >> m;
    int sx, sy, tx, ty;
    vector<vector<char>> matrix(n);
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        vector<char> v(m);
        for (int j = 0; j < m; j++) {
            v[j] = s[j];
            if (v[j] == '.' || v[j] == '#') continue;
            if (v[j] == 'A') {
                sx = i; sy = j;
            }
            else if (v[j] == 'B') {
                tx = i; ty = j;
            }
        }
        matrix[i] = v;
    }
    map<pair<int, int>, pair<int, int>> parent;

    bool ok = bfs(matrix, sx, sy, tx, ty, n, m, parent);
    if (ok) {
        cout << "YES\n";
        string ans = "";
        int px = tx, py = ty;
        while (px != sx || py != sy) {
            // 4 cases
            int x = parent[{px, py}].first;
            int y = parent[{px, py}].second;
            if (x - 1 == px) {
                ans += 'U';
            }
            else if (x + 1 == px) {
                ans += 'D';
            }
            else if (y + 1 == py) {
                ans += 'R';
            }
            else if (y - 1 == py) {
                ans += 'L';
            }
            px = x, py = y;
        }
        reverse(ans.begin(), ans.end());
        cout << ans.size() << '\n';
        cout << ans << '\n';
    }
    else cout << "NO\n";
    return 0;
}