
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <set>

using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    // Check invalid cases
    if (a + b > n) {
        cout << "NO\n";
        return;
    }
    if ((a == 0 && b > 0) || (b == 0 && a > 0)) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    // Player 1 sequence is always 1, 2, ..., n
    vector<int> A(n);
    iota(A.begin(), A.end(), 1);

    vector<int> B(n, 0);
    set<int> used;

    // Step 1: Fill the middle elements for Ties
    for (int i = b; i < n - a; ++i) {
        B[i] = A[i];
        used.insert(A[i]);
    }

    // Step 2: Fill the front elements so Player 2 wins b times
    int highest = n;
    for (int i = b - 1; i >= 0; --i) {
        while (used.count(highest)) {
            highest--;
        }
        B[i] = highest;
        used.insert(highest);
    }

    // Step 3: Fill the back elements so Player 1 wins a times
    int lowest = 1;
    for (int i = n - a; i < n; ++i) {
        while (used.count(lowest)) {
            lowest++;
        }
        B[i] = lowest;
        used.insert(lowest);
    }

    // Print Player 1's cards
    for (int i = 0; i < n; ++i) {
        cout << A[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    // Print Player 2's cards
    for (int i = 0; i < n; ++i) {
        cout << B[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

