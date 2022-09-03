#include <iostream>
using namespace std;


int main()
{
    int n;
	cin>>n;
	int arr[n];
	int first = INT_MIN, second = INT_MIN, third = INT_MIN;

	for(int i=0; i<n; i++) cin>>arr[i];
	for(int i = 0; i < n; i++){
		if (first < arr[i]){
			third = second;
			second = first;
			first = arr[i];
		}
		else if (second < arr[i] && arr[i] != first){
			third = second;
			second = arr[i];
		}
		else if (third < arr[i] && arr[i] != second) third = arr[i];
	}
	cout << "Three largest elements are "<< first << " " << second << " "<< third << endl;
	return 0;
}

