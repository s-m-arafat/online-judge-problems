
//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'


using namespace std;

void soln()
{
    ll n;
    ll ans = 0;
    cin>>n;
    n-=6;
    /*for(ll i=1;i<=sqrt(n);i++){
        for(ll j=1; j<=(n/3);j++){
            ll mn = min({abs(i-j),abs(j -(n-(i+j))), abs(i-n-(i+j))});
            ans = max(ans,mn);
        }
    }*/
    cout<<n/3<<'\n';
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
