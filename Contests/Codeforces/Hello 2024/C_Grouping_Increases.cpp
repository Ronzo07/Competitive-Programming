#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (auto &x: v) cin >> x;
        if (n == 1) {cout << "0\n"; continue;}
        int last1 =  v[0], last2 = 10e9;
        int ans = 0;
        // vector v1
        for (int i = 1; i < n; i++) {
            if (last1 == v[i] || last2 == v[i]) continue;
            if (last1 >= v[i] && last2 >= v[i]) {
                if (last1 < last2) {
                    last1 = v[i];
                } else {
                    last2 = v[i];
                }
            }
            else if (last1 < v[i] && last2 < v[i]) {
                ans++;
                if (last1 < last2) {
                    last1 = v[i];
                } else {
                    last2 = v[i];
                }
            }
            else if (last1 < v[i] && last2 > v[i]) {
                last2 = v[i];
            }
            else {
                last1 = v[i];
            }
        }
        cout << ans << '\n';
    }

    return 0;
}