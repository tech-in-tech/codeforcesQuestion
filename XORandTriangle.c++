#include <iostream>
using namespace std;
#define ll long long
void solve()
{
  int x;
  cin >> x;
  if (__builtin_popcountll(x) == 1)
  {
    cout << "-1\n";
    return;
  }
  int y = 0;
  int f1 = 0, f0 = 0;
  for (int i = 0; i <= 30; i++)
  {
    if (x and (1 << i))
    {
      if (f0 and f1 == 0)
      {
        y |= 1 << i;
        f1 = 1;
      }
    }
    else
    {
      if (f0 == 0)
      {
        y |= 1 << i;
        f0 = 1;
      }
    }
  }
  if (f1)
  {
    cout << y << "\n";
  }
  else
  {
    cout << "-1\n";
  }
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
