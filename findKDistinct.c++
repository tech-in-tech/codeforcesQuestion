#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y, k;
    cin >> x >> y >> k;
    if (k % 2)
    {
      cout << x << " " << y << "\n";
      k--;
    }
    for (int i = 1; i < k / 2 + 1; i++)
    {
      cout << x - i << " " << y - i << "\n";
      cout << x + i << " " << y + i << "\n";
    }
  }

  return 0;
}