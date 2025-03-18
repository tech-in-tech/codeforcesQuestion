#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

// Function to precompute extremely round numbers
void precompute() {
    for (int i = 1; i <= 100000; i *= 10) {
        for (int j = 1; j <= 9; j++) {
            v.push_back(i * j);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    int count = 0;
    for (auto ele : v) {
        if (ele <= n)
            count++;
        else
            break;
    }
    cout << count << "\n";
}

int main() {
    int t;
    cin >> t;
    
    precompute();  // Compute once before test cases
    
    while (t--) {
        solve();
    }
    return 0;
}
