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
#define prnt(x) cout<<x



void soln()
{
    ll n;
    int space, sum, mn;
    while(get n and n){
        cin.ignore();
        string s;
        sum = 0;
        mn = imx;
        loop(i,n){
            
            space=0;
            getline(cin,s);
            space = 25 - count(all(s), 'X');
            sum += space;
            mn = min(space, mn);
        }
        print((sum - (n*mn)));
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
