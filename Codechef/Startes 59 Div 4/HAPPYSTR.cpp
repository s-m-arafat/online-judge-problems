//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'


using namespace std;

void soln()
{
    string s;
    cin>>s;
    int v=0;
    vector <int> flag(s.size(),0);
    for(int i=0; i<s.size(); i++){
        if((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')){
            flag[i]=1;
            //if(i==0) v++;
            if(i>0 && flag[i-1]) v++;
        }
        else v=0;
        if (v>=2) break;
    }
    if(v>=2) cout<<"HAPPY"<<nl;
    else cout<<"SAD"<<nl;
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

