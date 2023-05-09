#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long

void sol(){

int n;
cin>>n;

int a[n];
for(auto &x:a) cin>>x;

sort(a,a+n);

// int f=0;

for(int l=0;l<=n;l++){
int x=0,y=0;
for(int i=0;i<n;i++){
if(a[i]>l) x++;
else y++;
}

if(x==l){
cout<<l<<endl;
return;
}
}

cout<<-1<<endl;

return;

}

signed main()
{
int t;
cin>>t;

while(t--){
sol();
}
return 0;
}