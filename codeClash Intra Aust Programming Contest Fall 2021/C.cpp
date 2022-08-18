//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void soln(int Case)
{
    int x, y, s;
    cin>>x>>y>>s;
    float area = ((3*sqrt(3))/2)*(s*s);
    if(x<y) cout<<"Case #"<<Case<<": Demogorgon"<<endl;
    else if(x>=y){
        if(area>=x) cout<<"Case #"<<Case<<": Demogorgon"<<endl;
        else cout<<"Case #"<<Case<<": Eleven"<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);

    int tests, i=1;
    cin>>tests;
    while(tests--)
        soln(i++);
    return 0;
}
