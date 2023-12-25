#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        int count0 = 0, countp = 0, countn = 0;
        for (auto &x: v) {
            cin >> x;
            if (x == 0) count0++;
            if (x > 0) countp++;
            if (x < 0) countn++;
        }
        if (count0) { 
            cout << 0 << '\n';
            continue;
        }
        else if (countp == n) {
            cout << 1 << '\n';
            cout << 1 << ' ' << 0 << '\n';
        }
        else if (countn % 2) {
            cout << 0 << '\n';
        }
        else {
            cout << 1 << '\n';
            cout << 1 << ' ' << 0 << '\n';
        }
    }

    return 0;
}