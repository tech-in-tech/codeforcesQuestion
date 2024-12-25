#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n,k;
  cin>>n>>k;
  vector<int> v(n);
  for(int i= 0;i<n;i++){
    cin>>v[i];
  }
  int gold = 0;
  int ans =0;
  for(int i = 0;i<n;i++){
    if(v[i]>=k){
      gold+=v[i];
    }
    if(v[i]==0 and gold>0){
      gold--;
      ans++;
    }
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