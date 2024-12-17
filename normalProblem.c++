#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    string ans = "";
    for (auto ele : s)
    {
      if (ele == 'p')
      {
        ans += 'q';
      }
      else if (ele == 'q')
        ans += 'p';
      else
        ans += 'w';
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<"\n";
  }
  return 0;
}