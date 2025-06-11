#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    string s;
    cin >> s;

    vector<int> cnt(10, 0);
    for (char c : s) {
        cnt[c - '0']++;
    }

    string ans = "";
    for (int i = 0; i < 10; ++i) {
        int required = 9 - i;
        for (int d = required; d <= 9; ++d) {
            if (cnt[d] > 0) {
                ans += (char)(d + '0');
                cnt[d]--;
                break;
            }
        }
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
