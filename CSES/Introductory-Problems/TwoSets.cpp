#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main()
{
    ll n; cin >> n;
    ll summation = (n + 1) * (n) / 2;
    if (summation % 2 != 0)
    {
        cout << "NO\n";
    }
    
    else 
    {
        vector<ll> v1, v2;
        cout << "YES\n";
        ll cumSum = 0;
        for (ll i = n; i > 0; i--)
        {
            if (cumSum + i <= summation / 2) 
            {
                v1.push_back(i);
                cumSum += i;
            }
            else
            {
                v2.push_back(i);
            }
        }
        cout << v1.size() << '\n';
        for (auto &x : v1) cout << x << " ";
        cout << '\n';

        cout << v2.size() << '\n';
        for (auto &x : v2) cout << x << " ";
        cout << '\n';
    }
    return 0;
}