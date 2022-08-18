///Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void soln()
{
    int X, Y;
    cin>>X>>Y;
    int res = Y-X;
    if(res>0) cout<<res;
    else if(res<=0) cout<<0;
    cout<<endl;
}
int main()
{

    int tests;

    cin>>tests;
    while(tests--)
        soln();
    return 0;
}
