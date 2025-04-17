#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    vector<long long> v(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        v[i] = s[i - 1] - '0' - 1;
    }

    for (int i = 1; i <= n; ++i) {
        v[i] += v[i - 1];
    }

    map<long long, long long> m;
    long long ans = 0;
    for (int i = 0; i <= n; ++i) {
        m[v[i]]++;
    }

    for (auto j : m) {
        ans += j.second * (j.second - 1) / 2;
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
