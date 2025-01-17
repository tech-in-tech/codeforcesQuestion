#include <iostream>
#include <vector>
#include <algorithm> // For max_element
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> freq(150, 0); // Ensure frequency vector has enough size and is initialized to 0

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < 150) { // Ensure x is within bounds
            freq[x]++;
        } else {
            cout << "Error: Input value exceeds maximum supported range.\n";
            return;
        }
    }

    auto maxElementIt = max_element(freq.begin(), freq.end());
    int maxFreq = *maxElementIt;

    cout << n - maxFreq << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
