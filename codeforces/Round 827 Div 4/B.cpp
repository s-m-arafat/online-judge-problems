//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<endl
#define loop(x,n) for(int x = 0; x < n; x++)
#define print(x) cout<<x<<endl

using namespace std;

auto has_duplicates(const vector<ll>& v) -> bool
{
    unordered_set<ll> s;
    copy(v.begin(), v.end(), inserter(s, s.begin()));

    return v.size() != s.size();
}
void soln()
{
    ll n;
    cin>>n;
    string ans;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    if(has_duplicates(a)) ans ="NO";
    else ans = "YES";
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
