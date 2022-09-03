#include<iostream>
#include<string>
using namespace std;
void strncpy(char *dest, char *src, int size){
    int i;
    for(i=0; i<size; i++){
        src[i] = dest[i];
    }
    src[i] = '\0';
}
int main()
{
    char dest[1000];
    cin.getline(dest,1000);

    char src[1000];
    strncpy(dest, src, 5);
    cout<<src<<endl;

    return 0;
}
