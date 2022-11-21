//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<endl
#define loop(x,n) for(int x = 0; x < n; x++)
#define l00p(x,n) for(int x = 1; x <= n; x++)
#define print(x) cout<<x<<endl

using namespace std;

void soln()
{
    ll n;
    cin>>n;
    if(n%2==0){
        l00p(i,(n/2)) cout<<i+(n+1)/2<<" "<<i<<" ";
        cout<<nl;
        return;
    }
    else l00p(i,(n/2)) cout<<i<<" "<<i+(n+2)/2<<" ";
    print((n+1)/2);
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

