#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void solve(){

  int n;
  cin>>n;
  vector<int> v(n);
  for(int i = 0;i<n;i++){
    cin>>v[i];
  }
  int minDiff = INT_MAX;
  for(int i = 1;i<n;i++){
    if(v[i-1]>v[i]){
      cout<<0<<"\n";
      return;
    }
    else{
      minDiff = min(minDiff,abs(v[i-1]-v[i]));
    }
  }
  cout<<(minDiff/2)+1<<"\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}