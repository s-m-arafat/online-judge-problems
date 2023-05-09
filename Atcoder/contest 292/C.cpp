#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long ans = 0;
    for (int a = 1; a <= sqrt(n); ++a) {
        if (n % a == 0) {
            int b = n / a;
            for (int c = 1; c <= sqrt(n); ++c) {
                if (n % c == 0) {
                    int d = n / c;
                    if ((a * b + c * d) == n) {
                        ++ans;
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
