#include <iostream>
#include <string>
int visited[7][7];
int ans = 0;
std::string s;

void solve(int row, int col, int idx) {
    if (row == 6 && col == 0 && idx < 48) return;
 
    if (idx == 48) {
        if (row == 6 && col == 0) ans++;
        return;
    }
 
    if (row < 0 || col < 0 || row >= 7 || col >= 7 || visited[row][col]) return;
 
    if ((row > 0 && row < 6 && !visited[row-1][col] && !visited[row+1][col]) &&
        ((col == 0 || visited[row][col-1]) && (col == 6 || visited[row][col+1]))) return;
    
    if ((col > 0 && col < 6 && !visited[row][col-1] && !visited[row][col+1]) &&
        ((row == 0 || visited[row-1][col]) && (row == 6 || visited[row+1][col]))) return;
    
    visited[row][col] = true;
 
    if (s[idx] == '?') {
        solve(row-1, col, idx+1);  // Up
        solve(row+1, col, idx+1);  // Down
        solve(row, col+1, idx+1);  // Right
        solve(row, col-1, idx+1);  // Left
    } else {
        if (s[idx] == 'U') solve(row-1, col, idx+1);
        if (s[idx] == 'D') solve(row+1, col, idx+1);
        if (s[idx] == 'R') solve(row, col+1, idx+1);
        if (s[idx] == 'L') solve(row, col-1, idx+1);
    }
    
    visited[row][col] = false;
}
 
int_fast32_t main() {
    std::cin.tie(0)->sync_with_stdio(0);
    std::cin >> s;    
    solve(0, 0, 0);
    std::cout << ans;
    return 0;
}