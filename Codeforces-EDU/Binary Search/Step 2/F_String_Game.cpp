#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool fs(string &t, string &p, int &n, vector<int> &v, int &mid) {
    string s = "";
    vector<bool> b(n, true);
    for (int i = 0; i < mid; i++) {
        b[v[i] - 1] = false; 
    }
    for (int i = 0; i < n; i++) {
        if (b[i]) s += t[i];
    }
    int idx = 0, counter = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == p[idx]) {
            counter++;
        }
    }
    return counter == p.size();
}

int search(string &t, string &p, int &n, vector<int> &v) {
    int l = -1, h = n, ans = -1;
    while (l <= h) {
        int mid = (l + h) / 2;
        if (fs(t, p, n, v, mid)) {
            ans = mid;
            l = mid + 1;
        } else h = mid - 1;
    } 
    return ans;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string t, p; cin >> t >> p;
    int n = t.size();
    vector<int> v(n);
    for (auto &x: v) cin >> x;
    cout << search(t, p, n, v);
    return 0;
}