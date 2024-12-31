#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ll foo = pow(i, 2);
        // Solved with the help: https://japlslounge.com/posts/cses/two_knights/1.htm
        cout << (foo) * (foo - 1) / 2 - 4 * (i - 1) * (i - 2);
        cout << '\n';
    }
    return 0;
}