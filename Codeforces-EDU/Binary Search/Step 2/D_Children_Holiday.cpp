#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m, nn;
vector<vector<ll>> v;

bool fs(ll time) {
    ll nb_of_ballouns = 0;
    for (auto x: v) {
        nb_of_ballouns += x[1] * (time / (x[0] * x[1] + x[2]));
        ll remains = time % (x[0] * x[1] + x[2]);
        if (remains >= (x[0] * x[1])) nb_of_ballouns += x[1];
        else nb_of_ballouns += (remains / x[0]);
    }
    return nb_of_ballouns >= m;
}

void search() {
    ll l = -1, h = 2e9 + 1, ans = 0;
    while (l + 1 < h) {
        ll mid = (l + h) / 2;
        if (fs(mid)) {
            ans = mid;
            h = mid;
        } else l = mid;
    } 
    ans = h;
    cout << ans << '\n';
    ll counter = 0;
    for (auto &x: v) {
        ll ball = x[1] * (ans / (x[0] * x[1] + x[2]));
        ll remains = ans % (x[0] * x[1] + x[2]);
        if (remains >= (x[0] * x[1])) ball += x[1];
        else ball += (remains / x[0]);
        cout << min(ball, m) << ' ';
        m -= min(ball, m);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> m >> nn;
    for (ll i = 0; i < nn; i++) {
        vector<ll> tmp(3);
        for (auto &x: tmp) cin >> x;
        v.push_back(tmp);
    }
    search();
    
    return 0;
}