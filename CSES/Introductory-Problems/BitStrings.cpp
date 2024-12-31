#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Python dealt with calc (;
    long long n; cin >> n;
    long long ans = pow(2, n);
    ans = ans % 1000000007;
    cout << ans << '\n';
    return 0;
}