#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    if (n % 2 != 0 || n < 4) {
        cout << -1 << endl;
        return;
    }

    long long minBuses = (n + 5) / 6; // Ceiling of n / 6
    long long maxBuses = n / 4;

    // Ensure there's a valid combination of 4s and 6s to reach n
    bool possible = false;
    for (long long buses = minBuses; buses <= maxBuses; ++buses) {
        if (4 * buses <= n && n <= 6 * buses) {
            possible = true;
            minBuses = buses;
            break;
        }
    }

    if (possible) {
        cout << minBuses << " " << maxBuses << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
