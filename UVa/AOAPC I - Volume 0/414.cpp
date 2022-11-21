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
    
    while(get n and n!=0){
        string s;
        char c;
        ll ans=0, mn=imx;getchar(); 
        loop(i,n+1){
            ll sp=0;
            
            getline(cin,s);
            //print(s);
            sp = 25 - count(allv(s),'X');
            print(sp);
            ans +=sp;
            mn = min(mn,sp);
        }
        //print(ans-(n*mn));
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int tests;
    // cin>>tests;
    // while(tests--)
        soln();
    return 0;
}
