#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<string> names;
    string text;
    ifstream iFile("names.txt");
    int lines=0;
    while(getline(iFile, text)){
        istringstream iS(text);
        string word;
        int i = 0;
        while(iS>>word){
            names.push_back(word);
        }
    }
    cout<<"First Name: "<<names[0]<<endl;
    cout<<"Lase Name: "<<names[2]<<endl;
    cout<<"Middle Name: "<<names[1]<<endl;
    iFile.close();
    return 0;
}


