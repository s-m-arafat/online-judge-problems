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
#define printl(x) cout<<x<<" "



void soln()
{
    ll n,l;
    
    get n;
    vll a(n);
    arrIn(a,n);
    print(1<<" "<<n);
    // ll mn = imx;
    // ll mx = imn;
    // loop(i,n){
    //     set<ll>b(a.begin()+i, a.end());
    //     ll s = b.size();
    //     mn = min(mn, s);
    //     if(max(n-i-1-mn,mx)>mx){
    //         l=i+1;
    //         mx=max(n-i-1-mn,mx);
    //     }
    //     b.clear();
    // }
    // print(l<<" "<<n);
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
