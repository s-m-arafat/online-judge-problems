#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vll> vvl;
typedef vector<vi> vvi;

#define nl '\n'
#define get cin >>
#define imn INT_MIN
#define imx INT_MAX
// vectors
#define all(a) a.begin(), a.end()
#define pb push_back
//
#define arrIn(a, n)             \
    for (int x = 0; x < n; x++) \
    cin >> a[x]
#define arrOut(a, n)            \
    for (int x = 0; x < n; x++) \
    cout << a[x] << endl
// loops
#define loop(x, n) for (int x = 0; x < n; x++)
#define loopn(x, a, n) for (int x = a; x <= n; x++)
#define loopr(x, n) for (int x = n; x >= 0; x--)
// cout
#define print(x) cout << x << endl
#define printl(x) cout << x << " "


void soln()
{
    ll n;
    string w1 = "assembler";
    string w2 = "operand";
    unordered_map<char, int> f1,f2;
    string s;
    bool ans = false;
    get n >> s;

    sort(all(s));
    sort(all(w1));
    sort(all(w2));

    int pos = 0;
    loop(i,n){
        if(s[i]==w1[pos])pos++;
    }
    if(pos==9) ans=true;
    else{
        pos = 0;
        loop(i,n){
            if(s[i]==w2[pos])pos++;
        }
        if(pos==7)ans = true;
    }
    if(ans) print("Yes");
    else print("No");
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tests;
    cin >> tests;
    while (tests--)
        soln();
    return 0;
}
