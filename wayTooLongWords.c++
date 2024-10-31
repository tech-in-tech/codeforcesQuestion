#include <iostream>
#include <vector>
using namespace std;

void wayTooLongWords(vector<string> str) {
    for (int i = 0; i < str.size(); i++) { // Start from index 0 to include all words
        if (str[i].size() > 10) { // Check if the word length is strictly more than 10
            string s = to_string((str[i].size()) - 2);
            string ans = str[i][0] + s + str[i][str[i].size() - 1]; // Build the abbreviation
            cout << str[i][0] + s + str[i][str[i].size() - 1] << "\n";
        } else {
            cout << str[i] << "\n"; // Print the word as-is if it's not too long
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> str;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        str.push_back(s);
    }
    wayTooLongWords(str);
    return 0;
}
