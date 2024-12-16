#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t; 
    
    while (t--) {
        int n; // Input integer n
        cin >> n;
        
        // Output the count of ordered pairs (a, b)
        cout << (n - 1) << endl; 
    }
    
    return 0;
}
