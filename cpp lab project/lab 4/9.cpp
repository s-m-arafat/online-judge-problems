#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int n;
	cin>>n;
	long long unsigned int sum = 0;

    ///first nth
	for(int i=1; i<=n; i++){
        sum += pow((2*i),2*i);
        cout<<(2*i)<<"^"<<2*i;
        if (i<n) cout<<"+";
	}
	cout<<" = "<<sum<<endl;

	return 0;
}

