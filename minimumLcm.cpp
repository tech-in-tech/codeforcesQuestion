#include <iostream>
using namespace std;

// Function to find the largest proper divisor of n
long long largest_proper_divisor(long long n) {
    for (long long i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return n / i;
        }
    }
    return 1; // if n is prime
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n % 2 == 0) {
            // Even n: split equally
            cout << n / 2 << " " << n / 2 << endl;
        } else {
            // Odd n: use largest proper divisor
            long long d = largest_proper_divisor(n);
            cout << d << " " << n - d << endl;
        }
    }
    return 0;
}
