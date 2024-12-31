#include <bits/stdc++.h>
using namespace std;
int ans = 0;
int column[8], diag1[15], diag2[15];
vector<string> chessboard;
int n = 8;

void solve(int y) {
    if (y == n) {
        ans++;
        return;
    }

    for (int x = 0; x < 8; x++) {
        if (column[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
        if (chessboard[x][y] == '*') continue;
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        solve(y+1);
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    for (int i = 0; i < 8; i++) {
        string s; cin >> s;
        chessboard.push_back(s);
    }
    solve(0);
    cout << ans ;

    return 0;
}

