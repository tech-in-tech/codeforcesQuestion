#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  string s;
  cin >> s;
  int oneCount = count(s.begin(), s.end(), '1');
  int left = 0;
  int right = s.size() - 1;
  if (oneCount == 0 or oneCount == 1)
  {
    cout << 0 << "\n";
    return;
  }

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '1')
    {
      left = i;
      break;
    }
  }

  for (int i = s.size() - 1; i >= 0; i--)
  {
    if (s[i] == '1')
    {
      right = i;
      break;
    }
  }

  int si = (right - left) + 1;
  if (si == oneCount)
  {
    cout << 0 << "\n";
    return;
  }
  int countZero = 0;
  for (int i = left; i <= right; i++)
  {
    if (s[i] == '0')
    {
      countZero++;
    }
  }

  cout<<countZero<<"\n";

  /*
  1234567
  1111000
   l  r
  */
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