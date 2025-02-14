#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin >> s;
  bool flag = false;
  for (int i = 1; i < s.size(); i++)
  {
    if (s[i - 1] == s[i])
    {
      flag = true;
      break;
    }
  }
  (flag == true) ? cout << "1\n" : cout << s.size()<<"\n";
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