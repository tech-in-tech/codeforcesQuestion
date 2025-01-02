#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int yes = 0;
  for (int i = 2; i < n; i++)
  {
    if (v[i - 1] + v[i - 2] > v[i])
    {
      yes = 1;
      break;
    }
  }
  if (yes)
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}
