//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void soln()
{
    string s;
    int n;
    int letter;
    cin>>n;
    cin>>s;
    int total = 0;
    int alpha[26] = {0};
    for (int i = 0; i < n; i++){
        letter = s[i] - 65;
        alpha[letter]++;
        if(alpha[letter] == 1) total++;
    }
    for(int i = 0; i<26;i++) total += alpha[i];
    cout<<total<<endl;
}
int main()
{
    ios::sync_with_stdio(false);

    int tests;
    cin>>tests;
    while(tests--)
        soln();
    return 0;
}

