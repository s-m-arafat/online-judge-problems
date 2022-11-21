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
//vectors
#define allv(a) a.begin(),a.end()
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
#define prnt(x) cout<<x



void soln()
{
    ll n;
    get n;
    string a,b;
    ll am,bm,w1,w2;
    ll ans=0;
    get a>>b;
    loop(i,n){
        am = (a[i]-'a')+1;
        bm = (b[i]-'a')+1;
        
        w1 = abs(am-bm);
        w2 = (am+bm)%26;
        
        ans+=min(w1,w2);
        
        // print("ans "<<ans);
    }
    ans = ans+26;
    print(min(ans, abs(26 - ans)));
    
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
