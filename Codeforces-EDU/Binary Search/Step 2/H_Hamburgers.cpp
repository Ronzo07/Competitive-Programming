#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll nb, ns, nc; 
ll pb, ps, pc; 
ll r;

bool fs(ll bb, ll bs, ll bc, ll mid) {
    ll p = mid * bb * pb + mid * bs * ps + mid * bc * pc;
    p -= (min(mid * bb, nb) * pb + min(mid * bs, ns) * ps + min(mid * bc, nc) * pc);
    if (p > r) return false;
    return true;
}

ll search(string s) {
    ll l = -1, h = r + 101, ans = 0;
    ll bb = 0, bs = 0, bc = 0;
    for (char c: s) {
        if (c == 'B') bb++;
        if (c == 'S') bs++;
        if (c == 'C') bc++;
    }

    while (l <= h) {
        ll mid = (l + h) / 2;
        if (fs(bb, bs, bc, mid)) {
            ans = mid;
            l = mid + 1;
        } else h = mid - 1;
    } 
    return ans;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s; cin >> s;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    cout << search(s);

    return 0;
}