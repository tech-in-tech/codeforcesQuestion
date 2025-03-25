#include <iostream>
#include <unordered_map>
using namespace std;
void solve()
{
  long long n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  unordered_map<char, long long> mp;
  for (auto ele : s)
  {
    mp[ele]++;
  }
  long long oddCharCount = 0;
  long long evenCharCount = 0;

  for (auto ele : mp)
  {
    if (ele.second % 2 != 0)
      oddCharCount++;

    else
    {
      evenCharCount++;
    }
  }

  if (k < oddCharCount - 1)
  {
    cout << "NO\n";
  }
  else
  {
    cout << "YES\n";
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