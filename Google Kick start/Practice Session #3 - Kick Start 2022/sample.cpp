#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, sum=0;
    cin>>n>>m;
    vector <int> c(n);
    for(int i=0; i<n; i++){
        cin>>c[i];
        sum+=c[i];
    }
    cout<<sum%m<<endl;
}
int main()
{
    int t,i=1;
    cin>>t;
    while(t--){
        cout<<"Case #"<<i++<<": ";
        solve();
    }
    return 0;
}
