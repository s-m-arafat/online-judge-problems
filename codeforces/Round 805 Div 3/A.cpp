//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void soln()
{
    int n;
    int sub;
    int i = 0;
    cin>>n;
    while(n-pow(10,i)>=0) sub = n-pow(10,i), i++;
    cout<<sub<<endl;
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
