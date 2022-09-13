//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#define nl '\n'

using namespace std;

void soln()
{
    int n, digits;
    string s;
    vector <char> w;
    cin>>n;
    for(int i=0; i<n; i++) cin>>s[i];
    int i = n-1;
    while(i>=0){
        if(((int)s[i]-48) == 0) {
                digits = (((int)s[i-2]-48)*10)+((int)s[i-1]-48);
                i-= 3;
        }
        else {
                digits = ((int)s[i]-48);
                i--;
        }
        w.push_back(char(96+digits));
    }
    for(int j=w.size()-1; j>=0; j--) cout<<w[j];
    cout<<nl;
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

