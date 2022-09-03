#include <iostream>
using namespace std;

int mostOccured(int arr[], int n) {
    int maxcount=0;
    int result;
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j])
            count++;
        }
        if(count>maxcount){
            maxcount=count;
            result = arr[i];
        }
    }
    return result;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	cout << mostOccured(arr, n);
	return 0;
}

