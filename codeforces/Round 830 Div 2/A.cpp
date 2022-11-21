
//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<endl
#define loop(x,n) for(int x = 0; x < n; x++)
#define print(x) cout<<x<<endl

using namespace std;
ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a % b);
}
void soln()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    cin>>a[0];
    ll g = a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        g = gcd(a[i],g);
    }

    if(g==1)print(0);
    else if(gcd(g,n)==1) print(1);
    else if(gcd(g,n-1)==1) print(2);
    else print(3);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tests;
//    cout<<__gcd(20,4);
    cin>>tests;
    while(tests--)
        soln();
    return 0;
}
