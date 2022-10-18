//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<endl
#define loop(x,n) for(int x = 0; x < n; x++)
#define print(x) cout<<x<<endl;

using namespace std;
ll bs_sqrt(ll x) {
  ll left = 0, right = 2000000123;
  while (right > left) {
      ll mid = (left + right) / 2;

      if (mid * mid > x) right = mid;
      else left = mid + 1;
  }
  return left - 1;
}
void soln()
{
    ll l,r, ans=0;
    cin>>l>>r;
    ll r1= bs_sqrt(r);
    ll l1 = bs_sqrt(l);
    if (l1 == r1) {
        for (int i = 0; i < 3; i++) {
          if (l <= l1 * (l1 + i) && l1 * (l1 + i) <= r) ans++;
        }
    }
    else{
        ans += (r1-l1-1)*3;
        loop(i,3){
            if (l <= l1 * (l1 + i) && l1 * (l1 + i) <= r) ans++;
            if (l <= r1 * (r1 + i) && r1 * (r1 + i) <= r) ans++;
        }
    }
    print(ans)
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
