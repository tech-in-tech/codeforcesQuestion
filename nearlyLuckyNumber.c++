#include <iostream>
#include <string>
using namespace std;

bool isLucky(int count) {
    string countStr = to_string(count);
    for (char digit : countStr) {
        if (digit != '4' && digit != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    long long num;
    cin >> num;

    string numToString = to_string(num);
    int luckyCount = 0;

    for (char digit : numToString) {
        if (digit == '4' || digit == '7') {
            luckyCount++;
        }
    }

    if (isLucky(luckyCount)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
