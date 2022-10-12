
//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE
//
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
    int ax=0, bx=0;
    char ans;
    string a,b;
    cin>>a>>b;
    int asize=a.size(), bsize = b.size();
    if(a[asize-1] != b[bsize-1]){
        if(int(a[asize-1])<int(b[bsize-1])) ans = '>';
        else ans = '<';
    }
    //else if (a[asize-1] == 'M') ans='='
    else {
        for(int i=0; i<asize-1; i++){
            if(a[i] == 'X') ax++;
        }
        for(int i=0; i<bsize-1; i++){
            if(b[i] == 'X') bx++;
        }
        if(ax==bx) ans = '=';
        else if (ax>bx){
            if(a[asize-1] == 'S') ans = '<';
            else ans = '>';
        }
        else if (ax<bx){
            if(a[asize-1] == 'L') ans = '<';
            else ans = '>';
        }
    };
    print(ans);
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
