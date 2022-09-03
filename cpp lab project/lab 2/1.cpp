#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter two decimal numbers: "<<endl;
    cin>>a>>b;
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    float div=a/b;
    cout<<"Addition: "<<sum<<endl
        <<"Subtraction: "<<sub<<endl
        <<"Multiplication: "<<mul<<endl
        <<"Division: "<<div;
    return 0;
}
