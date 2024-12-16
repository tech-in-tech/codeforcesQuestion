#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s = "";
    for (int i = 0; i < n; i++)
    {
      s = "";
      for (int j = 0; j < n; j++)
      {
        s += (i + j) % 2 == 0 ? "##" : "..";
      }
      cout << s << "\n";
      cout << s << "\n";
    }
  }
  return 0;
}