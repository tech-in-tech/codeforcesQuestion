#include <iostream>
#include <vector>
#include <algorithm> // For sort() and binary_search()
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    vector<long long> vec(n); // ✅ Correctly initialize the vector

    for (long long i = 0; i < n; i++) {
        cin >> vec[i]; // ✅ Properly insert elements
    }

    sort(vec.begin(), vec.end()); // ✅ Ensure vector is sorted before binary_search()

    if (binary_search(vec.begin(), vec.end(), k)) {
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
