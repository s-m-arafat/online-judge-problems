#include<iostream>
using namespace std;
int min(int n1 , int n2 , int n3 , int n4){
    return (n1 < n2 && n1 < n3 && n1 < n4) ? n1 : ((n2 < n3 && n2 < n4) ? n2 : (n3 < n4 ? n3 : n4));
}
int main()
{
    cout<<min(5,8,6,1);
}

