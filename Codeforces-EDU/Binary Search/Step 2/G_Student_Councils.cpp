#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k;
vector<ll> v;

bool fs(ll x) {
    ll count = 0;
    for (int i = 0; i < n; i++) {
        count += min(v[i], x);
    }
    return count >= x * k;
}

ll search() {
    ll l = -1, h = 1e18, ans = 0;
    while (l <= h) {
        ll mid = (l + h) / 2;
        if (fs(mid)) {
            ans = mid;
            l = mid + 1;
        } else h = mid - 1;
    } 
    return ans;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> k >> n;
    v.resize(n);
    for (auto &x: v) cin >> x;
    cout << search();
    return 0;
}