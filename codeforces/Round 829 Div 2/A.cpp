//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<endl
#define loop(x,n) for(int x = 0; x < n; x++)
#define loopr(x,n) for(int x = n-1; x >= 0; x--)
#define print(x) cout<<x<<endl

using namespace std;

void soln()
{
    ll n, q=0,a=0;
    cin>>n;
    string s;
    cin>>s;
    if(s[n-1] == 'Q'){
        print("NO");
        return;
    }
    else{
        loopr(i,n){
            if(s[i] == 'Q') q++;
            else a++;
            if(q>a){
               print("NO");
                return;
            }
        }
        print("YES");
    }

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

