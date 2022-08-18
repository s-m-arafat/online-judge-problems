//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void soln()
{
    int n, rem;
    cin>>n;
    rem = n%3;
    int mov = n/3;
    if(n==1){
        cout<<2<<endl;
        return;
    }
    if(rem){
        mov = (n/3)+1;
    }
    cout<<mov<<endl;
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

