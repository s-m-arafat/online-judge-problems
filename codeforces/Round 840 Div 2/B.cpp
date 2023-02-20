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
#define mp make_pair 
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
    ll n, k, x;
    string ans="NO";
    get n>>k;
    vll h(n);
    arrIn(h,n);
    multimap <ll,ll> m;
    loop(i,n){
        get x;
        m.insert(mp(x,h[i]));
    }
// for (auto xx = m.begin(); xx != m.end(); ++xx) print(xx->first<<' '<<xx->second);
    while(k>0 and m.size()>0){
        ll mn = imx;
        ll key;
        for (auto xx = m.begin(); xx != m.end(); ++xx){
            print(xx->second);
            if(xx->second-k<=0) m.erase(xx->first), --xx;
            else {
                xx->second-=k;
                if(xx->second<mn){
                    mn=xx->second;
                    key = xx->first;
                }
            }
        }
        k -= key;
    }
    if(m.empty()) ans="YES";
    print(ans);
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
