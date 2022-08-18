#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[1000];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++){
        total = 0;
        for(int j=0; j<=n; j++){
            for(int k=i; k<j; k++) total+= a[k];
        }
    }

    return 0;
}
