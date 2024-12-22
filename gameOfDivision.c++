#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        bool found = false; 
        for (int i = 0; i < n; i++) {
            bool flag = true; 
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                if (abs(v[i] - v[j]) % k == 0) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                cout << "YES\n" << i + 1 << "\n";
                found = true;
                break; 
            }
        }

        if (!found) {
            cout << "NO\n";
        }
    }
    return 0;
}
