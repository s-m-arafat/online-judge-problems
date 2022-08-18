//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void soln()
{
    int n;
    cin>>n;
    int a[100]={0};
    bool flag;
    for( int i=0; i<n; i++){
        cin>>a[i];
        if(i) (a[i]<a[i-1])?flag=false:flag=true;
    }
    if(flag){
        int i = n-1;
        while(a[i]>=0){
            if(i)a[i] -= a[i-1];

            if(i==1) i = n;
            i--;
        }
        for(int j=1; j<n; j++){
            if(a[j]>0){
                flag=false;
                break;
            }
            else flag=true;
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
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

