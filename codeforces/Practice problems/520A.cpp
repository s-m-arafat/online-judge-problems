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
    ll n, m, x, y, z, k, l, a, b, c, sum=0, mult = 1, ans;
    get n;
    string s;
    get s;
    set<char>alph;
    for(int i=0; i<n; i++){
         alph.insert(tolower(s[i]));
        //  printl(s[i]);
    }
    // for(auto w:alph) printl(w);
    // print(alph.size());
    if(alph.size()<26) print("NO");
    else print("YES");
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