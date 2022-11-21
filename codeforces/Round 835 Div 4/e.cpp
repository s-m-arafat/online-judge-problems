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

ll inv(vi a, ll n){
    ll sum = 0;
    ll z=0;
    loop(i,n){
        if(!a[i]){
            sum+=z;
            // sum += count(a.begin()+i+1, a.end(),0);
        }
        else z++;
    }
    return sum;
}

void soln()
{
    ll n;
    //ll one = 0;
    //string ans;
    ll left0=-1;
    ll right1=-1;
    get n;
    vi a(n);
    loop(i,n){
        get a[i];
        if(a[i]==0 and left0==-1) left0=i;
        else if(a[i]==1) right1=i;
    }
   // ll z = n-one;

    ll ans = inv(a,n);

    if(left0 !=-1){
        auto b = a;
        b[left0] = 1;
        ans = max(ans,inv(b,n));
        // loop(i,n){
        //     if(a[i]==0){
        //         a[i] = 1;
        //         break;
        //     }
        // }
    }
    if(right1 !=-1){
        auto b = a;
        b[right1] = 0;
        ans = max(ans,inv(b,n));
        // loopr(i,n-1){
        //     if(a[i]==1){
        //         a[i] = 0;
        //         break;
        //     }
        // }
    }

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
