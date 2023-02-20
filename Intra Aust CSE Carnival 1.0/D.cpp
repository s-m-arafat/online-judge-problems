#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll cnt = 0;
        ll n;
        cin>>n;
        bool state = true;
        while(state==true){
            if(n%5==0){
                cnt++;
                n = n/5;
            }
            else{
                state=false;
            }
        }
        cout<<cnt<<endl;

    }
}