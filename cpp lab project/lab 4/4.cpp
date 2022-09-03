#include<iostream>
using namespace std;
int main()
{
    int n;
    int i=1, fact =1;
    cin>>n;
    do{
        fact*=i;
        i++;
    }while(i<=n);
    cout<<fact;
}
