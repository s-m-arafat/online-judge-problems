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
    ll n, m, x, y, z, k, l, sum = 0, mult = 1, ans = 0;
    string s;
    map<char, int>mp;
    
    get s;
    n = s.size();
   
    loop(i,n){
        mp[s[i]]++;
    }
    bool ok = false;
    ll i  = 0;
    while(!ok){

        m = s.size();
        if(i>=m-2) i = 0;
        if(m==0 or m==1){
            print(0);
            break;
        }
        string str;
        if(i==m-1) str = s.substr(i,1);
        else str = s.substr(i,2);
        
        if(str.size()==1) {
            ok = true;
            s.erase(i,1);
            ans++;
        }
        else if(str[0]!=str[1]){
            ok = true;
            if(mp[str[0]]>=mp[str[1]]){
                 s.erase(i+1,1);
                 mp[s[i+1]]--;
            }
            else {
                s.erase(i,1);
                mp[s[i]]--;;
            }
            ans++;
        }
        else i++;
        i++;
        
        if(!ok and i>=m-1) ok = true;
        else ok = false;
    }
    print(ans);
 
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