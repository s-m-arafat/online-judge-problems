
//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void soln()
{
    int field[2][2];
    int colCount=0;
    int totalMove = 0;
    for (int i = 0; i < 2; i++){
        for( int j = 0; j < 2; j++){
            cin>>field[i][j];
            if(field[i][j]) colCount++;
        }
    }
    if(!colCount) cout<<0<<endl;
    else if(colCount != 4) cout<<1<<endl;
    else cout<<2<<endl;
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
