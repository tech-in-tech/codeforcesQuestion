#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];
    int res = a.back();
    for (int i = 1; i < n; ++i)
    {
      res += max(0, a[i - 1] - b[i]);
    }
    cout << res << "\n";
  }

  return 0;
}
