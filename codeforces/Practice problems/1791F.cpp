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

ll sumDigits(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void soln()
{
    ll n, q, m, x, y, z, k, l, r, sum = 0, mult = 1, ans = 0;
    string s;
 
    get n>>q;
    vll a(n);
    set<ll> index;
    loop(i,n){
        get a[i];
        if(a[i]>9) index.insert(i); 
        
    }

    while(q--){
        get k;
        if(k==1){
            get l>>r;
            l--, r--;
            ll lst = l;
            while(!index.empty()){
                auto it = index.lower_bound(lst);
                if(*it>r or it == index.end()) break;
                a[*it] = sumDigits(a[*it]);
                y = *it;
                index.erase(it);
                if(a[y]>9) index.insert(y);
                lst=y+1;
            }
        }
        else{
            get x;
            print(a[x-1]);
        }
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