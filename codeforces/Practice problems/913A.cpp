//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE
//A. Modular Exponentiation
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
    unsigned ll n,m;
    cin>>n>>m;
    if(n>m || n>27)print(m);
    else cout<<m%(1<<n)<<nl;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    /*int tests;
    cin>>tests;
    while(tests--)*/
        soln();
    return 0;
}

