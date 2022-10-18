//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<endl
#define loop(x,n) for(int x = 0; x < n; x++)
#define print(x) cout<<x<<endl;

using namespace std;

void soln()
{
    int n,k;
    bool flag;
    cin>>n>>k;
    int x = n/k;
    char c;
    vector <string> v(26);
    string ans="";
    loop(i,n){
        cin>>c;
        v[c-'a'].push_back(c);
    }
    loop(i,k){
        flag = true;
        int t=0;
        loop(j,min(25,x)){
            if(v[j].empty() && flag){
                ans.push_back(char(j+'a'));
                flag = false;
            }
            else {
                if(!v[j].empty())v[j].pop_back();
                t++;
            }
        }
        if(flag) ans.push_back(char(t+'a'));
    }
    for(int i=0; i<k; i++){
        cout<<ans[i];
    }
    cout<<nl;
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

