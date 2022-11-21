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
    string s;
    get s;
    ll c1=0;
    loop(i,n) if(s[i]=='1') c1++;
    ll c0 = n-c1;
    ll sub1=0, sub0=0;
    ll ans;
    if(c0 and c1) ans = c1*c0;
    else if (c0 and !c1) ans = c0*c0;
    else ans = c1*c1;
    loop(i,n){
        if(s[i]=='1'){
            c1=0;
            while(s[i]=='1' and i<n)c1++,i++;
            sub1= max(c1,sub1);
            i--;
        }
        
        else {
            c0=0;
            while(s[i]=='0' and i<n) c0++, i++;
            sub0= max(c0,sub0);
            i--;
        }
    }
    print(max(ans, max(sub0*sub0,sub1*sub1)));
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
