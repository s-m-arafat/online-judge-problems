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
    string s[8], ans="B";
    int r=0, b=0;
    bool f=false;
    loop(i,8) cin>>s[i];
    loop(rw,8)
    {
        r=0;
        loop(cl,8){
            if(s[rw][cl]=='R')r++;
            else r=0;
            if(r==8){
                f=true;
                ans="R";
                break;
            }
        }
    }

    print(ans);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tests;
    cin>>tests;
    while(tests--)
        soln();
    return 0;
}
