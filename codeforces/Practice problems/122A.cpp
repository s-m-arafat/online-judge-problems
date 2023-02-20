//Auth:Shakil Mahmud Arafat -arft666, AUST, Dept. of EEE

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
#define printl(x) cout<<x<<" "



void soln()
{
    ll n;
    ll ans[14] = {4,7,44,47,74,77,444,447,474,744,477,474,774,777};
    get n;
    loop(i,14){
        if(n%ans[i]==0){
            print("YES");
            return;
        }
    }
    print("NO");
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tests=1;
    // cin>>tests;
    while(tests--)
        soln();
    return 0;
}
