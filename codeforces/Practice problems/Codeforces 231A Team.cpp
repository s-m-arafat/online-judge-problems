//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define get cin>>
#define pb push_back
#define vll(a,n) vector<ll>a(n)
#define vi(a,n) vector<int>a(n)
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<endl
#define loop(x,n) for(int x = 0; x < n; x++)
#define l00p(x,a,n) for(int x = a; x <= n; x++)
#define loopr(x,n) for(int x = n; x >= 0; x--)
#define print(x) cout<<x<<endl
#define prnt(x) cout<<x

using namespace std;

void soln()
{
    int n,x,ans=0,cnt=0;
    get n;
    loop(i,n){
        loop(j,3){
            get x;
            if(x) cnt++;
        }
        if(cnt>1) ans++;
        cnt=0;
    }
    print(ans);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

//    int tests;
//    cin>>tests;
//    while(tests--)
        soln();
    return 0;
}

