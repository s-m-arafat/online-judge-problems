#include<iostream>
#include <cmath>
using namespace std;

int fact(int n){
    if(n > 1) return n * fact(n - 1);
    else return 1;
}

float sum1(int x){
    float sum = 1.0;
    for (int i=1; i<=x; i++){
        sum += (pow(x,i)/fact(i));
    }
    return sum;
}

float sum2(int x){
    float sum = 1.0;
    for (int i=2; i<=x; i+=2){
        sum += (pow(x,i)/fact(i));
    }
    return sum;
}

int main()
{
    cout<<sum1(1)<<endl;
    cout<<sum2(2)<<endl;
    return 0;
}

