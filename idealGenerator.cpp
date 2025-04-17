#include <iostream>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  (n % 2 == 0) ? cout << "NO\n" : cout << "YES\n";
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}