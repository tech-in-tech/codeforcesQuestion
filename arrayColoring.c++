#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  
  int odd = count_if(v.begin(),v.end(),[](int n){return n%2!=0;});
  if(odd%2==0) cout<<"YES\n";
  else{cout<<"NO\n";}
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


