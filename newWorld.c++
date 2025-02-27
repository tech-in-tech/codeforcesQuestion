#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    int n, k, p;
    cin >> n >> k >> p;

    // Check if the target sum is possible
    int maxPossible = n * p;
    int minPossible = n * (-p);

    if (k > maxPossible || k < minPossible) {
        cout << -1 << endl;
        return;
    }

    // Calculate minimum operations
    int operations = (abs(k) + p - 1) / p; // Equivalent to ceil(|k| / p)
    
    cout << operations << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
