#include<iostream>
using namespace std;
int main()
{
    int n, digit, sum=0,tDigits=0;
    cin>>n;
    for(; n; n/=10){
        digit = n%10;
        sum+=digit;
        tDigits++;
    }
    cout<<sum<<endl;
    cout<<(float)sum/tDigits<<endl;
    return 0;
}

