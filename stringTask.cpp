#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int main()
{
  string s;
  cin >> s;
  string ans = "";
  for (auto ele : s)
  {
    if (ele != 'A' && ele != 'O' && ele != 'Y' && ele != 'E' && ele != 'U' && ele != 'I' && ele != 'a' && ele != 'o' && ele != 'y' && ele != 'e' && ele != 'u' && ele != 'i')
    {
      ans += ele;
    }
  }

  vector<char> vec(ans.size() * 2);
  int j = 0;

  for (int i = 0; i < vec.size(); i++)
  {
    if (i % 2 == 0)
    {
      vec[i] = '.';
    }
    else
    {
      vec[i] = ans[j];
      j++;
    }
  }
  string st = "";
  for (auto ele : vec)
  {
    st += ele;
  }

  for (int i = 0; i < st.size(); i++)
  {
    st[i] = tolower(st[i]);
  }

  cout << st << "\n";
  return 0;
}