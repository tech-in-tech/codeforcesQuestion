#include<iostream>
#include<vector>
#include<algorithm> // for sort
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        // Ensure the size of the sum array is sufficient
        vector<int> sum(k + 1, 0);

        for (int i = 0; i < k; i++) {
            int b, c;
            cin >> b >> c;
            if (b <= k) {
                sum[b] += c;
            }
        }

        // Sort in descending order
        sort(sum.rbegin(), sum.rend());

        int ans = 0;
        // Only sum up to the smaller of n or k+1 elements
        for (int i = 0; i < min(n, k + 1); i++) {
            ans += sum[i];
        }

        cout << ans << "\n";
    }

    return 0;
}
