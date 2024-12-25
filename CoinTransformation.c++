#include <iostream>
using namespace std;

long long solve(long long n)
{
  long long c = 1;
  while (n > 3)
  {
    c *= 2;
    n /= 4;
  }
  return c;
}

int main()
{
  int test;
  cin >> test;
  while (test--)
  {
    long long nun;
    cin >> nun;
    cout << solve(nun) << endl;
  }
  return 0;
}