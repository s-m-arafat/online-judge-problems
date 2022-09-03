#include<iostream>
using namespace std;
double power(double x, int p){
    double result = 1;
    for(int i=0; i<p; i++) result *= x;
    return result;
}

int main()
{
    cout<<power(2,10);
    return 0;
}
