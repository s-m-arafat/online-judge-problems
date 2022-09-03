#include<iostream>
using namespace std;
void swap4(int *p, int *q, int *r, int *s){
    int temp=*p;
    *p=*q;
    *q=*r;
    *r=*s;
    *s=temp;
}
int main()
{
    int a=1,b=2,c=3,d=4;
    swap4(&a,&b,&c,&d);
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    return 0;
}

