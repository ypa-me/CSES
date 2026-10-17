
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> p(n);
    long long total = 0;
    for (auto &w : p) { cin >> w; total += w; }

    long long best = total;                  // worst case: everything vs nothing
    for (int mask = 0; mask < (1 << n); mask++) {
        long long s = 0;
        for (int i = 0; i < n; i++) {
            if (mask >> i & 1)               // bit i on -> apple i in group A
                s += p[i];
        }
        best = min(best, llabs(total - 2 * s));
    }
    cout << best << "\n";
}

