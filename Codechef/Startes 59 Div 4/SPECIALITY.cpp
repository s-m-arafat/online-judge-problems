//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'


using namespace std;

void soln()
{
    ll x,y,z;
    cin>>x>>y>>z;
    int mx = max({x,y,z});
    if (mx == x)
        cout<<"Setter"<<nl;

    else if (mx == y)
        cout<<"Tester"<<nl;

    else if (mx == z)
        cout<<"Editorialist"<<nl;

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
