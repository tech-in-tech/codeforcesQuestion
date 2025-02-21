#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n,q;
  cin>>n>>q;
  vector<int> candies(n),queries(q);
  for(int i =0;i<n;i++){
    cin>>candies[i];
  }
  for(int i =0;i<q;i++){
    cin>>queries[i];
  }

  sort(candies.rbegin(),candies.rend());
  vector<int> prefixSumCandies(n);
  prefixSumCandies[0] = candies[0];
  for(int i = 1;i<n;i++){
    prefixSumCandies[i] = prefixSumCandies[i-1]+candies[i];
  }
  // for(auto ele:prefixSumCandies){
  //   cout<<ele<<" ";
  // }
  //  now find the lower bound of all the 
  vector<int> ans(q);
  for(int i = 0;i<q;i++){
    auto it = lower_bound(prefixSumCandies.begin(),prefixSumCandies.end(),queries[i]);
    if(it!=prefixSumCandies.end()){
      ans[i] = (it-prefixSumCandies.begin())+1;
    }
    else ans[i] = -1;
  }

  for(auto ele:ans){
    cout<<ele<<"\n";
  }
  
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}