#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  long long n;
  cin >> n;
  vector<long long> v(n);

  // Input for the vector
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  // Checking condition for adjacent elements
  for (int i = 0; i < n - 1; i++)
  {
    if (2 * min(v[i], v[i + 1]) > max(v[i], v[i + 1]))
    {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
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
