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
    ll n, lid=0, ans=0;
    cin>>n;
    string s;
    vector<ll> a(n);
    cin>>s;
    loop(i,n){
        cin>>a[i];
        if(s[i] == '1') ans+= max(a[i], lid);
        if(s[i] == '0' || a[i]<lid) lid = a[i];
    }
//    sort(a.begin(), a.end(), greater<int>());
//
//    ll ans = accumulate(a.begin(), a.begin()+lid, 0);
    print(ans);
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
