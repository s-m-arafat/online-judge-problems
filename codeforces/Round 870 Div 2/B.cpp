#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_palindrome(const vector<int>& arr, int x) {
    int n = arr.size();
    int i = 0, j = n - 1;
    while (i <= j) {
        if (arr[i] % x != arr[j] % x) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int biggest_palindrome(const vector<int>& arr) {
    int n = arr.size();
    int max_x = 0;
    for (int x = 1; x <= 1000000000; x++) { // we can stop at 10^9 since the max value of ai is 10^9
        if (is_palindrome(arr, x)) {
            max_x = x;
        }
    }
    return max_x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << biggest_palindrome(arr) << endl;
    }
    return 0;
}
