#include<iostream>
using namespace std;
int main()
{
    char character;
    cout<<"Enter a character: "<<endl;
    cin>>character;
    switch(character)
    {
    case 'A':
        cout<<"The character is a vowel."<<endl;
        break;
    case 'a':
        cout<<"The character is a vowel."<<endl;
        break;
    case 'E':
        cout<<"The character is a vowel."<<endl;
        break;
    case 'e':
        cout<<"The character is a vowel."<<endl;
        break;
    case 'I':
        cout<<"The character is a vowel."<<endl;
        break;
    case 'i':
        cout<<"The character is a vowel."<<endl;
        break;
    case 'O':
        cout<<"The character is a vowel."<<endl;
        break;
    case 'U':
        cout<<"The character is a vowel."<<endl;
        break;
    case 'u':
        cout<<"The character is a vowel."<<endl;
        break;
    default:
        cout<<"The character is a consonant."<<endl;
        break;
    }
    return 0;
}
