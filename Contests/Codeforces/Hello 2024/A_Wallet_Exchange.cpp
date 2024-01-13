#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while (t--) {
        ll a, b; cin >> a >> b;
        ll diff = abs(a - b);
        ll mini = min(a, b);
        if ((diff) % 2 == 0) cout << "Bob\n";
        else cout << "Alice\n";

        
    }

    return 0;
}