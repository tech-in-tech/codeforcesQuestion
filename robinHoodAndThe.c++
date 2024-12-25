#include <iostream>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    long long start = max(1LL, n - k + 1);

    long long total_leaves = (n * (n + 1) / 2) - ((start - 1) * start / 2);

    if (total_leaves % 2 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
