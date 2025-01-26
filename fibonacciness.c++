#include <bits/stdc++.h>
using namespace std;

void solve() {
    int ans = 0;
    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;

    int diff1 = a4 - a2;
    int diff2 = a5 - a4;
    int sum1 = a1 + a2;

    if (sum1 == diff1 && diff1 == diff2) {
        ans = 3;
    } else if (sum1 == diff1 || diff1 == diff2 || diff2 == sum1) {
        ans = 2;
    } else {
        ans = 1;
    }

    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
