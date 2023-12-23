#include <bits/stdc++.h> 
using namespace std;
vector<long long> a; int n1;
vector<long long> b; int n2;
void solve()
{
    int i = 0, j = 0;
    long long count = 0;
    long long count1, count2;
    while (i < n1 || j < n2)
    {
        if (a[i] == b[j])
        {
            count1 = 1, count2 = 1;
            while(a[i] == a[i + 1] || b[j] == b[j + 1])
            {
                if (a[i] == a[i + 1] && i <= n1) {count1++; i++;}
                if (b[j] == b[j + 1] && j <= n2) {count2++; j++;} 
            }
            count += (count1 * count2);   
        }

        if (a[i] > b[j])
            j++;
        
        else i++;
    }
    cout << count << '\n';
}
int32_t main()
{
    cin >> n1;
    cin >> n2;
    a.resize(n1 + 1); b.resize(n2 + 1);
    a[n1] = INFINITY;
    b[n2] = INFINITY+1;
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    solve();
}