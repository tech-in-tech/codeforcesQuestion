#include <iostream>
#include <vector>

using namespace std;

vector<int> find_divisors(int n, int d) {
    int product = n * d; // Calculate the product of n and d
    vector<int> divisors;

    // Iterate through odd digits (1, 3, 5, 7, 9)
    for (int i = 1; i <= 9; i += 2) { 
        if (product % i == 0) { // Check if i divides the product
            divisors.push_back(i);
        }
    }

    return divisors;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, d;
        cin >> n >> d;

        vector<int> result = find_divisors(n, d);

        for (int divisor : result) {
            cout << divisor << " ";
        }
        cout << endl;
    }

    return 0;
}
