
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
    ll ai, bi, sum = 0, mx=0;
    cin>>n;
    loop(i,n){
        cin>>ai;
        sum+= ai;
    }
    loop(i,n){
        cin>>bi;
        sum+= bi;
        if(bi>=mx) mx =bi;
    }
    cout<<(sum-mx)<<nl;
}
int main()
{
    ios::sync_with_stdio(false);
    //cin.tie(0);

    int tests;
    cin>>tests;
    while(tests--)
        soln();
    return 0;
}
