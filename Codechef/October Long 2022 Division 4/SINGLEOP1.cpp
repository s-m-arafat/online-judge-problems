
//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long



using namespace std;

void soln()
{
    ll n;
    ll ans=0;
    cin>>n;
    vector <char> s(n);
    for (ll i=0; i<n; i++) cin>>s[i];
    for (ll i=0; i<n; i++){
        if(s[i] == '1') ans++;
        else break;
    }
    cout<<ans<<endl;
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

