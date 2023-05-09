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



void soln()
{
    ll n, x, y, z, k, l, sum = 0, mult = 1;
    string s;
    bool f = true, m = true, e = false, o = false, w = false;
    get n>>s;
    string ss="";
    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
    }
    loop(i,n){
        if(s[i]!='m' and s[i]!='e' and s[i]!='o' and s[i]!='w'){
            print("NO");
            return;
        }
        if(s[0]!='m'){
            print("NO");
            return;
        }
        if(s[i]=='m' and m){
             ss+=s[i];
             m = false;
             e = true;
             o = true;
             w = true;
        }
        if(s[i]=='e' and e){
             ss+=s[i];
             e = false;
             m = true;
             o = true;
             w = true;
        }
        if(s[i]=='o' and o){
             ss+=s[i];
             o = false;
             e = true;
             m = true;
             w = true;
        }
        if(s[i]=='w' and w){
             ss+=s[i];
             w = false;
             e = true;
             o = true;
             m = true;
        }
    }
    // print(ss);
    if(ss=="meow") print("YES");
    else print("NO");
 
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