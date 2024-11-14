#include <iostream>
#include <string>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int x = 0, y = 0;
    bool found = false;

    for (int i = 0; i < 100 * n; i++)
    {
      if (x == a && y == b)
      {
        cout << "YES\n";
        found = true;
        break; // Exit loop for current test case
      }

      // Move based on the direction in the string
      if (s[i % n] == 'N')
        y++;
      else if (s[i % n] == 'S')
        y--;
      else if (s[i % n] == 'E')
        x++;
      else
        x--;
    }

    if (!found)
    {
      cout << "NO\n";
    }
  }

  return 0;
}
