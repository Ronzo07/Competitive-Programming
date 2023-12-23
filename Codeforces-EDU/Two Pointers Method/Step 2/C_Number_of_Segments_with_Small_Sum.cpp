#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
typedef long long ll;

int main() {
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> v(n);
    for (auto &x: v) cin >> x;
    ll sum = 0;
    ll l = 0, ans = 0;
    for (int r = 0; r < n; r++) {
        sum += v[r];
        while (sum > s) {
            sum -= v[l];
            l++;
        }
        ans += (ll)r - l + 1;
    }
    cout << ans << '\n';
    return 0;
}