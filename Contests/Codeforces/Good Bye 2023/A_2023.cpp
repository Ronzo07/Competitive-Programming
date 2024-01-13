#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<ll> v(n);
        ll prod = 1;
        for (auto &x: v) {
            cin >> x;
            prod *= x;
        } 
        if (2023 % prod == 0) {
            cout << "YES\n";
            ll ans = 2023 / prod;
            cout << ans << ' ';
            for (int i = 1; i < k; i++) cout << 1 << ' ';
            cout << '\n';
        } else cout << "NO\n";
    }
    return 0;
}