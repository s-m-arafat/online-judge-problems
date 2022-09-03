#include <iostream>
using namespace std;

int main() {
    int f1 = -1, f2 = 1, nextF, n;

    cout << "Enter a range(0-nth): ";
    cin >> n;
    do{
        nextF = f1 + f2;
        cout << nextF << " ";
        f1 = f2;
        f2 = nextF;
        n--;
    }while(n > 0);
    return 0;
}
