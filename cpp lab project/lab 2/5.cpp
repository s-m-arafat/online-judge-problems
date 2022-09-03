#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float leg1, leg2;
    cout<<"Enter the value of perpendicular and horizontal leg: "<<endl;
    cin>>leg1>>leg2;
    float leg3=sqrt((leg1*leg1)+(leg2*leg2));
    cout<<"The hypotenuse is "<<leg3<<endl;
    return 0;
}
