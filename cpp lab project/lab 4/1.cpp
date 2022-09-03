#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, i;
    cout<<"Enter any number:";
    cin>>num;

    bool flag = false;
    i = 2;
    while(i<=sqrt(num)){
        if(!(num%i)){
            flag=true;
            break;
        }
        i++;
    }
    if(!flag)cout<<num<<" is a Prime Number"<<endl;
    else cout<<num<<" is Not a Prime Number"<<endl;

    return 0;
}
