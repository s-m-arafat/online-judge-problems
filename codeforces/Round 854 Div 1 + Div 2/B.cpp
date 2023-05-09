//Auth:Shakil Mahmud Arafat -arft666, AUST, Dept. of EEE

#include<bits/stdc++.h>
using namespace std;
//SET PRECIOSION   cout << fixed ;  cout << setprecision(n) << ans << endl;

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



bool all_elements_same(vll a) {
    set<ll> s(a.begin(), a.end());
    return s.size() == 1;
}

void soln() {
    ll n;
    get n;

    vll a(n);
    arrIn(a,n);

    if (all_elements_same(a)) {
       print(0);
        return;
    }

    vvl ans;
    vll b = a;

    while (!all_elements_same(a)) {
        ll mn = INT_MAX;
        ll ind = -1;

        for (ll i = 0; i < n; i++) {
            if (a[i] < mn) {
                mn = a[i];
                ind = i;
            }
        }

        bool ok = false;

        loop(i,n){
            if (a[i] != mn and a[i] > mn) {
                ll y = (a[i] / mn);

                if (a[i] % mn != 0) {
                    y++;
                }

                ans.push_back({i, ind});
                a[i] = y;
                ok = true;
            }
        }

        if (a == b) {
            print(-1);
            return;
        }

        b = a;
    }

    cout << ans.size() << endl;

    for (int i = 0; i < ans.size(); i++) {
    cout << ans[i][0] + 1 << " " << ans[i][1] + 1 << endl;
}

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
    cin>>tests;
    while(tests--)
        soln();
    return 0;
}
