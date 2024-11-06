#include <iostream>
#include <string>

using namespace std;

string minNumber(string num) {
    for (int i = 0; i < num.size(); i++) {
        int digit = num[i] - '0';  // Convert char to int
        int invertedDigit = 9 - digit;
        
        // Choose the smaller of the original digit or its inverted value
        if (invertedDigit < digit) {
            // Ensure the first digit doesn't become zero
            if (i == 0 && invertedDigit == 0) {
                continue;
            }
            num[i] = '0' + invertedDigit;  // Convert invertedDigit to char and assign
        }
    }
    return num;
}

int main() {
    string num;
    cin >> num;  // Take input as a string to handle large numbers
    cout << minNumber(num) << endl;
    return 0;
}
