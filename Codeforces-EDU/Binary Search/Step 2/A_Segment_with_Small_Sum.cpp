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
    int l = 0, ans = 0;
    for (int r = 0; r < n; r++) {
        sum += v[r];
        while (sum > s) {
            sum -= v[l];
            l++;
        }
        ans = max(r - l + 1, ans);
    }
    cout << ans << '\n';
    return 0;
}