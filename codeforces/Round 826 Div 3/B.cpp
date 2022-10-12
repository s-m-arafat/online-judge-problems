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
    if(n==1) print(1);
    else if(n==2) print("2 1");
    else if(n==3) print(-1);
    else if(n==4) print("4 3 1 2");
    else{
        for(ll i=n; i>n/2 +1; i--) cout<<i<<" ";
        for(ll i=1; i<=n/2 +1; i++) cout<<i<<" ";
    cout<<nl;
    }
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

