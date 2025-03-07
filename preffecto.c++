#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to check if a number is a perfect square
bool isPerfectSquare(long long num) {
    long long root = sqrt(num);
    return (root * root == num);
}

void solve() {
    long long n;
    cin >> n;

    long long sum = (n * (n + 1)) / 2; // Sum of first N numbers

    // If sum itself is a perfect square, return -1
    if (isPerfectSquare(sum)) {
        cout << -1 << "\n";
        return;
    }

    vector<long long> v(n + 1); // Reduced memory usage
    for (long long i = 1; i <= n; i++) {
        v[i] = i;
    }

    // Swap elements based on correct conditions
    for (long long i = n - 1; i > 0; i--) {
        long long tempSum = (i * (i + 1)) / 2;
        if (isPerfectSquare(tempSum)) {
            swap(v[i], v[i + 1]);
        }
    }

    for (long long i = 1; i <= n; i++) {
        cout << v[i] << " ";
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
