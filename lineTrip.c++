#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    vector<int> vec(n + 1);
    vec[0] = 0;
    
    for (int i = 1; i <= n; i++) {
        cin >> vec[i];
    }

    int maxDiff = INT_MIN;

    for (int i = 1; i <= n; i++) {  // Corrected loop index to avoid out-of-bounds
        maxDiff = max(vec[i] - vec[i - 1], maxDiff);
    }

    // Calculate the difference from the last element to 'x'
    int diff = (x - vec[n]) * 2;

    cout << max(maxDiff, diff) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
