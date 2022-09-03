#include <iostream>

using namespace std;

int countVowel(string text)
{
    int count = 0;
    for(int i = 0; i < int(text.size()); i++){
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u') count++;
        if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U') count++;
    }
    return count;

}

int main()
{
    string text;
    getline(cin, text);
    cout<<countVowel(text);
    return 0;
}
