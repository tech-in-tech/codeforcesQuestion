#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    // Check if all element are already 0
    if (all_of(a.begin(), a.end(), [](int x)
               { return x == 0; }))
    {
      cout << 0 << "\n";
      continue;
    }
    int cnt = 0;
    vector<int> vv;
    for (int i = 0; i < n; i++)
    {
      if (a[i] == 0)
      {

        if (cnt)
          vv.push_back(cnt);
        cnt = 0;
      }
      else
      {
        cnt++;
      }
    }
    if (cnt)
      vv.push_back(cnt);
    if (vv.size() > 1)
      cout << 2 << "\n";
    else
      cout << 1 << "\n";
  }
  return 0;
}