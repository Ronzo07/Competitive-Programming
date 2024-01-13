#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isVowel(char c) {
    return c == 'a' || c == 'e';
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        string s; cin >> s;
        int p = 0;
        while (p < n) {
            if (abs(p - n) <= 3) {
                for (int i = p; i < n; i++) cout << s[i];
                break;
            }
            else if (!isVowel(s[p + 3])) {
                cout << s[p] << s[p+1] << s[p + 2] << '.';
                p+=3;
            } else {
                cout << s[p] << s[p + 1] << '.';
                p+=2;
            }
        }
        cout << '\n';        
    }
    return 0;
}