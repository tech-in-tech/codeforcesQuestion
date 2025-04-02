#include <iostream>
#include <vector>
#include <numeric> // For accumulate()
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> vec(n);
    vector<int> prefixSum(n + 1, 0); // Prefix sum array

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        prefixSum[i + 1] = prefixSum[i] + vec[i]; // Compute prefix sum
    }

    int sum = prefixSum[n]; // Total sum of the array

    while (q--) {
        int left, right, k;
        cin >> left >> right >> k;

        // Sum of elements in range [left, right]
        int removedSum = prefixSum[right] - prefixSum[left - 1];

        // Compute new sum after replacing the range with `k`
        int newSum = sum - removedSum + ((right - left + 1) * k);

        // Check if newSum is odd
        cout << (newSum % 2 == 0 ? "NO\n" : "YES\n");
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
