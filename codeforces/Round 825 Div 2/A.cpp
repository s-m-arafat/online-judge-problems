//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE
//A. Make A Equal to B

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]
#define loop(x,n) for(int x = 0; x < n; x++)
#define print(x) cout<<x<<endl


using namespace std;

void soln()
{
    ll n, misMatch=0, ones[2]={0}, ans;
    cin>>n;
    int a[n], b[n];

    arrIn(a,n);
    arrIn(b,n);

    loop(x,n){
        if(a[x] != b[x]) misMatch++;
        if(a[x] == 1) ones[0]++;
        if(b[x] == 1) ones[1]++;
    }
    ll dif = abs(ones[0]-ones[1]);

    if(ones[0] == ones[1]){
        if(misMatch) ans=1;
        else ans=0;
    }
    else ans = abs(dif-misMatch)+1;
    cout<<ans<<nl;
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
