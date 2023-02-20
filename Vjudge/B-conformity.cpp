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



void soln(int n)
{
    ll m, x, y, z, k, l, a, b, c, sum=0, mult = 1, ans=0;
    map<string,int>fros;
    m=n;
    while(m--){
        vll course(5);
        arrIn(course,5);
        sort(all(course));
        string k="";
        loop(i,5){
            k+=to_string(course[i]);
        }
        fros[k]++;
    }
    // for(auto& i:fros){
    //     print(i.second);
    // }
    int mx = imn;
    for (const auto& pair : fros) {
        if (pair.second > mx) {
            mx = pair.second;
        }
    }
    if(fros.size()==n) print(n);
    else{
        for(auto& i:fros){
            if(i.second==mx){
                ans+=mx;
            }
        }
        print(ans);
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
    while(cin>>tests and tests != 0){

        soln(tests);
    }
    return 0;
}