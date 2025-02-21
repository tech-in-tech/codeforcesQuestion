#include <iostream>
#include <vector>
using namespace std;
void solve() {
  int n;
  cin >> n;
  vector<int> b(n - 2);
  for (int i = 0; i < n - 2; i++) {
    cin >> b[i];
  }
  for (int i = 0; i <= n - 4; i++) { // Avoid out-of-bounds access
    if (b[i] == 1 && b[i + 1] == 0 && b[i + 2] == 1) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
