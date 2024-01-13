#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<pair<int, int>> v(n);
        for (auto &x: v) cin >> x.first >> x.second;
        sort(v.begin(), v.end(), [&](pair<int, int> p1, pair<int, int>p2) {
            return p1.second < p2.second;
        });
        ordered_set st;
        ll count = 0;
        for (auto &p: v) {
            count += st.size() - st.order_of_key(p.first);
            st.insert(p.first);
        }        
        cout << count << '\n';
    }
    return 0;
}