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
    string s;cin>>s;
    int ss = s.size();
    if(ss>10) print(s[0]<<ss-2<<s[ss-1]);
    else print(s);
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

