#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<bool> taken(26, false);
        ll ans = 0;
        ll val = n;
        for (int i = 0; i < n; i++) {
            int idx = s[i] - 'a';
            if (taken[idx] == false) {
                ans += val;
            }
            taken[idx] = true;
            val--;
        }
        cout << ans << '\n';
    }

    return 0;
}