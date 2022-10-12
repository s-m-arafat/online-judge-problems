//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<endl
#define loop(x,n) for(int x = 0; x < n; x++)
#define print(x) cout<<x<<endl

using namespace std;

void soln()
{
    ll n;
    cin>>n;
    string s, ans="YES";
    cin>>s;
    ll ones=0, zeros=0;
    for(int i=0; i<n; i++)
        if(s[i]=='1') ones++;
    zeros  = s.size() - ones;
    if(!(n%2)){
        if(ones%2==0 && zeros%2==0)ans = "YES";
        else ans="NO";
    }
    print(ans);
}
int main()
{
    ios::sync_with_stdio(false);

    int tests;
    cin>>tests;
    while(tests--)
        soln();
    return 0;
}
