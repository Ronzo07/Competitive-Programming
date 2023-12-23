#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int bisect_right(vector<int> &v, int x) {
    int l = -1, r = v.size();
    while (l + 1 < r)
    {
        int mid = (l + r) / 2;
        int i = mid;
        if (v[i] >= x)
        {
            r = mid;
        }
        else l = mid;
    }
    if (r == -1) return 0;
    if (l == v.size()) return r;
    return r + 1;
}

int bisect_left(vector<int> &v, int x) {
    int l = -1, r = v.size();
    while (l + 1 < r)
    {
        int mid = (l + r) / 2;
        int i = mid;
        if (v[i] > x)
        {
            r = mid;
        }
        else l = mid;
    }
    if (l == -1) return 0;
    if (l == v.size()) return l;
    return l + 1;
}

int main() {
    int n; cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int k; cin >> k;
    for (int i = 0; i < k; i++) {
        int a, b; cin >> a >> b;
        cout <<  bisect_left(v, b) - bisect_right(v, a) + 1 << ' ';
    }

    return 0;
}