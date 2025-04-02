#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <numeric> // For std::gcd
using namespace std;

void solve()
{
  int n;
  cin >> n;

  vector<int> permutationArray(n);

  for (int i = 0; i < n; i++)
  {
    cin >> permutationArray[i];
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    
    ans = __gcd(ans, abs((i + 1) - permutationArray[i]));
  }
  cout << ans << "\n";
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
