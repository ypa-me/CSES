
#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    long long y, x;
    cin >> y >> x;

    long long layer = max(y, x);
    long long largest = layer * layer;
    long long previous = (layer - 1) * (layer - 1);

    long long answer;

    if (layer % 2 == 0) {
        // Even layer: largest number is at (layer, 1)

        if (y == layer) {
            // Bottom row
            answer = largest - x + 1;
        } else {
            // Right column
            answer = previous + y;
        }

    } else {
        // Odd layer: largest number is at (1, layer)

        if (x == layer) {
            // Right column
            answer = largest - y + 1;
        } else {
            // Bottom row
            answer = previous + x;
        }
    }

    cout << answer << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}


