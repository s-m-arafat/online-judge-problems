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
//vectors
#define allv(a) a.begin(),a.end()
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
#define prnt(x) cout<<x



void soln()
{
    ll n;
    ll count=0;
    get n;
    bool S = false, R = false;
    string s; get s;
    if(s[0]=='R' or s[0] == 'B'){
            count++;
            if(s[0]=='R')R=true;
            else S=true;
        }
    loopn(i,1,n-1){
        if(s[i]=='R' or s[i] == 'B'){
            count++;
        }

        if(s[i]==s[i-1] and count==3){
            if(s[i+1]=='W'){
                print("NO");
                return;
            }
        }
        else if(s[i]=='W') count=0;
    }
    if(S and R) print("YES");
    else print("NO");
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
