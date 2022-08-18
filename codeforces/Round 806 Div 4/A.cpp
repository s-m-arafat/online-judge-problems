//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void soln()
{
    string s;
    cin>>s;
    if(s.length()>3) cout<<"NO"<<endl;
    else{
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c){return tolower(c);});
        if(s == "yes") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
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

