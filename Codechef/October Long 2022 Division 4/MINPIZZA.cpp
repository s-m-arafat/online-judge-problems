//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define n '\n'


using namespace std;

void soln()
{
    ll a,b;
    cin>>a>>b;
    cout<<ceil(float((a*b)/4.0))<<n;
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

