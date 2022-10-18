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
    int n;
    string s;
    cin>>n;
    int a[n];
    arrIn(a,n);
    cin>>s;
    map<int, char>m;
    loop(i,n){
        if(m.find(a[i])!=m.end()){
            if(m[a[i]] != s[i]){
                print("NO");
                return;
            }
        }
        m.insert({a[i],s[i]});
    }
    print("YES");
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





