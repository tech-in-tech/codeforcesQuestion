#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }
  for (int j = 0; j < n - 2; j++)
  {
    for (int i = 1; i < n - 1; i++)
    {
      if ((vec[i] > vec[i - 1]) && (vec[i] > vec[i + 1]))
      {
        if (vec[i] > vec[i + 1])
        {
          swap(vec[i], vec[i + 1]);
        }
      }
    }
  }

  if (is_sorted(vec.begin(), vec.end()))
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
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