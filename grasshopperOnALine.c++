#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  long long x, k;
  cin >> x >> k;
  if (x % k == 0)
  {
    cout << 2 << "\n";
    cout << x - 1 << " " << 1 << "\n";
  }
  else
  {
    cout << 1 << "\n";
    cout << x << "\n";
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