#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;
typedef long long ll;

// Using segment tree for range queries gcd
struct segtree {
    vector<ll> seg;
    ll n;
    segtree(ll n_) : n(n_) {
        seg.resize(n * 4);
    }

    ll build(ll l, ll r, ll idx, vector<ll>& v) {
        if (l == r) {
            seg[idx] = v[l];
            return seg[idx];
        }
        ll mid = (l + r) / 2;
        ll left = build(l, mid, 2 * idx + 1, v);
        ll right = build(mid + 1, r, 2 * idx + 2, v);
        seg[idx] = gcd(left, right);
        return seg[idx];
    }


    ll query (ll l, ll r, ll l1, ll r1, ll in) {
        if (l1 <= l && r <= r1) return seg[in];
        if (l > r1 || r < l1) return 0;
        ll mid = (l + r) / 2;
        return gcd(query(l, mid, l1, r1, 2 * in + 1),
                   query(mid + 1, r, l1, r1, 2 * in + 2));
    }
};

int main() {
    ll n; cin >> n;
    vector<ll> v(n);
    for (auto &x: v) cin >> x;
    segtree st(n);
    st.build(0, n - 1, 0, v);
    ll j = 0;
    ll ans = LLONG_MAX;
    ll i = 0;
    while (i < n) {
        while (j < n and st.query(0, n - 1, i, j, 0) != 1)
            j++;
        if (j == n)
            break; 
        ans = min((j - i + 1), ans);
        i++;
        j = max(j, i);
    }
    if  (ans == LLONG_MAX) cout << -1;
    else cout << ans << '\n';
    return 0;
}