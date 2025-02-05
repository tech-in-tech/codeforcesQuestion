#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> vec(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }
  vector<pair<int,int>> vp;
  for(int i = 0;i<n;i++){
    vp.push_back({vec[i],i});
  }
  sort(vp.begin(),vp.end());
  vector<int> ans;
  int i = 0;
  while(i < n && k >= vp[i].first){
    k-=vp[i].first;
    ans.push_back(vp[i].second+1);
    i++;
  }
  cout<<ans.size()<<"\n";
  for(auto ele:ans){
    cout<<ele<<" ";
  }
  cout<<"\n";
  return 0;
}