#include <iostream>
using namespace std;

float sum(float *p[], int n){
    //
    if(!n) return 0;
    float *q=*p+1;
    return sum(&q,--n)+**p;
}
int main()
{
    float *p;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p[i];
    }

    cout<<sum(&p,n)<<endl;
    return 0;
}
