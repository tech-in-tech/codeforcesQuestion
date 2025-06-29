#include <iostream>
using namespace std;
void solve()
{
  int n, s;
  cin >> n >> s;
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    int d1, d2, x, y;
    cin >> d1 >> d2 >> x >> y;
    if (x == y && d1 == d2)
      cnt++;
    if (x + y == s && d1 != d2)
      cnt++;
  }
  cout << cnt << "\n";
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