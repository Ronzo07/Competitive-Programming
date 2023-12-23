#include <iostream>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;


int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    multiset<ll> s;
    
    for (auto &x: v) cin >> x;
    ll l = 0, ans = 0;
    for (ll r = 0; r < n; r++) {
        s.insert(v[r]);
        while (*s.rbegin() - *s.begin() > k) {
            s.erase(s.find(v[l]));
            l++;
        }
        ans += r - l + 1;
    }
    cout << ans << '\n';
    return 0;
}