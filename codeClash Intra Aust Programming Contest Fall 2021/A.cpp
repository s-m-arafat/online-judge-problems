//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    char balls[100];
    int total = 0, n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>balls[i];
        if(balls[i] == 'L') total++;
    }
    cout<<total/6;
    return 0;
}

