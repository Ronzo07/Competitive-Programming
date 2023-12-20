#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <climits>
#include <numeric>
#include <bitset>

using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int counter = 0;
        for (int i = 0; i < k &&counter < n; i++) {
            cout << i + 1 << ' ';
            counter++;
        }
        for (int i = n; i >= k && counter < n; i--) {
            cout << i << ' ';
            counter++;
        }
        cout << '\n';
        
        
    }

    return 0;
}