#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for(int i = 0;i<n;i++){
    a[i] = n+1-a[i];
  }
  for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<"\n";
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

/* 
a1 + b1 ≤ a2 + b2 ≤ a3 + b3 ≤ … ≤ an + bn.
1

*/