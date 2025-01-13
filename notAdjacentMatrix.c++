#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << "\n";
        return;
    }
    if (n == 2) {
        cout << -1 << "\n";
        return;
    }

    vector<vector<int>> a(n, vector<int>(n, 0)); // Dynamically allocate the 2D array
    int c = 1;

    // Fill the matrix with odd numbers first
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) { // Fill odd positions first
                a[i][j] = c++;
            }
        }
    }

    // Fill the matrix with even numbers
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 != 0) { // Fill even positions
                a[i][j] = c++;
            }
        }
    }

    // Print the resulting matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
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
