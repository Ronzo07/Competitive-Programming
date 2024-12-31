#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v;
    int a = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int res = 0;
    for (int  i = 1; i < n - 1; i++)
    {
        if (v[i] != v[i - 1] + 1)
        {
            res = v[i] - 1;
            break;
        }
    }
    if (v[0] != 1) res = 1;
    else if (v[n - 2] != n) res = n;
    cout << res << '\n';
    return 0;
}