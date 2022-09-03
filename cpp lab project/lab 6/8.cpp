#include <iostream>
#include <cmath>
using namespace std;
double stdev(double arr[], int n){
    double sum = 0.0, mean, standardDeviation = 0.0;
    int i;
    for(i = 0; i < n; ++i){
        sum += arr[i];
    }
    mean = sum / n;

    for(i = 0; i < n; ++i) standardDeviation += pow(arr[i] - mean, 2);

    return sqrt(standardDeviation / n-1);
}
int main()
{
    int i;
    double arr[100];
    int n;
    cin>>n;
    cout << "Enter elements: ";
    for(i = 0; i < n; ++i)cin >> arr[i];
    cout << endl << "Standard Deviation = " << stdev(arr,n);
    return 0;
}


