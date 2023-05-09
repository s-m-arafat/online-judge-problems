#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        bool valid = true;
        vector<bool> used(n, false);
        for (int i = 0; i < n; i++) {
            if (!used[i] && a[i] + x == b[i]) {
                used[i] = true;
            } else {
                for (int j = 0; j < n; j++) {
                    if (!used[j] && a[j] + y == b[i]) {
                        used[j] = true;
                        break;
                    }
                }
                if (!used[i]) {
                    valid = false;
                    break;
                }
            }
        }
        if (valid) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
