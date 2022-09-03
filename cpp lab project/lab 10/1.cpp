#include <bits/stdc++.h>
using namespace std;

void countLtr(string word, vector<int> &alpha)
{
    for(int i=0; i<word.size(); i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            int ascii = word[i];
            alpha[ascii-97]++;
        }
        else if(word[i] >= 'A' && word[i] <= 'Z'){
            int ascii = word[i];
            alpha[ascii-65]++;
        }
    }
}
int main()
{
    int tWords = 0;
    vector <int> alpha(26,0);
    string text;
    ifstream iFile("text.txt");
    int lines=0;
    while(getline(iFile, text)){
        istringstream iS(text);
        string word;
        int count = 0;
        while(iS>>word){
            tWords++;
            countLtr(word, alpha);
        }
        lines++;
    }
    iFile.close();
    cout<<"lines: "<<lines<<" words :"<<tWords<<endl;
    for(int i=0; i<26; i++) cout<<char(i+97)<<" :"<<alpha[i]<<endl;
    return 0;
}

