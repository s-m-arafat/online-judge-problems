#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter the values: "<<endl;
    cout<<"Coefficient of x^2,a = ";cin>>a;
    cout<<"Coefficient of x,b = ";cin>>b;
    cout<<"Constant,c = ";cin>>c;
    float x1=((-b)+sqrt((b*b)-(4*a*c)))/(2*a);
    float x2=((-b)-sqrt((b*b)-(4*a*c)))/(2*a);
    cout<<"The roots are "<<x1<<" and "<<x2;
    return 0;
}
