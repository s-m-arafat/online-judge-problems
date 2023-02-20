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
#define all(a) a.begin(),a.end()
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
#define printl(x) cout<<x<<" "



void soln()
{
    ll n;
    string ans,s;
    get n>>s;

    if(n>3){
        for(int i=0; i<n ;i++){
            for(int j=i+2;j<n;j++){
                string sub = s.substr(i,j);
                // print(sub);
                int c = 0;
                size_t nps = s.find(sub,0);
                while(nps != string::npos) c++, nps = s.find(sub,nps+1);
                if(c>1){
                    print("YES");
                    return;
                }
            }
        }
    }
    print("NO");
    // ll n; get n;
    // string s; get s;
    // map<pair<char, char>, int> m;
    // pair<char,char> p={s[0],s[1]};
    // m[p]++;
    // loopn(i,2,n-1){
    //     pair <char, char> str = {s[i-1],s[i]};
    //     if(m[str]!=0){
    //         if((str == p and m[str]>1) or (str != p)){
    //             print("YES");
    //             return;
    //         }
            
    //     }
    //     p = str;
    //     m[str]++;
    // }
    // print("NO");

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
