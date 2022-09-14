//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define arrIn(a,x,n) for(int x = 0; x < n; x++) cin>>a[i]
#define loop(x,n) for(int x = 0; x < n; x++)
#define print(x) cout<<x<<endl

using namespace std;

void soln()
{
    int n, count=0;
    cin>>n;
    int bills[] = {1, 5, 10, 20, 100};
    int i = 4;
    while(n){
        while(n>=bills[i]){
            count += (n/bills[i]);
            n%=bills[i];
        }
        i--;
    }
    print(count);
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

