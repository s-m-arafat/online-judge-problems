#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[]="ABCDEFGH";
    char s2[10]="xyz";
    cout<<"Before strcpy(s1,s2)"<<endl;
    cout<<"Content of s1: "<<s1<<endl;
    cout<<"Length of s1: "<<strlen(s1)<<endl;
    cout<<"Content of s2: "<<s2<<endl;
    cout<<endl;
    cout<<"After strcpy(s2,s1)"<<endl;
    cout<<"Content of s2: "<<strcpy(s2,s1)<<endl;
    cout<<"length of s2: "<<strlen(s2)<<endl;
    cout<<"Content of s1: "<<s1<<endl;
    cout<<"Length of s: "<<strlen(s1)<<endl;
    for(int i=0; i<strlen(s1);i++){
        cout<<s1[i]<<endl;
    }
    cout<<endl;
    for(int i=0; i<strlen(s2);i++){
        cout<<s2[i]<<endl;
    }
}
