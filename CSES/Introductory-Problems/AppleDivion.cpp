#include <iostream>
#include <vector>
using namespace std;
#define ll long long

ll difference(ll *arr, ll curSum, ll totalSum, ll n)
{
    if (n == 0) return abs((totalSum - curSum) - curSum); // When reaching the end (base case), the difference between the two will following this intuitive formula
    
    return min(difference(arr, curSum, totalSum, n - 1), difference(arr, curSum + arr[n], totalSum, n - 1)); // Here either we take the element and modify the curent sumor we don't, but then we take the min
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    ll *arr = new ll[n];
    ll cSum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        cSum += arr[i];
    }
    cout << difference(arr, 0, cSum, n - 1) << '\n';
    

    return 0;
}
