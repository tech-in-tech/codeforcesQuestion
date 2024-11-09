#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int upperChar = 0;
    int lowerChar = 0;

    // Count uppercase and lowercase characters
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            lowerChar++;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            upperChar++;
        }
    }

    // Check which count is greater and transform accordingly
    if (upperChar > lowerChar) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s;
    return 0;
}
