//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE
/*
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
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    vector<ll>ki;
    vector<ll>m(k);
    ll mx;
    for(int i=0;i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0;i<n; i++){
        cout<<a[i]<<" ";
        if(a[i] != i+1){
            ki.insert(ki.begin()+0,2);
            cout<<"k "<<i+1;
        }
        if(ki.size()==k) break;
    }
    cout<<nl;
    for(int i=0;i<k; i++) cout<<ki[i]<<" ";
    cout<<nl;
    for(int i=0;i<k; i++){

        a.push_back(ki[i]);
        mx = *max_element(a.begin(), a.end());
        cout<<"max "<<mx<<endl;

        m.push_back(mx-k);
        cout<<m[i]<<" ";
    }

    cout<<nl;
    cout<<accumulate(m.begin(),m.end(),0)<<nl;
    cout<<nl;
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
*/
