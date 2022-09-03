#include <iostream>
using namespace std;

int main()
{
	int n,i,j;
	int temp;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)cin>>arr[i];

	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout<<"Sorted Array :";
	for(i=0;i<n;i++)cout<<arr[i]<<" ";

	return 0;
}


