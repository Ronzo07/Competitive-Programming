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
    int l = 0, ans = n + 1;
    for (int r = 0; r < n; r++) {
        sum += v[r];
        while (sum - v[l] >= s) {
            sum -= v[l];
            l++;
        }
        if (sum >= s)
            ans = min(r - l + 1, ans);
    }
    if (ans == n + 1) ans = -1;
    cout << ans << '\n';
    return 0;
}