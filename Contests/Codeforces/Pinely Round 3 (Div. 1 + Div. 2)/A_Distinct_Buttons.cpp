#include <vector>
#include<iostream>

using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int countpx = 0, countpy = 0, countny = 0, countnx = 0;
        for (int i = 0; i < n; i++) {
            int x, y; cin >> x >> y;
            if (y > 0) countpy++;
            if (y < 0) countny++;
            if (x > 0) countpx++;
            if (x < 0) countnx++;
        }
        bool ok = true;
        if (countpy && countny && countnx && countpx) ok = false;
       
        if (ok) cout << "YES\n";
        else cout << "NO\n";        
    }
    return 0;
}