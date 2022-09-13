//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>

using namespace std;

void soln()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a-1) == (abs(b-c)+(c-1))) cout<<3<<endl;
    else if ((a-1) < (abs(b-c)+(c-1))) cout<<1<<endl;
    else cout<<2<<endl;
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

