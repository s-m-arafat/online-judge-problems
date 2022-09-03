#include<iostream>
using namespace std;
int main()
{
    float celsius;
    cout<<"Celsius(degree): "<<endl;
    cin>>celsius;
    float fahrenheit=((9*celsius)/5)+32;
    cout<<"Fahrenheit(degree): "<<endl<<fahrenheit<<endl;
    return 0;
}
