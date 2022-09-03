#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter five integers: "<<endl;
    int n1, n2, n3, n4, n5,largest,smallest;
    cin>>n1>>n2>>n3>>n4>>n5;
    largest=(n1>n2&&n1>n3&&n1>n4&&n1>n5)?n1:((n2>n3&&n2>n4&&n2>n5)?n2:((n3>n4&&n3>n5)?n3:((n4>n5)?n4:n5)));
    cout<<"The largest is "<<largest<<endl;
    smallest=(n1<n2&&n1<n3&&n1<n4&&n1<n5)?n1:((n2<n3&&n2<n4&&n2<n5)?n2:((n3<n4&&n3<n5)?n3:((n4<n5)?n4:n5)));
    cout<<"The smallest is "<<smallest<<endl;
    return 0;
}
