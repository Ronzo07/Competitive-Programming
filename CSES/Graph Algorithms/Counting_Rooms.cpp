#include <bits/stdc++.h>
using namespace std;
const int MOD = pow(10, 9) + 7;
void dfs(vector<vector<char>> & v, int i, int j) {
    int n = v.size();
    int m = v[0].size();
    if (i < 0 || j < 0 || i >= n || j >= m || v[i][j] != '.') return;
    v[i][j] = '#';
    dfs(v, i - 1, j);
    dfs(v, i + 1, j);
    dfs(v, i, j - 1);
    dfs(v, i, j + 1);
}

int solve(vector<vector<char>> & v, int n, int m) {
    int counter = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '.') {
                counter++;
                dfs(v, i, j);
            }
        }
    }
    return counter;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> matrix(n);
    for (auto &x: matrix) {
        string s; cin >> s;
        vector<char> v(m);
        for (int i = 0; i < m; i++) {
            v[i] = s[i];
        }
        x = v;
    }

    cout << solve(matrix, n, m);
    return 0;
}
