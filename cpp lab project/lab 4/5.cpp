#include<iostream>
using namespace std;
int main()
{
    int n;
    int even=0, sum = 0;
    int i = 0;
    cin>>n;
    ///first nth even numbers sum
    do{
        sum+=even;
        i++;
        even+=2;
    }while(i<n);
    cout<<sum;
}

