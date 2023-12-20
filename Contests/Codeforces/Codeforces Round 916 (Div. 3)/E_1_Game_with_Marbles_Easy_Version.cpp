#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<ll> a(n), b(n);
    for (auto &x: a) cin >> x;
    for (auto &x: b) cin >> x;
    bool turn = 1, valid = true;
    while (true) {
        valid = false;
        for (int i = 0; i < n; i++) {
            if (a[i] != 0 && b[i] != 0) {
                valid = true;
                break;
            }
        }
        if (!valid) break;

        if (turn) {
            ll max1 = 0;
            int idx1 = -1;
            for (int i = 0; i < n; i++) {
                if (a[i] != 0 && b[i] != 0) {
                    ll gain = a[i] + b[i];
                    if (gain > max1) {
                        max1 = gain;
                        idx1 = i;
                    }
                }
            }
            a[idx1]--;
            b[idx1] = 0;
        } else {
            ll max1 = 0;
            int idx1 = -1;
            for (int i = 0; i < n; i++) {
                if (a[i] != 0 && b[i] != 0) {
                    ll gain = a[i] + b[i];
                    if (gain > max1) {
                        max1 = gain;
                        idx1 = i;
                    }
                }
            }
            b[idx1]--;
            a[idx1] = 0;
        }
        turn = !turn;
    }


        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ans += a[i] - b[i];
        }
        cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}