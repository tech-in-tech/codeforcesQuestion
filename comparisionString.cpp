#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> left(n + 1, 0), right(n + 1, 0);

    // Count increasing sequences '<'
    for (int i = 1; i <= n; i++) {
        if (s[i - 1] == '<') 
            left[i] = left[i - 1] + 1;
    }

    // Count decreasing sequences '>'
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '>') 
            right[i] = right[i + 1] + 1;
    }

    // The minimum cost is max(left[i], right[i]) + 1
    int min_cost = 0;
    for (int i = 0; i <= n; i++) {
        min_cost = max(min_cost, max(left[i], right[i]) + 1);
    }

    cout << min_cost << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
