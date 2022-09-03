#include<iostream>
#include<string>
using namespace std;
void strcat(char *dest, char *src){
    int i=0;
    while(dest[i]) i++;
    int j =0;
    while(src[j]){
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i]='\0';
}
int main()
{
    char dest[1000];
    char src[1000];
    cin.getline(dest,1000);
    cin.getline(src,1000);
    strcat(dest, src);
    cout<<dest<<endl;

    return 0;
}

