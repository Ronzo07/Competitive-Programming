#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(vector<ll> &v, ll n) {
    ll sum = 0;
    set<ll> sumSet;
    for (ll i = 0; i < n; i++) {
        sum += v[i];
        if (sum == 0 || sumSet.find(sum) != sumSet.end())
            return true;
        sumSet.insert(sum);
    }
    return false;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            ll x; cin >> x;
            if (i % 2 == 0) v[i] = x;
            else v[i] = -x;
        }
        bool ok = check(v, n);
        if (ok) cout << "YES\n";
        else cout << "NO\n";      
    }
    return 0;
}