#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q, k;
    cin >> n >> q >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        int sum = 0;
        for (int i = l; i < l + k; i++) sum += a[i];

        if (sum % k == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
