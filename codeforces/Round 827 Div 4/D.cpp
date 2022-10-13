//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<endl
#define loop(x,n) for(int x = 0; x < n; x++)
#define print(x) cout<<x<<endl

using namespace std;
int cop(int n1, int n2)
{
    int mn = n1 < n2 ? n1 : n2;

    for(int i = 2; i <= mn; i++){
        if( n1 % i == 0 && n2 % i == 0 ){
            return 0;
        }
    }
    return 1;
}
void soln()
{
    ll n;
    cin>>n;
    vector<int> a(n);
    int ans = -1;
    arrIn(a,n);
    for(int i=n-1; i>=0; i--){
        for(int j=i; j>=0; j--){
            if(cop(a[i],a[j])==1) ans = max(ans, i+j);
        }
    }
    if(ans == -1)print(ans);
    else print(ans+2);
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
