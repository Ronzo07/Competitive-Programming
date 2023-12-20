#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int arr[n];
    if (n == 1) cout << 1 << '\n';
    else if (n == 4) cout << "2 4 1 3\n";
    else if (n <= 3)  cout << "NO SOLUTION\n";
    else 
    {
        int mid;
        if (n % 2 == 0) mid = n / 2;
        else mid = n / 2 + 1;
        for (int i = 0; i < mid; i++)
        {
            arr[i] = 2 * i + 1;
        }
        for (int i = mid; i < n; i++)
        {
            arr[i] = (i - mid + 1) * 2;
        }
        for (int i = 0; i < n; i++)
        cout << arr[i] << " ";        
    }
    
    return 0;
}