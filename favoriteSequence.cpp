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
  vector<int> ans;
  int start = 0, end = n - 1;
  while (start < end)
  {
    ans.push_back(v[start]);
    start++;
    ans.push_back(v[end]);
    end--;
  }
  if(n%2!=0) ans.push_back(v[v.size()/2]);
  for(auto ele: ans){
    cout<<ele<<" ";
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