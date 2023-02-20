//Auth:Shakil Mahmud Arafat -arft666, AUST, Dept. of EEE

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll>vll;
typedef vector<int>vi;
typedef vector<vll>vvl;
typedef vector<vi>vvi;
// #define OJ
#define nl '\n'
#define get cin>>
#define imn INT_MIN
#define imx INT_MAX
//vectors
#define all(a) a.begin(),a.end()
#define pb push_back
//
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<" ";\
                                               cout<<endl

//loops
#define loop(x,n) for(int x = 0; x < n; x++)
#define loopn(x,a,n) for(int x = a; x <= n; x++)
#define loopr(x,n) for(int x = n; x >= 0; x--)
//cout
#define print(x) cout<<x<<endl
#define printl(x) cout<<x<<" "

const ll N = 10e5;
ll p[N];
ll rnk[N];

ll find(ll x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

void unite(ll x, ll y) {
    ll px = find(x);
    ll py = find(y);
    if (px == py) return;
    if (rnk[px] < rnk[py]) p[px] = py;
    else {
        p[py] = px;
        if (rnk[px] == rnk[py]) rnk[px]++;
    }
}


void soln()
{
    ll n,m;
    get n>>m;
    for (ll i = 1; i <= n; i++) {
        p[i] = i;
        rnk[i] = 0;
    }
    ll ans = 0;
    for (ll i = 0; i < m; i++) {
        ll a, b;
        get a >> b;
        ll pa = find(a);
        ll pb = find(b);
        if (pa == pb) ans++;
        else unite(a, b);
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
    int tests=1;
    // cin>>tests;
    while(tests--)
        soln();
    return 0;
}