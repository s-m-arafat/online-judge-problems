//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define arrIn(a,x,n) for(int x = 0; x < n; x++) cin>>a[i]
#define loop(x,n) for(int x = 0; x < n; x++)

using namespace std;

void soln()
{
    int n, count =1, max_count=0;
    cin>>n;
    vector <ll> a(n);

    arrIn(a,i,n);

    loop(i,n){
        if(a[i]>=a[i-1]) count++;
        else {
            max_count = max(max_count,count);
            count = 1;
        }
    }
    max_count = max(max_count,count);
    cout<<max_count<<nl;
}
int main()
{
    ios::sync_with_stdio(false);

    int tests;
    //cin>>tests;
    //while(tests--)
        soln();
    return 0;
}
