#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll y, x; cin >> y >> x; // y is the row, x is the column so I permutated them 
        if  (x == y) cout << x * x - x + 1 << '\n';
        else 
        {
            if (x > y)
            {
                if (x % 2 == 0) // We will --
                {
                    cout << x * x - x + 1 - x + y<< '\n';
                }
                else cout << x * x - x + 1 + x - y<< '\n';
            }
            else if (x < y)
            {
                if (y % 2 == 0) // We will also substract
                {
                    cout << y * y - y + 1 + y - x << '\n';
                }
                else cout << y * y - y + 1 - y + x << '\n';
            }
        }
    }
    return 0;
}