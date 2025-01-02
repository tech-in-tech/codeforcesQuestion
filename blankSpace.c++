#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  int maxConsecutiveZero = 0;
  int maxCount = 0;
  for (auto ele : v)
  {
    if (ele == 0)
    {
      maxCount++;
    }
    else
    {
      maxConsecutiveZero = max(maxConsecutiveZero, maxCount);
      maxCount = 0;
    }
  }
  maxConsecutiveZero = max(maxConsecutiveZero, maxCount);

  cout << maxConsecutiveZero << "\n";
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