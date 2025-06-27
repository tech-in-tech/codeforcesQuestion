#include <iostream>
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
   
  for (int i = 0; i < n-1; i++)
  {
    if (abs(v[i + 1] - v[i]) <= 1)
    {
      cout<<0<<"\n";
      return;
    }
  }

  if (is_sorted(v.begin(), v.end()) || is_sorted(v.begin(), v.end(), greater<int>()))
  {
    cout << -1 << "\n";
    return;
  }

  if (!is_sorted(v.begin(), v.end()))
  {
    cout << 1 << "\n";
    return;
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