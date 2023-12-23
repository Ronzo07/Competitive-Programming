#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int bisect_right(vector<int> &v, int x){
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

int main()
{
    int n, k; cin >> n >> k;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<int> q(k);
    for (int i = 0; i < k; i++) 
    {
        cin >> q[i];  
        cout << bisect_right(v, q[i]) << '\n';
    }

    return 0;
}