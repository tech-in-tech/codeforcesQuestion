#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> res;
        string s;
        cin >> s;
        int len = s.size();
        
        for (int i = 0; i < len; i++) {
            if (s[i] != '0') {
                int lastCount = len - i - 1;  // Corrected power calculation
                int num = (s[i] - '0') * (int)pow(10, lastCount);  // Cast to int
                res.push_back(num);
            }
        }
        
        cout << res.size() << "\n";
        for (auto ele : res) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}
