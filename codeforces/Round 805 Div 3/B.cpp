
//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
#include<algorithm>

using namespace std;

void soln()
{
    string str;
    cin>>str;
    int day = 0;
    for (int i = 0; i < str.length();) {
        int alpha[26] = {0};
        int mem=0;
        while (mem <= 3){
            int letter = str[i];
            if(alpha[letter-97]){
                i++;
                continue;
            }
            else{
                alpha[letter-97] = 1;
                mem++;
                i++;
            }
        }
        day++;
        i--;
    }

    cout<<day<<endl;
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
