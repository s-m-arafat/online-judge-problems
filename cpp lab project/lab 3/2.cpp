#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"Enter your mark: "<<endl;
    cin>>mark;
    if(mark>=0){
    cout<<"Your grade is:"<<endl;
    switch(mark/5)
    {
    case 8:
        cout<<"D"<<endl;
        break;
    case 9:
        cout<<"C"<<endl;
        break;
    case 10:
        cout<<"C+"<<endl;
        break;
    case 11:
        cout<<"B-"<<endl;
        break;
    case 12:
        cout<<"B"<<endl;
        break;
    case 13:
        cout<<"B+"<<endl;
        break;
    case 14:
        cout<<"A-"<<endl;
        break;
    case 15:
        cout<<"A"<<endl;
        break;
    case 16:
        cout<<"A+"<<endl;
        break;
    case 17:
        cout<<"A+"<<endl;
        break;
    case 18:
        cout<<"A+"<<endl;
        break;
    case 19:
        cout<<"A+"<<endl;
        break;
    case 20:
        cout<<"A+"<<endl;
        break;
    default:
        cout<<"F"<<endl;
        break;
    }
    }
    else{
        cout<<"Mark should be positive.";
    }
    return 0;
}

