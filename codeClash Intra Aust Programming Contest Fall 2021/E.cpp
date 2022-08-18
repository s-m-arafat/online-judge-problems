//Auth:Shakil Mahmud Arafat AUST, Dept. of EEE

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int subArraySum(int arr[], int n, int dollars)
{
	int current_sum, i, j, t;
	for (i = 0; i < n; i++) {
        t = 0;
		current_sum = arr[i];


		for (j = i + 1; j <= n; j++) {
			if ((current_sum == dollars) && (t==4)) {
				return 1;
			}
			if (current_sum > dollars || j == n)
				break;
			current_sum = current_sum + arr[j];
			t++;
		}
	}
	return 0;
}

int main()
{
	int n, x;
	int lipsticks[100];
	cin>>n>>x;
	for(int i=0; i<n; i++) cin>>lipsticks[i];


	if(subArraySum(lipsticks, n, x)==1) cout<<"Labeo bross, labeo !!"<<endl;
    else if(subArraySum(lipsticks, n, x)==0) cout<<"No labeo sorry :("<<endl;
	return 0;
}

