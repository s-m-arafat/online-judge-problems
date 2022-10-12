//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long



using namespace std;

void soln()
{
    float a,b,x,y;
    cin>>a>>b>>x>>y;
    float chef = (a/x);
    float chefina = (b/y);
    if(chef>chefina) cout<<"Chefina"<<endl;
    else if (chef<chefina) cout<<"Chef"<<endl;
    else cout<<"Both"<<endl;
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

