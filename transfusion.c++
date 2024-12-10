#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    long long sumOdd = 0;
    long long sumEven = 0;
    for (int i = 0; i < n; i++)
    {
      if (i % 2 == 0)
        sumEven += a[i];
      else
        sumOdd += a[i];
    }
    long long oddPlace = n / 2;
    long long evenPlace = (n + 1) / 2;
    if (sumOdd % oddPlace == 0 and sumEven % evenPlace == 0 and sumOdd / oddPlace == sumEven / evenPlace)
    {
      cout << "YES\n";
    }
    else
      cout << "NO\n";
  }
  return 0;
}