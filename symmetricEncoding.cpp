#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string b;
    cin >> b;

    set<char> uniqueSet(b.begin(), b.end());
    vector<char> r(uniqueSet.begin(), uniqueSet.end()); // sorted automatically

    int sz = r.size();
    unordered_map<char, char> decodeMap;

    // Build decoding map
    for (int i = 0; i < sz; i++) {
        decodeMap[r[i]] = r[sz - i - 1];
    }

    for (int i = 0; i < n; i++) {
        b[i] = decodeMap[b[i]];
    }

    cout << b << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
