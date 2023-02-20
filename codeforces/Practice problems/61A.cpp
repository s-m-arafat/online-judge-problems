//Auth:Shakil Mahmud Arafat -arft666, AUST, Dept. of EEE

#include<bits/stdc++.h>
using namespace std;

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

string addBinary(string a, string b) {
    ll n = a.length();
    ll m = b.length();
    if (n < m)
        swap(a, b);

    ll len = max(n, m);
    string result = "";

    ll carry = 0;
    for (int i = 0; i < len; i++) {
        ll ai = i < n ? a[n - i - 1] - '0' : 0;
        ll bi = i < m ? b[m - i - 1] - '0' : 0;
        ll val = (ai + bi + carry) % 2;
        carry = (ai + bi + carry) / 2;
        result = (char)(val + '0') + result;
    }

    if (carry)
        result = '1' + result;

    return result;
}

void soln()
{
    ll n, m, x, y, z, k, l, a, b, c, sum=0, mult = 1, ans;
    string s1, s2;
    get s1>>s2;
    string res = addBinary(s1,s2);
    print(res);
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