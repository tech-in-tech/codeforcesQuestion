#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<int> h(n);
  map<int,int> m;
  for(int i=0;i<n;i++){
    cin>>h[i];
    m[h[i]]++;
  }
  int ans=n-1;
  for(auto i:m){
    ans = min(ans,n-i.second);
  }
  cout<<ans<<"\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}