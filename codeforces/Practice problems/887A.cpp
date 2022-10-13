//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<endl
#define loop(x,n) for(int x = 0; x < n; x++)
#define print(x) cout<<x<<endl

using namespace std;

void soln()
{
    string s;
    cin>>s;
    bool one=false;
    int zero=0;
    loop(i,s.size()){
        if(s[i] == '1') one=true;
        if(one && s[i] == '0') zero++;
        if(zero==6){
            print("yes");
            break;
        }
    }
    if(zero<6) print("no");
}
int main()
{
    ios::sync_with_stdio(false);

    //int tests;
    //cin>>tests;
    //while(tests--)
        soln();
    return 0;
}
