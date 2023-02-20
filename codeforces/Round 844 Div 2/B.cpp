// Auth:Shakil Mahmud Arafat -arft666, AUST, Dept. of EEE

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vll> vvl;
typedef vector<vi> vvi;
// #define OJ
#define nl '\n'
#define get cin >>
#define imn INT_MIN
#define imx INT_MAX
// vectors
#define all(a) a.begin(), a.end()
#define pb push_back
//
#define arrIn(a, n)             \
    for (int x = 0; x < n; x++) \
    cin >> a[x]
#define arrOut(a, n)            \
    for (int x = 0; x < n; x++) \
        cout << a[x] << " ";    \
    cout << endl

// loops
#define loop(x, n) for (int x = 0; x < n; x++)
#define loopn(x, a, n) for (int x = a; x <= n; x++)
#define loopr(x, n) for (int x = n; x >= 0; x--)
// cout
#define print(x) cout << x << endl
#define printl(x) cout << x << " "

void soln()
{
    ll n;
    ll ans = 1;
    get n;
    vll a(n);
    unordered_map<ll, ll> m;
    loop(i,n){
        get a[i];
        m[a[i]]++;
    }
          
    if (m[0] == 0) ans = 2;

    sort(all(a));
    loop(i,n-1){
        if (a[i]-1 < i and a[i+1]-2 >= i ) ans++;
    }
    print(ans);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tests = 1;
    cin >> tests;
    while (tests--)
        soln();
    return 0;
}
