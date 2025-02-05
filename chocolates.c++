#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<long long> vec(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }
  long long ans = 0;
  ans += vec[n - 1];
  long long maxi = vec[n - 1] - 1;
  for (int i = n - 2; i >= 0; i--)
  {

    ans += min(vec[i], maxi);
    maxi = min(maxi, vec[i]) - 1;
    if (maxi <= 0)
    {
      break;
    }
    // mx = 1
    // ans = 10
    // 1 2 1 3 6
    //    i
  }
  cout << ans << "\n";
  return 0;
}