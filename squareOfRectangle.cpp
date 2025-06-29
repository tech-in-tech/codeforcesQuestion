#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void solve() {
    int l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

    int totalArea = l1 * b1 + l2 * b2 + l3 * b3;
    int s = sqrt(totalArea);

    // If the total area is not a perfect square
    if (s * s != totalArea) {
        cout << "NO\n";
        return;
    }

    // Try all arrangements (no rotation)
    // Case 1: All heights are s, widths sum to s
    if (b1 == s && b2 == s && b3 == s && l1 + l2 + l3 == s) {
        cout << "YES\n";
        return;
    }

    // Case 2: All widths are s, heights sum to s
    if (l1 == s && l2 == s && l3 == s && b1 + b2 + b3 == s) {
        cout << "YES\n";
        return;
    }

    // Case 3: l1 x b1 on top, l2 and l3 side-by-side below it
    if (l1 == s && b1 + max(b2, b3) == s) {
        if ((b2 == b3) && (l2 + l3 == s)) {
            cout << "YES\n";
            return;
        }
    }

    // Case 4: b1 x l1 on left, b2 and b3 stacked vertically on right
    if (b1 == s && l1 + max(l2, l3) == s) {
        if ((l2 == l3) && (b2 + b3 == s)) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
