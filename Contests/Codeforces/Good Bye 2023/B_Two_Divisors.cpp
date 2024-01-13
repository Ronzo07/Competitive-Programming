#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while (t--) {
        ll a, b; cin >> a >> b;
        ll ans = lcm(a, b);
        if (ans != b) cout << ans << '\n';
        else cout << ans * ll(b/a) << '\n';
    }

    return 0;
}