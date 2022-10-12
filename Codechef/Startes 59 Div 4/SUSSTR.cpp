//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'


using namespace std;

void soln()
{
    ll n;
    cin>>n;
    vector <char> s(n);
    vector <bool> t;
    for(int i=0; i<n; i++)cin>>s[i];

    for(int i=0, j=n-1; i<=j; i++,j--){
        if(s[i] == '0') t.insert(t.begin(),0);
        else t.push_back(1);

        if(i<j){
            if(s[j] == '0') t.push_back(0);
            else t.insert(t.begin(),1);
        }

    }
    for(int i=0; i<n; i++)cout<<t[i];
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

