#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x1,x2,y1,y2;
    cout<<"Enter two coordinate: "<<endl;

    cout<<"x1 = ";cin>>x1;
    cout<<"y1 = ";cin>>y1;
    cout<<"x2 = ";cin>>x2;
    cout<<"y2 = ";cin>>y2;

    float result=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout<<"The distance between the given coordinates is "<<result<<endl;
    return 0;
}
