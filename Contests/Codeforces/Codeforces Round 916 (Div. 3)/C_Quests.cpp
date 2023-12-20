#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<ll> a(n), b(n);
        int prev = 0;
        for (int i = 0; i < n; ++i) {
            ll x; cin >> x;
            a[i] = x + prev;
            prev = a[i];
        }
        int maxi = 0;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            maxi = max(x, maxi);
            b[i] = maxi;
        }
        ll ans = 0;
        for (int i = 0; i < min(n, k); i++) {
            ll tmp = a[i] + (k - i - 1) * b[i];
            ans = max(tmp, ans);
        }
        cout << ans << '\n';

      
       

    }

    return 0;
}
