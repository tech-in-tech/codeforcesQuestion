#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, x;
  cin >> n >> x;
  vector<int> doors(n);
  for (int i = 0; i < n; i++)
  {
    cin >> doors[i];
  }
  int windowSize = 1;
  int oneCount = count(doors.begin(), doors.end(), 1);

  if (oneCount > 1)
  {
    int left = 0, right = n - 1;
    // find left most 1
    for (int i = 0; i < n; i++)
    {
      if (doors[i] == 1)
      {
        left = i;
        break;
      }
    }

    // find right most one
    for (int i = n - 1; i > 0; i--)
    {
      if (doors[i] == 1)
      {
        right = i;
        break;
      }
    }
    // find window size
    windowSize = right - left + 1;
  }

  (windowSize<=x)?cout<<"YES\n":cout<<"NO\n";
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