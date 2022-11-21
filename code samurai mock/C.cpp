//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll>vll;
typedef vector<int>vi;
typedef vector<vll>vvl;
typedef vector<vi>vvi;

#define nl '\n'
#define get cin>>
#define imn INT_MIN
#define imx INT_MAX
//vectors
#define allv(a) a.begin(),a.end()
#define pb push_back
//
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<endl
//loops
#define loop(x,n) for(int x = 0; x < n; x++)
#define loopn(x,a,n) for(int x = a; x <= n; x++)
#define loopr(x,n) for(int x = n; x >= 0; x--)
//cout
#define print(x) cout<<x<<endl
#define prnt(x) cout<<x

vector<string> split (string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}

void soln()
{
    vector<string>ss;
    string s,str;
    char c;
    while(getline(cin,str)){
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        s+=str;
    }
    
    // print(s);
    string del = "--";
    size_t pos = 0;
    string token;
    while ((pos = s.find(del)) != string::npos) {
        token = s.substr(0, pos);
        ss.pb(token);
        
        s.erase(0, pos + del.length());
    }
    sort(allv(ss[0]));
    sort(allv(s));
    if(ss[0]==s) print("same");
    else print("different");
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int tests;
    // cin>>tests;s
    // while(tests--)
        soln();
    return 0;
}
