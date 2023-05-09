//Auth:Shakil Mahmud Arafat -arft666, AUST, Dept. of EEE

#include<bits/stdc++.h>
using namespace std;
//SET PRECIOSION   cout << fixed ;  cout << setprecision(n) << ans << endl;

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



void soln()
{
    ll n, m, x, y,r, z, k, l, sum = 0, mult = 1, ans = 0;
    ll q;
    get n>>q;
    vll a(n);
    arrIn(a,n);
    vll s(n-1);
    for (ll i=1; i<n-1; ++i){
        if(a[i-1]>=a[i] and a[i]>=a[i+1]) s[i] = s[i-1]+1;
        else s[i] = s[i-1];
    }
    // for(auto val:s) print(val);
    while(q--){
        get l>>r;
        --l, --r;
        // auto fst = s.lower_bound(l);
        // auto lst = s.upper_bound(r);
        // if(fst==s.end() or *fst>r) print(y-x+1);
        // else{
        // ans = count_if(s.begin(), s.end(), [l, r](int x) {
        //     return x >= l && x <= r;
        // });
        if(l==r) print(1);
        else print(r-l+1-s[r-1]+s[l]);
        // }
    }
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