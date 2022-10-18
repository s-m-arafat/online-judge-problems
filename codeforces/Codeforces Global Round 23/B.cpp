
//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<endl
#define loop(x,n) for(int x = 0; x < n; x++)
#define print(x) cout<<x<<endl;

using namespace std;

void soln()
{
    ll n,ans=0;
    cin>>n;
    vector<ll>a(n);
    arrIn(a,n);
    for(ll i=0, j=n-1; i<j; i++, j--){
        if(a[j]) i--;
        else if(a[i] && !a[j]) ans++;
        else if(!a[i] && a[j]) j++;
        else j++;
    }
    print(ans)
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
