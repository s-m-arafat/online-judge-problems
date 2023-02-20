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
    ll n, m, x, y, z, k, l, a, b, c, sum=0, mult = 1, ans=0;
    get n;
    ll c1=0, c2=0, c3=0, c4=0;
    loop(i,n){
        get m;
        if(m==1)c1++;
        else if(m==2)c2++;
        else if(m==3)c3++;
        else if(m==4)c4++;
    }
    ans+=c4;
    ll mn = min(c1,c3);
    ans+=mn;
    c1-=mn;
    c3-=mn;
    ans+=(c2/2);
    c2=c2&1?2:0;
    ans+=(c1/4);
    c1-=(c1/4)*4;
    ans+=ceil(double(c1+c2)/4.00);
    print(ans+c3);
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