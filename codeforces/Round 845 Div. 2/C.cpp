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



void soln()
{
    map<ll, ll> mp;
    ll n,m;
    get n>>m;
    
    vll a(n);
    ll ans = 1;
    vll check(m+5, 0);
    loop(i,n){
        get a[i];
        ll x = a[i];
        ll mn = min(m,x);
        // printl("divs ");
        loopn(j,2,mn){
            if(check[j]==0 and x%j==0){
                ans++; 
                mp[x]++; 
                check[j]=1;
                // printl(i);
            }
        }
        // cout<<nl;
        // print(ans);
    }
    ll sz = mp.size();
    // print("size "<< sz);
    if(ans<m) print(-1);
    else if(sz==1 and ans==m) print(0);
    else {
        // print(ans);
        print((--mp.end())->first-mp.begin()->first);
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
    cin>>tests;
    while(tests--)
        soln();
    return 0;
}