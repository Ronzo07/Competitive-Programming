#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while (t--) {
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < 3; i++) {
            string s; cin >> s;
            for (char c: s) {
                if (c == 'A') a++;
                if (c == 'B') b++;
                if (c == 'C') c++;
            }
        }
        if (a != 3) cout << "A\n";
        else if (b != 3) cout << "B\n";
        else cout << "C\n";   
    }
    return 0;
}