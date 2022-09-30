//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>

using namespace std;

void soln()
{
    long long n,a,b, count=0;
    cin>>n;
    /*a=1;
    while(a<=n){
        b=1;
        while(b<=n){
            double res = (double)(a*b)/(double)(__gcd(a,b)*__gcd(a,b));
            if (res <= 3) count++;
            b++;
        }
        a++;
    }*/
    cout<<n+((n/2)+(n/3))*2<<endl;

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
