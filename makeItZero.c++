#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }
  if (n % 2 == 0)
  {
    cout << 2 << "\n";
    cout << 1 << " " << n << "\n";
    cout << 1 << " " << n << "\n";
  }
  else
  {
    cout << 4 << "\n";
    cout << 1 << " " << n-1 << "\n";
    cout << 1 << " " << n-1 << "\n";
    cout << n-1 << " " << n << "\n";
    cout << n-1 << " " << n << "\n";
  }
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