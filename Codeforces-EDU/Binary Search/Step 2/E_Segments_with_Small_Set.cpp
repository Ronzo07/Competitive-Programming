#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
typedef long long ll;

unordered_map<int, int> mp;
ll c = 0;

void add(int x) {
    if (mp.count(x) == 0) {
        mp[x] = 1;
        c++;
    }
    else mp[x] += 1;
}

void remove(int x) {
    if (mp[x] == 1) {
        mp.erase(x);
        c--;
    }
    else mp[x]--;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &x: v) cin >> x;
    ll l = 0, ans = 0;
    for (int r = 0; r < n; r++) {
        add(v[r]);
        while (c > k) {
            remove(v[l]);
            l++;
        }
        ans += r - l + 1;
    }
    cout << ans << '\n';
    return 0;
}