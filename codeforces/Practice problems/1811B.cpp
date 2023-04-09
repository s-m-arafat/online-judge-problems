#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;

        int k = abs(x1 - x2) / 2; // number of concentric rings to cross
        int distance = 0;

        for (int i = 0; i < k; i++) {
            int ring_size = 4 * (n - i * 2) - 4; // size of the current ring
            int dist_outer = abs(y1 - 1) + abs(y2 - 1) + ring_size; // distance through outer edge
            int dist_inner = abs(y1 - n) + abs(y2 - n) + ring_size; // distance through inner edge
            distance += min(dist_outer, dist_inner);
            y1 = y1 == 1 ? n : 1; // move to the next ring
            y2 = y2 == 1 ? n : 1;
        }

        distance += abs(x1 - x2) + abs(y1 - y2);
        cout << (distance+1)%n << endl;
    }
    return 0;
}
