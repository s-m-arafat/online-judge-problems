//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll>vll;
typedef vector<int>vi;
typedef vector<vll>vvl;
typedef vector<vi>vvi;

#define nl '\n'
#define get cin>>
//vectors
#define allv(a) a.begin(),a.end()
#define pb push_back
//
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<endl
//loops
#define loop(x,n) for(int x = 0; x < n; x++)
#define loopn(x,a,n) for(int x = a; x <= n; x++)
#define loopr(x,n) for(int x = n; x >= 0; x--)
//cout
#define print(x) cout<<x<<endl
#define prnt(x) cout<<x

// bool prime(int a) { 
//     if (a < 2)
//         return false;
//     for (int i = 2; i * i <= a; i++) {
//         if (a % i == 0)
//             return false;
//     }
//     return true;
// }

void soln()
{
    ll n;
    get n;
    print(n);
    // loopn(i,2,1e5){
    //     if(prime(i)){
    //         if(prime(i+n)==false){
    //             print(i);
    //             return;
    //         }
    //     }
    // }
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
