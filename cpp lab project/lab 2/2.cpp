#include<iostream>
using namespace std;
int main()
{
    float length, width;
    cout<<"Enter the length and the width: "<<endl;
    cin>>length>>width;
    float area=length*width;
    float perimeter=2*(length+width);
    cout<<"Area is "<<area<<endl;
    cout<<"Perimeter is "<<perimeter<<endl;
    return 0;
}
