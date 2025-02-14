#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve()
{
  int k, n;
  cin >> n >> k;
  vector<long long> vec(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }
  vector<long long> a(n);
  a = vec;

  if (k >= 2)
  cout << "YES\n";
  else if(is_sorted(vec.begin(),vec.end())){
    cout<<"YES\n";
  }
  else cout<<"NO\n";
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