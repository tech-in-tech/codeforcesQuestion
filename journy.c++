#include <iostream>
using namespace std;

void solve()
{
  int t;
  cin >> t;

  while (t--)
  {
    long long n, a, b, c;
    cin >> n >> a >> b >> c;

    long long cycleDistance = a + b + c;
    long long fullCycle = n / cycleDistance;
    long long remDistance = n - fullCycle * cycleDistance;

    long long days = fullCycle * 3;

    if (remDistance <= 0)
    {
      cout << days << endl;
    }
    else if (remDistance <= a)
    {
      cout << days + 1 << endl;
    }
    else if (remDistance <= a + b)
    {
      cout << days + 2 << endl;
    }
    else
    {
      cout << days + 3 << endl;
    }
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}