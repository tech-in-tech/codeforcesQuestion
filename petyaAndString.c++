#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    // Convert both strings to uppercase
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);

    // Compare the strings and print results
    if (s1 == s2) {
        cout << 0;
    }
    if (s1 > s2) {
        cout << 1;
    }
    if (s1 < s2) {
        cout << -1;
    }

    return 0;
}
