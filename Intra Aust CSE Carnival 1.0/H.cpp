#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       double n;
       cin>>n;
       double ans = (100*n)/(100-n);
       printf("%.6f\n", ans);
    }
}