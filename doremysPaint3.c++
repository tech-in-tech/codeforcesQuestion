#include<iostream>
#include<vector>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<int> vec(n);
  for(int i =0;i<n;i++){
    cin>>vec[i];
  }
  unordered_map<int,int> mp;
  for(auto ele:vec){
    mp[ele]++;
  }
  if(mp.size()==1){
    cout<<"YES\n";
  }
  else if(mp.size()==2){
    vector<int> a;
    for(auto ele:mp){
      a.push_back(ele.second);
    }
    if(abs(a[0]-a[1])<=1) cout<<"YES\n";
    else cout<<"NO\n";
  }
  else cout<<"NO\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}