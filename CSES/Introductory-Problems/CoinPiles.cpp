#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while (t--)
    {
        long long a, b; cin >> a >> b;
        long long foo;
        if (a > b)
        {
            foo = a - b;
            a -= foo * 2;
            b -= foo * 1;
        }
        else 
        {
            foo = b - a;
            b -= foo * 2;
            a -= foo * 1;
        }
        if (a % 3 == 0 && b % 3 == 0 && a >= 0 && b >= 0) cout << "YES\n";
        else cout << "NO\n";


    }
    
    return 0;
}