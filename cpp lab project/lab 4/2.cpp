#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int n;
	cin>>n;
	int sum = 0;


	for(int i=1; i<=n; i++){
        sum += pow(i,2);
        cout<<i<<"^2";
        if(i<n) cout<<"+";
	}
	cout<<" = "<<sum<<endl;

	return 0;
}

