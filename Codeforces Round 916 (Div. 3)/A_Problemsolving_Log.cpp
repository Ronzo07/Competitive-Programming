#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <climits>
#include <numeric>
#include <bitset>

using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int>v(26, 0);
        for (int i = 0; i < n; i++) {
            v[s[i] - 'A']+=1;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (v[i] >= i + 1) ans++;
        }
        cout << ans << '\n';
        
    }

    return 0;
}