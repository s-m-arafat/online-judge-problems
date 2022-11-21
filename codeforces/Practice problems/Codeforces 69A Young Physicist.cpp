//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
//
#define ll long long int
#define nl '\n'
#define get cin>>
//vectors
#define vll(a,n) vector<ll>a(n)
#define vi(a,n) vector<int>a(n)
#define vall(a) a.begin(),a.end()
#define pb push_back
//
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<endl
//loops
#define loop(x,n) for(int x = 0; x < n; x++)
#define l00p(x,a,n) for(int x = a; x <= n; x++)
#define loopr(x,n) for(int x = n; x >= 0; x--)
//cout
#define print(x) cout<<x<<endl
#define prnt(x) cout<<x

using namespace std;

void soln()
{
    int n;
    get n;
    int a[n][3];
    int sum[3] = {0};

    loop(i,n){
        loop(j,3){
            cin>>a[i][j];
            sum[j]+= a[i][j];

        }
    }
    if(sum[0]==0&&sum[1]==0&&sum[2]==0)print("YES");
    else print("NO");
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

