#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  vector<int> worms(n);
  for (int i = 0; i < n; i++)
  {
    cin>>worms[i];
  }
  // sort(worms.begin(),worms.end());
  int m;
  cin >> m;
  vector<int> juicyWormm(m);
  for (int i = 0; i < m; i++)
  {
    cin>>juicyWormm[i];
  }
  vector<int> prefixSumWorms(n);
  prefixSumWorms[0] = worms[0];
  for (int i = 1; i < n; i++)
  {
    prefixSumWorms[i] = prefixSumWorms[i-1]+worms[i];
  }
  vector<int> ans(m);
  for(int i = 0;i<m;i++){
    auto it = lower_bound(prefixSumWorms.begin(),prefixSumWorms.end(),juicyWormm[i]);
    if(it!=prefixSumWorms.end()){
      ans[i] = (it-prefixSumWorms.begin())+1;
    }
    else ans[i] = -1;
  }
  for(auto ele:ans){
    cout<<ele<<"\n";
  }
}
int main()
{
  solve();
  
  return 0;
}