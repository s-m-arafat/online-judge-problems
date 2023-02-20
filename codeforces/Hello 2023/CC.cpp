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
#define loopr(x,n) for(int x = n; x >= 1; x--)
//cout
#define print(x) cout<<x<<endl
#define printl(x) cout<<x<<" "

ll minOp(vll a, ll n, ll m) {
    ll ans = 0, sum = 0;
    stack<ll> stk;
    for (ll i = m; i < n; i++) {
        if (a[i] < 0) {
            stk.push(a[i]);
        }
        sum += a[i];
        while (sum < 0) {
            sum += (-2 * stk.top());
            stk.pop();
            ans++;
        }
    }

    // Process element m-1
    if (a[m - 1] <= 0) {
        sum = a[m - 1];
    } else if (m != 1) {
        sum = -1 * a[m - 1];
        ans++;
    }

    // Process elements from m-2 to 0
    for (ll i = m - 2; i >= 1; i--) {
        if (a[i] > 0) {
            stk.push(a[i]);
        }
        sum += a[i];
        while (sum > 0) {;
            sum += (-2 * stk.top());stk.pop();
            ans++;
        }
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tests;
    cin>>tests;
    while(tests--){
        ll n, m;
        get n>>m;
        vll a(n);
        arrIn(a,n);
        print(minOp(a,n,m));
    }
    return 0;
}
