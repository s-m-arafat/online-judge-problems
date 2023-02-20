//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll>vll;
typedef vector<int>vi;
typedef vector<vll>vvl;
typedef vector<vi>vvi;

#define nl '\n'
#define get cin>>
#define imn INT_MIN
#define imx INT_MAX
//vectors
#define all(a) a.begin(),a.end()
#define pb push_back
//
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<endl
//loops
#define loop(x,n) for(int x = 0; x < n; x++)
#define loopn(x,a,n) for(int x = a; x <= n; x++)
#define loopr(x,n) for(int x = n; x >= 0; x--)
//cout
#define print(x) cout<<x<<endl
#define print2(x,y) cout<<x<<" "<<y<<endl
#define print3(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl
#define printl(x) cout<<x<<" "



void soln()
{
    ll n;
    ll ans=1;
    get n;
    if(n&1){
        ll a = 2;
        while(a*a<=n){
            if(n%a==0){
                ans = n/a;
                break;
            }
            a++;
        }
        print(ans<<" "<<n-ans);
    }
    else print(n/2<<" "<<n/2);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tests;
    cin>>tests;
    while(tests--)
        soln();
    return 0;
}
