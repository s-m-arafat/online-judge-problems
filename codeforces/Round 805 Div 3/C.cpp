//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void soln()
{
    int stations[100000] = {0};
    int initial = INT_MAX;
    int last = INT_MIN;
    int numOStation;
    cin>>numOStation;
    for(int i = 0; i < numOStation; i++){
        cin>>stations[i];
    }
    for(int i = 0; i < numOStation; i++){
        cout<<stations[i];
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

