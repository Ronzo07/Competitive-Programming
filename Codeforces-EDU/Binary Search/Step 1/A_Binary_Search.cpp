#include <iostream>
using namespace std;
bool binary_search(int arr[], int k, int x) {
    int l = 0;
    int r = k - 1;
    while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == x)
            {
                return true;
            }
            else if (arr[mid] > x)
            {
                r = mid - 1;
            }
            else if (arr[mid] < x)
            {
                l = mid + 1;
            }
        }
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < k; i++) {
        int foo;
        cin >> foo;
        if (binary_search(arr, n, foo) == true) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}