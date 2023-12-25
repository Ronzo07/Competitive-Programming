#include <vector>
#include<iostream>

using namespace std;
typedef long long ll;
bool check(ll k, vector<ll> &v) {
    bool ok = false;
    ll x1 = -1, x2 = -1;
    for (auto &x: v) {
        ll m = x % k;
        if (x1 == -1 || x1 == m) x1 = m;
        else if (x2 == -1 || x2 == m) x2 = m;
        else if (x1 != m && x2 != m) return false;
    }
    if (x1 == -1 || x2 == -1) return false;
    return true;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<ll> v(n);
        ll countodd = 0, counteven = 0;
        for (auto &x: v) {
            cin >> x;
            if (x % 2) countodd++;
            else counteven++;
        }  
        if (countodd && counteven) {
            cout << "2\n";
            continue;
        }
        ll x = 2;
        while (x < 1e18 + 1) {
            if (check(x, v)) {
                cout << x << '\n';
                break;
            }
            x *= 2;
        }
    }
    return 0;
}