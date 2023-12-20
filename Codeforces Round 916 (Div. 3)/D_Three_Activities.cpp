#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> ski(n), cine(n), game(n);
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            ski[i] = {x, i};
        }
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            cine[i] = {x, i};
        }
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            game[i] = {x, i};
        }
        sort(ski.rbegin(), ski.rend());
        sort(cine.rbegin(), cine.rend());
        sort(game.rbegin(), game.rend());

        ll maxi = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    if (ski[i].second == cine[j].second || ski[i].second == game[k].second || cine[j].second == game[k].second) continue;
                    else {
                        ll tmp = (ll) ski[i].first + cine[j].first + game[k].first;
                        maxi = max(maxi, tmp);
                    }
                }
            }
        }
        cout << maxi << '\n';
    }
    return 0;
}
