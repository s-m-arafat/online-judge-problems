// Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vll> vvl;
typedef vector<vi> vvi;

#define nl '\n'
#define get cin >>
// vectors
#define allv(a) a.begin(), a.end()
#define pb push_back
//
#define arrIn(a, n)             \
    for (int x = 0; x < n; x++) \
    cin >> a[x]
#define arrOut(a, n)            \
    for (int x = 0; x < n; x++) \
    cout << a[x] << endl
// loops
#define loop(x, n) for (int x = 0; x < n; x++)
#define loopn(x, a, n) for (int x = a; x <= n; x++)
#define loopr(x, n) for (int x = n; x >= 0; x--)
// cout
#define print(x) cout << x << endl
#define prnt(x) cout << x

void soln()
{
    int n, m;
    cin >> n;
    vi a(n);
    arrIn(a, n);
    sort(allv(a));
    int mx = 1e18, mx1 = 1e18;
    loopn(i, 1, n - 2)
    {
        mx = min(mx, abs(a[0] - a[i]));
        mx1 = min(mx1, abs(a[n - 1] - a[i]));
    }
    cout<<abs(a[n-1]-a[0])+max(mx,mx1)<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tests;
    cin >> tests;
    while (tests--)
        soln();
    return 0;
}
