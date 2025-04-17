#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int TotalCountTwo = 0;
    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        if (vec[i] == 2) TotalCountTwo++;
    }

    if (TotalCountTwo % 2 != 0) {
        cout << -1 << "\n"; // If count of 2s is odd, no way to split
        return;
    }

    if (TotalCountTwo == 0) {
        cout << 1 << "\n"; // No 2s, you can split anywhere, e.g. at position 1
        return;
    }

    int rightTwo = 0;

    for (int i = 0; i < n; i++) {
        if (vec[i] == 2) {
            rightTwo++;
        }
        if (rightTwo == TotalCountTwo / 2) {
            cout << i + 1 << "\n"; // Split after this index
            return;
        }
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
