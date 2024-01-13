#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int countp = 0, countn = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '+') countp++;
            else countn++;
        }
        cout << abs(countp - countn) << '\n';
        
    }

    return 0;
}