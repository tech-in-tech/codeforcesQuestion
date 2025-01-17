#include <iostream>
#include <climits>
#include <bits\stdc++.h>
#include <vector>
using namespace std;

// #define ll long long

void solve()
{
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  int cnt = 0;

  // Input values for a and b
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }

  // Count where a[i] < b[i]
  for (int i = 0; i < n; i++)
  {
    cnt += (a[i] < b[i]);
  }

  if (cnt >= 2)
  {
    cout << "NO\n";
  }
  else if (cnt == 0)
  {
    cout << "YES\n";
  }
  else
  {
    int mx = 0;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      if (a[i] < b[i])
      {
        mx = b[i] - a[i];
      }
      else
      {
        mn = min(mn,a[i]-b[i]);
      }
    }
    if (mx<=mn)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
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
