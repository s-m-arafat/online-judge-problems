#include<iostream>
using namespace std;
void sort(float* p[], int n){
    float temp;
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n-i; j++){
            if (*(*p+j) > *(*p+j+1))
            {
                temp = *(*p+j);
                *(*p+j) = *(*p+j+1);
                *(*p+j+1) = temp;
            }
        }
    }
}
int main()
{
    float *data;
    for(int i=0; i<5; i++)cin>>data[i];
    sort(&data, 5);
    for(int i=0; i<5; i++)cout<<data[i]<<" ";
    return 0;
}
