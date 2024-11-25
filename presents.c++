#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    
    vector<int> vec(n);
    for (int i = 0; i < n; i++) { 
        cin >> vec[i];
    }

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) { 
        mp[vec[i]] = i + 1; 
    }

    // Result vector
    vector<int> ans(n + 1, 0);
    for (auto ele : mp) {
        if (ele.first <= n) { 
            ans[ele.first] = ele.second;
        }
    }

    
    for (int i = 1; i <= n; i++) { 
        cout << ans[i] << " ";
    }
    cout << "\n";

    return 0;
}
