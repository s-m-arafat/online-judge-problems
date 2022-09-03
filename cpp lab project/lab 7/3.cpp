#include <iostream >
using namespace std;

void get(int *&arr, int &n){
    cout << "How many numbers will you type?" << endl;
    cin >> n;
    arr = new int(n);
    cout << "Enter " << n << " numbers:" << endl;
    for (int x = 0; x < n; x++){
        cin >> arr[x];
    }
}
void print(int *arr, int n){
    cout << "You typed: ";
    for (int x = 0; x < n; x++){
        cout << arr[x] << " ";
    }
    cout << endl;
}

int main ()
{
    int n;
    int *arr;
    get(arr, n);
    print(arr, n);
    delete [] arr;
    return 0;
}
