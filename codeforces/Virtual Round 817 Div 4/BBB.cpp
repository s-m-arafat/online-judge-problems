#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> h(n), p(n);
        for (int i = 0; i < n; i++) cin >> h[i];
        for (int i = 0; i < n; i++) cin >> p[i];
        bool all_monsters_dead = true;
        while (k > 0 && all_monsters_dead) {
            int min_power = *min_element(p.begin(), p.end());
            k -= min_power;
            all_monsters_dead = false;
            for (int i = 0; i < n; i++) {
                h[i] -= k;
                if (h[i] > 0) {
                    all_monsters_dead = true;
                }
            }
        }
        cout << (all_monsters_dead ? "YES" : "NO") << endl;
    }
    return 0;
}
