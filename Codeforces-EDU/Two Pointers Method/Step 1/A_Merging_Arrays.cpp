#include <bits/stdc++.h> 
using namespace std;

vector<int> a; int n1;
vector<int> b; int n2;
void solve()
{
    int i = 0, j = 0;
    while (i < n1 || j < n2)
    {
        if (j == n2 || (i < n1 && a[i] < b[j]))
        {
            cout << a[i] << " ";
            i++;
        }
        else 
        {
            cout << b[j] << " ";
            j++;
        }
    }
}
int32_t main()
{
    cin >> n1;
    cin >> n2;
    a.resize(n1); b.resize(n2);
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    solve();
    cout << '\n';
}