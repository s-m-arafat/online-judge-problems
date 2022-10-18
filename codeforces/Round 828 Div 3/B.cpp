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
    ll n, q, fsum=0, od=0, ev=0;
    ll type, xj;
    cin>>n>>q;
    vector<ll>a(n);
    loop(i,n){
        cin>>a[i];
        fsum += a[i];
        if(a[i]%2)od++;
        else ev++;
    }
    while(q--){
        cin>>type>>xj;
        ///odd
        if(type==1) {
            fsum += (od*xj);
            if(xj%2){
                ev += od;
                od = n-ev;
            }
        }
        ///even
        else if (type==0) {
            fsum += (ev*xj);
            if(xj%2) {
                od += ev;
                ev = n-od;
            }
        }
        print(fsum);
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

