#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<pair<int,int>> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i].first>>v[i].second;
  }
  int maxRes = INT_MIN;
  int idx = -1;
  for(int i = 0;i<n;i++){
    if(v[i].second>maxRes and v[i].first<=10){
      maxRes = v[i].second;
      idx = i;
    }
  }
  cout<<idx+1<<endl;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}