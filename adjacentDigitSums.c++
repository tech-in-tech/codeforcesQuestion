#include <iostream>
using namespace std;

void solve()
{
  int x, y;
  cin >> x >> y;
  if (y > x + 1)
  {
    cout << "NO\n";
    return;
  }
  if (y % 9 == (x % 9 + 1) % 9)
    cout << "YES\n";
  else
    cout << "NO\n";
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