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
    string s;
    get s;
    ll mx0=imn;
    ll mx1=imn;
    loop(i,s.size()){
        ll zero = 0;
        ll one = 0;
        if(s[i]=='0'){
            while(s[i]=='0'){
                zero++;
                i++;
            }
            mx0=max(mx0,zero);
            i--;
        }
        else if(s[i]=='1'){
            while(s[i]=='1'){
                one++;
                i++;
            }
            mx1=max(mx1,one);
            i--;
        }
    }

    if(max(mx0,mx1)>=7LL) print("YES");
    else print("NO");
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
