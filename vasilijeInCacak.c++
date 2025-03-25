#include <iostream>
using namespace std;
void solve()
{
  long long n, k, x;
  cin >> n >> k >> x;
  long long first_n_sum = (k * (k + 1)) / 2;
  long long last_n_sum = (k * (2 * n - k + 1)) / 2;
  if (x >= first_n_sum and x <= last_n_sum)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
}
int main()
{
  long long t;
  cin>>t;
  while (t--)
  {
    solve();
  }
  return 0;
}



