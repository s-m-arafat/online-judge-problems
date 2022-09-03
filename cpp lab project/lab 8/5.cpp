#include <iostream>
using namespace std;

void removeSpaces(char *str)
{
    int i = 0, j = 0;
    while (str[i]){
        if (str[i] != ' ')str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
}

int main()
{
    char s1[1000];
    cin.getline(s1,1000);
    removeSpaces(s1);
    cout<<s1;
    return 0;
}

