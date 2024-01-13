#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> solve(const vector<int>&v) {
    int p = 0;
    vector<int> tmp;
    int n = v.size();
    while (p < n) {
        // cout << "p" << p << '\n';
        if (p < n - 1 && abs(v[p] - v[p + 1])) {
            tmp.push_back(min(v[p], v[p + 1]));
            p += 2;
        } else { 
            tmp.push_back(v[p]); 
            p += 1;
        }
    }
    return tmp;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (auto &x: v) cin >> x;
        vector<int> tmp = solve(v);
        bool ok = true;
        while (tmp.size() > 2 && ok) {
            vector<int> new_tmp = solve(tmp);
            if (tmp == new_tmp) {ok = false; break;}
            tmp = new_tmp;
        }
        if (tmp[0] + tmp[1] == 1 && ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}