
//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void soln()
{
    int n, h[10], m[10];
    int totalM[10];
    int hVlad, mVlad, tVlad;
    int minSleep = INT_MAX, maxSleep = INT_MAX;
    bool flag = false, flag0= false;

    cin>>n>>hVlad>>mVlad;
    tVlad = (hVlad*60)+mVlad;

    for (int i=0; i<n; i++){
        cin>>h[i]>>m[i];
        totalM[i] = (h[i]*60)+m[i];
        if(hVlad == h[i] && mVlad == m[i]) {
            flag0=true;
        }
        if(totalM[i]>tVlad && totalM[i]<maxSleep){
            maxSleep = totalM[i];
            flag = true;
        }
        else{
            if(totalM[i]<minSleep) minSleep = totalM[i];
        }
    }
    if(flag0) cout<<0<<" "<<0<<endl;
    else if(flag){
        int diff = maxSleep-tVlad;
        cout<<diff/60<<" "<<diff - ((diff/60)*60)<<endl;
    }
    else {

        int totalSleep = ((24*60) - tVlad)+minSleep;
        int hour = minSleep/60;
        int minute = minSleep - (hour*60);
        int sleepHour = totalSleep/60;
        int sleepMinute = totalSleep - (sleepHour*60);
        if (sleepMinute == 60) sleepHour++, sleepMinute = 0;

        cout<<sleepHour<<" "<<sleepMinute<<endl;
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
