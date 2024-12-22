#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        while (n) {
            string s = to_string(n);
            size_t pos = s.find("33");

            if (pos != string::npos) {
                s.erase(pos, 2);
            }

            if (s.empty()) {
                n = 0;
                break;
            }

            try {
                n = stoll(s); 
            } catch (const std::invalid_argument& e) {
                n = 0;
                break;
            }

            if (n >= 33) {
                n -= 33;
            } else {
                break; 
            }
        }

        if (n <= 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
