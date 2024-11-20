#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    if (s[0] - '0' < s[2] - '0')
    {
      if (s[1] == '>')
        s[1] = '<';
      else if (s[1] == '=')
        s[1] = '<';
    }
    else if (s[0] - '0' > s[2] - '0')
    {
      if (s[1] == '<')
        s[1] = '>';
      else if (s[1] == '=')
        s[1] = '>';
    }
    else
    {
      if (s[1] == '<')
        s[1] = '=';
      else if (s[1] == '>')
        s[1] = '=';
    }
    cout<<s<<"\n";
  }
  return 0;
}