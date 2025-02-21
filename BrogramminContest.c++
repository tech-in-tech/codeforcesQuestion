#include <iostream>
#include <string>
using namespace std;

void solve()
{
  int n;
  string s;
  cin >> n >> s;
  int countZero = 0;
  int countOne = 0;
  for (auto ele : s)
  {
    if (ele == '0')
      countZero++;
    else
      countOne++;
  }
  int op = 0;
  if (countZero == n)
  {
    cout << 0<<"\n";
    return;
  }
  else if (countOne == n)
  {
    cout << 1<<"\n";
    return;
  }
  else
  {
    for (int i = 1; i < n; i++)
    {
      if (s[i - 1] != s[i])
        op++;
    }
    if(s[0]=='1') op+=1;
  }
  cout<<op<<"\n";
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
