#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int n;
	cin>>n;
	int sum = 0;

    ///first nth
	for(int i=0; i<n; i++){
        sum += (pow(-1,i)*pow((2*i)+1,2));
        cout<<(2*i)+1<<"^2";
        if(i%2 && i<n-1) cout<<"+";
        else if (i<n-1) cout<<"-";
	}
	cout<<" = "<<sum<<endl;

	return 0;
}
