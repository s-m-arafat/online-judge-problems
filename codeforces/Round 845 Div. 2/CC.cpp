#include <iostream>
using namespace std;

const int N = 1e5 + 5;

int m, n;
int a[N];
int cnt[N];

int main()
{
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= m; i++) {
        cnt[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i] % j == 0) {
                cnt[j]++;
            }
        }
    }
    for (int i = 1; i <= m; i++) {
        cout << i << ": " << cnt[i] << endl;
    }
    return 0;
}
