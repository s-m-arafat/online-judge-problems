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

int min_ones(vector<vector<int>> arr) {
    int n = arr.size();
    int m = arr[0].size();

    int min_count = imx; 
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < m-1; j++) {
            int count = arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1];
            if(count != 0 ){
                min_count = min(min_count, max(1, count-1));
            }
        }
    }
    return min_count-1;
}

void soln()
{
    ll n, m, x, y, z, k, l, sum = 0, mult = 1, ans = 0;
    string s;
    
    ll ones = 0;
 
    get n>>m;
    vvi a(n);
    loop(i,n){
        get s;
        loop(j,m){
            a[i].push_back( s[j] - '0');
            if(s[j]=='1') ones++;
        }
    }
    if(ones==0) print(0);
    else {
       
        print(ones-min_ones(a));
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