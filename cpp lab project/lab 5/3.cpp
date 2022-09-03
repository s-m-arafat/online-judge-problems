#include <iostream>
#include<cmath>
using namespace std;

int is_square(int x)
{
	if (x >= 0) {
		int sqr = sqrt(x);
		if(sqr * sqr == x) return 1;
	}
	return 0;
}

int main()
{
	int x;
	cin>>x;
	if (is_square(x)) cout << "Yes";
	else cout << "No";
	return 0;
}

