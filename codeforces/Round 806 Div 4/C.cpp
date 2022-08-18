//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void soln()
{
    int nWheels;
    cin>>nWheels;
    int wheels[100]= {0};
    for(int i=0; i<nWheels; i++){
        cin>>wheels[i];
    }
    int nmoves;

    char moves[10] = {0};
    for(int i=0; i<nWheels; i++){
        cin>>nmoves;
        for(int j=0; j<nmoves; j++){
            cin>>moves[j];
            if(moves[j] == 'U'){
                (wheels[i])?wheels[i]--:(wheels[i]=9);
            }
            if(moves[j] == 'D'){
                (wheels[i]==9)?wheels[i]=0:wheels[i]++;
            }
        }
    }
    for(int i=0; i<nWheels; i++){
        cout<<wheels[i];
        if(i<nWheels-1) cout<<" ";
    }
    cout<<endl;

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
