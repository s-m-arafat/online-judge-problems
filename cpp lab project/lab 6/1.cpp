#include <iostream>
using namespace std;

float Min(float arr[], int n)
{
	int res = INT_MAX;
	for (int i = 0; i < n; i++){
        if(arr[i]<res) res = arr[i];
	}
	return res;
}


int main()
{
    int n;
	cin>>n;
	float arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	cout << Min(arr, n);
	return 0;
}


