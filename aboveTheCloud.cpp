#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  unordered_map<char, int> freq;
  int i = 0;
  int j = n - 1;
  int flag = 0;
  freq[s[i]]++;
  freq[s[j]]++;
  for (int i = 1; i < n - 1; i++)
  {
    if (freq[s[i]] >= 1)
    {
      flag = 1;
      break;
    }
    freq[s[i]]++;
  }

  if (flag == true)
    cout << "Yes\n";

  else
    cout << "No\n";
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