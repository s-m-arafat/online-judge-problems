#include <iostream>

using namespace std;


void getValues(int &x,int *c){
    cout<<"Enter value of x: ";
    cin>>x;
    cout<<"enter values of c (c0-c5): "<<endl;
    for(int i=0; i<=x; i++){
        cout<<"c"<<i<<": ";
        cin>>c[i];
    }
}
int polyCalc(int x,int *c){
    int result = c[x];
    while(x){
        result = (result*x) + c[x-1];
        x--;
    }
    return result;
}
int main()
{
    int x,c[6];
    getValues(x,c);
    cout<<polyCalc(x,c);
    return 0;
}
