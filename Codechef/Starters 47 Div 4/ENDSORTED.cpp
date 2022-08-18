//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void soln()
{
    int n;
    int minPos, maxPos;
    int minMove, maxMove;
    cin>>n;
    int p[100000];
    for (int i = 0; i<n; i++){
        cin>>p[i];
        if(p[i]==n)maxPos=i+1;
        if(p[i] == 1) minPos = i+1;
    }
    if(minPos == 1 && maxPos == n) cout<<0<<endl;
    else {
        if(minPos>maxPos){
            maxMove = n - maxPos;
            minMove = minPos - 2;
        }
        else {
            maxMove = n - minPos;
            minMove = minPos - 1;
        }
        cout<<minMove+maxMove<<endl;
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

